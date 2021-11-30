#include <stdio.h>

int main() {
    int num1, num2;
    printf("Input your two numbers, separated by spaces.\n\t>> ");
    scanf("%d %d", &num1, &num2);

    // Your code here, which should swap the values of `num1` and `num2`

    int old_num1 = num1;
    int old_num2 = num2;

    num1 = old_num2;
    num2 = old_num1;

    // Output to demonstrate whether you got this correct!
    printf("The value of num1 is now %d and the value of num2 is now %d.", num1, num2);
    return 0;
}