void rFilter(char *s)
{
    int n = strlen(s);

    int i = n - 1;
    while (i >= 0 && !isalpha(s[i]))
    {
        s[i] = '_';
        --i;
    }
}