//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int length, width, perimeter, area;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);
    area = length * width;

    printf("Perimeter of rectangle: %d\n", perimeter);
    printf("Area of rectangle: %d\n", area);
    return 0;
}
