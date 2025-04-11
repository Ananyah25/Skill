#include <iostream>
#include <algorithm> // For sort()

using namespace std;

// Function to find the median of an array
double findMedian(int arr[], int n) {
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Find the median
    if (n % 2 != 0) {
        // Odd number of elements
        return arr[n / 2];
    } else {
        // Even number of elements
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, n);

    cout << "Median is: " << median << endl;

    return 0;
}
#include <iostream>
#include <algorithm> // For sort()

using namespace std;

// Function to find the median of an array
double findMedian(int arr[], int n) {
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Find the median
    if (n % 2 != 0) {
        // Odd number of elements
        return arr[n / 2];
    } else {
        // Even number of elements
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, n);

    cout << "Median is: " << median << endl;

    return 0;
}

