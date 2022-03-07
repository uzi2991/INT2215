long long int factorial(int n) {
    unsigned long long res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= (unsigned long long)i;
    }
    return res;
}