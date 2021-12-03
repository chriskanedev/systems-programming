#include <stdio.h>

int collatzLength(int n, int counter) {
    if (n == 1) {
        return counter;
    } else {
        if(n % 2 == 0) {
            int val = n/2;
            counter += 1;
            return collatzLength(val, counter);
        } else {
            int val = (3*n)+1;
            counter += 1;
            return collatzLength(val, counter);
        }
    }
}

int main() {
    int counter = 0;
    int n = 6;
    printf("Length of sequence is: %d ", collatzLength(n, counter));
}