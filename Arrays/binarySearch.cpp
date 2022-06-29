#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Recursive method for Binary search
// Time complexity: O(log n)

// int binarysearch(int arr[], int low, int high, int key)
// {
//     if (high >= low)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//             return mid;
//         if (arr[mid] > key)
//             return binarysearch(arr, low, mid - 1, key);

//         return binarysearch(arr, mid + 1, high, key);
//     }
//     return -1;
// }

// int main(void)
// {
//     int arr[] = {2, 3, 4, 10, 40};
//     int x = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = binarysearch(arr, 0, n - 1, x);
//     (result == -1)
//         ? cout << "Element is not present in array"
//         : cout << "Element is present at index " << result;
//     return 0;
// }

// ------------------------------------------------------------------------

// Iterative Implementation
// Time Complexity = O(log n)

// int binarySearch(vector<int> v, int To_Find)
// {
//     int lo = 0, hi = v.size() - 1;
//     int mid;

//     while (hi - lo > 1)
//     {
//         mid = (hi + lo) / 2;
//         if (v[mid] < To_Find)
//         {
//             lo = mid + 1;
//         }
//         else
//         {
//             hi = mid;
//         }
//     }
//     if (v[lo] == To_Find)
//     {
//         cout << lo << endl;
//     }
//     else if (v[hi] == To_Find)
//     {
//         cout << hi << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
//     return 0;
// }

// // Driver code

// int main()
// {
//     vector<int> v = {1, 3, 4, 5, 6};
//     int To_Find = 1;
//     binarySearch(v, To_Find);
//     To_Find = 6;
//     binarySearch(v, To_Find);
//     To_Find = 10;
//     binarySearch(v, To_Find);
//     return 0;
// }

// -----------------------------------------------------------------------

// Another iterative approach
// Time complexity = O(log n)

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
            
        else
            r = m - 1;
    }
    return -1;
}

// Driver code

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}