// We converge the search space till l and r points single element.
// If the middle location falls in the first pulse, the condition A[m] < A[r]
// doesn’t satisfy, we converge our search space to A[m+1 … r].
// If the middle location falls in the second pulse, the condition A[m] < A[r]
// satisfied, we converge our search space to A[1 … m].
// At every iteration we check for search space size, if it is 1, we are done.
// Given below is implementation of algorithm.

int BinarySearchIndexOfMinimumRotatedArray(int A[], int l, int r)
{
    if (A[l] <= A[r])
        return l;
    while (l <= r)
    {
        if (l == r)
            return l;
        int m = l + (r - l) / 2;
        if (A[m] < A[r])
            r = m;
        else
            l = m + 1;
    }
    return -1;
}

int BinarySearchIndexOfMinimumRotatedArray(int A[], int size)
{
    return BinarySearchIndexOfMinimumRotatedArray(A, 0, size - 1);
}