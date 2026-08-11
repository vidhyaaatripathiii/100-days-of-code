//Write a program to swap two numbers using a third variable

#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}