void reverse(char *s)
{
    int n = strlen(s);

    int l = 0, r = n - 1;
    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}