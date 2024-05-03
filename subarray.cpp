#include <bits/stdc++.h>
using namespace std;
//void printSubarrays(int arr[], int n) {
//    // Generate all subarrays
//    for (int start = 0; start < n; ++start) {
//        for (int end = start; end < n; ++end) {
//            // Print subarray from index 'start' to index 'end'
//            for (int i = start; i <= end; ++i) {
//                cout << arr[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int target;
    cout << "target" ; 
    cin >> target;
   int sum = 0 ;
   int count  = 0;
    int arr[n];
    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << "All Subarrays:" << endl;
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            // Print subarray from index 'start' to index 'end'
            for (int i = start; i <= end; ++i) {
                cout << arr[i] << " ";
                sum = sum + arr[i];
            }
            cout << "sum = " <<sum << endl;
            if(sum == target)
            count++;
            sum = 0;
            cout << endl;
        }
    }
    cout << "toal target " << count << endl;
    return 0;
}

