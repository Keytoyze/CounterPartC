int main() {
    int a = 1;
    int b = 2;
    int c = a == b;
    if (c) {
        a += 1;
        return 2;
    } else {
        main();
    }
}