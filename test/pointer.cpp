
int main() {
    int b;
    int *a = &b;
    // a = &b;
    // *a = b;
    int *p = &b;
    *p = 2;
    *a = 4;

    *a += *p;
    b = *a;
    return b;
}
