#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Node structure for the doubly linked list
struct Node {
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val) : prev(p), next(n), key(k), value(val) {};
   Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val) {};
};

// Abstract base class provided by the problem context
class Cache {
   protected: 
   map<int, Node*> mp; // Maps keys to nodes
   int cp;             // Capacity
   Node* tail;         // Double linked list tail pointer
   Node* head;         // Double linked list head pointer
   virtual void set(int, int) = 0; // Pure virtual function
   virtual int get(int) = 0;       // Pure virtual function
};

// Your implementation of the LRUCache
class LRUCache : public Cache {
private:
    // Helper function to remove a node from its current position in the list
    void removeNode(Node* node) {
        if (!node) return;
        
        if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next; // Node was the head
        }
        
        if (node->next) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev; // Node was the tail
        }
    }

    // Helper function to move or insert a node to the front (head) of the list
    void moveToHead(Node* node) {
        if (!node) return;
        
        node->next = head;
        node->prev = NULL;
        
        if (head) {
            head->prev = node;
        }
        head = node;
        
        if (!tail) {
            tail = head;
        }
    }

public:
    // Constructor initialization
    LRUCache(int capacity) {
        cp = capacity;
        head = NULL;
        tail = NULL;
    }

    // Set or insert the value of the key
    void set(int key, int value) override {
        if (cp <= 0) return;

        // Cache Hit: Key already exists
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value; // Update value
            removeNode(node);
            moveToHead(node);
        } 
        // Cache Miss: New key
        else {
            Node* newNode = new Node(key, value);
            
            // If cache is at full capacity, evict the Least Recently Used (tail)
            if (mp.size() >= cp) {
                Node* lruNode = tail;
                if (lruNode) {
                    mp.erase(lruNode->key);
                    removeNode(lruNode);
                    delete lruNode;
                }
            }
            
            // Insert the new node at the head
            moveToHead(newNode);
            mp[key] = newNode;
        }
    }

    // Get the value of the key
    int get(int key) override {
        // Cache Hit
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            // Move it to the head since it was recently accessed
            removeNode(node);
            moveToHead(node);
            return node->value;
        }
        // Cache Miss
        return -1;
    }
};
