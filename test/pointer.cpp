
int main() {
    int *a;
    int b;
    // a = &b;
    // *a = b;
    int *p = &b;

    *a += 222;
    b = *a;

}
