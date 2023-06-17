#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x; // Treat x as a pointer to an unsigned long long

    // Extract the exponent bits using bitwise operations
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Convert the exponent to hexadecimal format
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);

    // Convert the exponent to binary format
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
