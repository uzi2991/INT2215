struct Complex {
    float re, im;
}

Complex add(const Complex& a, const Complex& b) {
    return Complex {a.re + b.re, a.im + b.im};
}

Complex subtract(const Complex& a, const Complex& b) {
    return Complex {a.re - b.re, a.im - b.im};
}

Complex multiply(const Complex& a, const Complex& b) {
    return Complex {a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re};
}

