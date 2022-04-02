int *getPointerToArray(int n)
{
    int *res = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> res[i];
    }

    return res;
}