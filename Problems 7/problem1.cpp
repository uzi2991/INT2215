void update(int* a, int* b)
{   
    int x = *a, y = *b;
    *a = x + y;
    *b = abs(x - y);
}
