#include <stdio.h>

int main() {
    int n;
    int i;

    printf("\nEnter the number of terms to FizzBuzz: ");
    scanf("%d", &n);
    n += 1;
    for (i = 1; i < n; i++) {
        if (((i%3) == 0) && ((i%5) == 0)) {
            printf("FizzBuzz ");
        } else if ((i%3) == 0) {
            printf("Fizz ");
        } else if ((i%5) == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}