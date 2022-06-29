// * Problem Statement *
// Given a sorted array of N distinct elements. Find a key in the array using least number of comparisons.
// ---------------Unique elements-----------------

// Typical algorithm for binary search
int BinarySearch(int A[], int l, int r, int key)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (A[m] == key) // 1st comparision
            return m;

        if (A[m] > key) // 2nd comparision
            return BinarySearch(A, l, m - 1, key);

        return BinarySearch(A, m + 1, r, key);
    }
    return -1;
}

// The following uses fewer number of comparisions
int BinarySearch(int A[], int l, int r, int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l) / 2;
        if (A[m] <= key)
            l = m;
        else
            r = m;
    }
    if (A[l] == key)
        return l;
    if (A[r] == key)
        return r;
    else
        return -1;
}