#include <iostream>
#include <deque>
#include <vector>

using namespace std;

// Solves the maximum of all subarrays of size K problem efficiently using a Deque
void printKMax(int arr[], int n, int k) {
    // Create a Double Ended Queue that will store indices of array elements
    // The queue will store indexes of useful elements in every window
    deque<int> dq;

    // Process first window of size k
    for (int i = 0; i < k; i++) {
        // Remove all elements smaller than the currently being added element
        // from the back of the deque
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        // Add new element index at the back
        dq.push_back(i);
    }

    // Process rest of the elements from arr[k] to arr[n-1]
    for (int i = k; i < n; i++) {
        // The element at the front of the queue is the largest element of previous window
        cout << arr[dq.front()] << " ";

        // Remove elements which are out of this window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove all elements smaller than the currently being added element
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }

        // Add current element index to the back
        dq.push_back(i);
    }

    // Print the maximum element of the last window
    cout << arr[dq.front()] << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        printKMax(arr, n, k);
    }
    return 0;
}
