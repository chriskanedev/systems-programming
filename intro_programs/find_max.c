#include <stdio.h>

int main() {
    int curr;
    int highest;
    int i;
    for (i = 0; i < 10; i++) {
        printf("Input the next number: ");
        scanf("%d", &curr);
        if (i > highest) {
            highest = i;
        }
    }
    printf("The highest number is: %d", highest);
}