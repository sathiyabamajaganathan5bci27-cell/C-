#include <bits/stdc++.h>

using namespace std;

// Define the Workshop structure
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

// Define the Available_Workshops structure
struct Available_Workshops {
    int n;
    Workshop* workshops; // Dynamically allocated array of size n
};

// Initializes the available workshops structure and computes end times
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops();
    ptr->n = n;
    ptr->workshops = new Workshop[n];
    
    for (int i = 0; i < n; i++) {
        ptr->workshops[i].start_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].end_time = start_time[i] + duration[i];
    }
    
    return ptr;
}

// Custom comparator to sort workshops by their end times in ascending order
bool compareWorkshops(const Workshop& w1, const Workshop& w2) {
    return w1.end_time < w2.end_time;
}

// Uses a greedy interval scheduling algorithm to calculate maximum non-overlapping workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    if (ptr == nullptr || ptr->n == 0) {
        return 0;
    }
    
    int n = ptr->n;
    
    // Sort workshops based on their end times
    sort(ptr->workshops, ptr->workshops + n, compareWorkshops);
    
    int count = 0;
    int current_end_time = 0;
    
    for (int i = 0; i < n; i++) {
        // A workshop can be attended if its start time is greater than or equal to 
        // the end time of the last attended workshop
        if (ptr->workshops[i].start_time >= current_end_time) {
            count++;
            current_end_time = ptr->workshops[i].end_time;
        }
    }
    
    return count;
}
