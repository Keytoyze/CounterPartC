int a[4] = {1, 2, 3, 6};

int k = 4;

int k2 = k;

int func(int ppp) {
    // int a[ppp];
    int a = ppp;
    int a1 = 1;
    int a2 = 1;
    int a3 = 1;
    int a4 = 1;
    int a5 = 1;
    int a6 = 1;
    int a7 = 1;
    int a8 = 1;
    int a9 = 1;
    int a10 = 1;
    int a11 = 1;
    return func(2) + a + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11;
    // int a[ppp];
    // return func(ppp);
}

int main(void) {
    // int p = 6;
    // int k = p + 1;
    // a[3] = a[4] + 77;
    // return k;
    int p = func(33);
}