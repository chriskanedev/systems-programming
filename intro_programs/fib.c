#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        int res;
        res = (fib(n-1) + fib(n-2));
        return res;
    }
}

int main() {
    int n;
    printf("How many fibonacci numbers would you like to display? ");
    scanf("%d", &n);

    // Your code here
    int i;
    for (i = 1; i < n; i++) {
        printf("%d, ", fib(i));
    }
}