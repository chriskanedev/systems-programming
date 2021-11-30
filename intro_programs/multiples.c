#include <stdio.h>

int main() {
    int limit;
    int factor;
    printf("What's the limit on the iteration you want printing?  ");
    scanf("%d", &limit);
    printf("What factor would you like multiples of?  ");
    scanf("%d", &factor);


    // Your code here
    int i;

    printf("\n");
    for (i = 1; i < limit; i++) {
        if ((i % factor) == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}