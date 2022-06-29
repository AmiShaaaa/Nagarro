// #include <iostream>
// #include <vector>
// #include <array>

#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)

// int search(int arr[], int capacity, int key)
// {
//     for (int i = 0; i < capacity; i++)
//         if (arr[i] == key)
//             return i;
//     return -1;
// }

// Driver code
// int main()
// {
//     int arr[] = {2, 3, 4, 10, 40};
//     int x = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Function call
//     int result = search(arr, n, x);
//     (result == -1)
//         ? cout << "Element is not present in array"
//         : cout << "Element is present at index " << result;
//     return 0;
// }

// ------------------------------------------------------------------

// Improve Linear Search Worst-Case Complexity
// Time Complexity of order O(n)

// void search(vector<int> arr, int search_Element)
// {
//     int left = 0;
//     int length = arr.size();
//     int position = -1;
//     int right = length - 1;

//     // Running loop from 0 to right
//     for (left = 0; left <= right;)
//     {
//         if (arr[left] == search_Element)
//         {
//             position = left;
//             cout << "Element found at " << position + 1 << " with " << left + 1 << " attempt" << endl;
//             ;
//             break;
//         }
//         if (arr[right] == search_Element)
//         {
//             position = right;
//             cout << "Element found at " << position + 1 << " with " << right + 1 << " attempt" << endl;
//             break;
//         }
//         left++;
//         right--;
//     }
//     if (position == -1)
//     {
//         cout << "Not found in array with " << left << " attempts" << endl;
//     }
// }

// // Driver code
// int main()
// {
//     vector<int> arr{1, 2, 3, 4, 5};
//     int search_element = 5;

//     // Function call
//     search(arr, search_element);
// }

// ---------------------------------------------------------------------------------------------------------------

// Recursive method for Linear Search

int linearsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return -1;
    }
    if (arr[size] == key)
    {
        return size;
    }
    else
    {
        int ans = linearsearch(arr, size - 1, key);
        return ans;
    }
}

// Driver code
int main()
{
    int arr[5] = {1, 5, 6, 9, 4};
    int key = 5;
    int ans = linearsearch(arr, 5, key);
    if (ans == -1)
    {
        cout << "The element " << key << " is not found." << endl;
    }
    else
    {
        cout << "The element " << key << " is found at " << ans << " index of the given array." << endl;
    }
    return 0;
}