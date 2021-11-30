#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input your longest side: ");
    scanf("%d", &a); // A is biggest.
    printf("Input your second longest side: ");
    scanf("%d", &b); // b is next
    printf("Input your smallest side: ");
    scanf("%d", &c); // c is smallest!

    // Your code here. Assume a > b > c.

    int two_side_squared = (b*b) + (c*c);
    int hypotenuse_squared = (a*a);

    if (two_side_squared == hypotenuse_squared) {
        printf("The triangle is right angled. ");
    } else {
        printf("The triangle isn't right angled. ");
    }
}