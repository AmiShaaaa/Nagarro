// * Problem Statement *
//  Given an array of N distinct integers, find floor value of input ‘key’. Say, A = {-1, 2, 3, 5, 6, 8, 9, 10} and key = 7, we should return 6 as outcome.

int Floor(int A[], int l, int r, int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l) / 2;

        if (A[m] <= key)
            l = m;
        else
            r = m;
    }
    return A[l];
}

int Floor(int A[], int size, int key)
{
    if (key < A[0])
        return -1;
    return Floor(A, 0, size, key);
}