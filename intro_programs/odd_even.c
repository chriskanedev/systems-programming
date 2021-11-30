#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Input your first number: ");
    scanf("%d", &a);
    printf("Input your second number: ");
    scanf("%d", &b);
    printf("Input your third number: ");
    scanf("%d", &c);
    printf("Input your fourth number: ");
    scanf("%d", &d);
    printf("Input your fifth number: ");
    scanf("%d", &e);

    // Your code here
    if ((a % 2) == 0)  {
        printf("\na is Even ");
    } else {
        printf("\na is Odd");
    }

    if ((b % 2) == 0)  {
        printf("\nb is Even ");
    } else {
        printf("\nb is Odd");
    }

    if ((c % 2) == 0)  {
        printf("\nc is Even ");
    } else {
        printf("\nc is Odd");
    }

    if ((d % 2) == 0)  {
        printf("\nd is Even ");
    } else {
        printf("\nd is Odd");
    }

    if ((e % 2) == 0)  {
        printf("\ne is Even ");
    } else {
        printf("\ne is Odd");
    }
}