#include <stdio.h>

int main(int argcp, char** argv) {
    int aVal = 12;
    int* pA = &aVal;
    printf("%s\n", pA);
    printf("%d\n", *pA);
    return 0;
}