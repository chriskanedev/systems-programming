#include <stdio.h>

int main() {
    int n;
    printf("\nEnter a integer between 0 and 10: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Too low\n\n");
    } else if (n > 10) {
        printf("Too high\n\n");
    } else {
        switch (n) {
            case 0:
                printf("Zero\n\n");
                break;
            case 1:
                printf("One\n\n");
                break;
            case 2:
                printf("Two\n\n");
                break;
            case 3:
                printf("Three\n\n");
                break;
            case 4:
                printf("Four\n\n");
                break;
            case 5:
                printf("Five\n\n");
                break;
            case 6:
                printf("Six\n\n");
                break;
            case 7:
                printf("Seven\n\n");
                break;
            case 8:
                printf("Eight\n\n");
                break;
            case 9:
                printf("Nine\n\n");
                break;
            case 10:
                printf("Ten\n\n");
                break;
            default:
                printf("Integer not recognised!\n\n");
        }
    }
}