#include <stdio.h>

void collatz(int n) {
    if (n == 1) {
        return;
    } else {
        if(n % 2 == 0) {
            int val = n/2;
            printf("%d, ", val);
            collatz(val);
        } else {
            int val = (3*n)+1;
            printf("%d, ", val);
            collatz(val);
        }
    }
}

int main() {
    int n = 6;
    collatz(n);
}