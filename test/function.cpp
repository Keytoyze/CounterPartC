int f1(int a, int b, int c, int d, int e, int f) {
    int c = a + b;
}

int f2(int c) {
    f1(1, 2, 3, 4, 5, 6);
}

int main(void) {
    f2(5);
}