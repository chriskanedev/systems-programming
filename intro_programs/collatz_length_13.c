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
    int i;
    int highest_n = 0;
    int highest_sequence = 0;

    for (i = 1; i < 100; i++) {
        int res = collatzLength(i, counter);
        if (res > highest_sequence) {
            highest_sequence = res;
            highest_n = i;
        }
    }
    printf("The highest sequence (from n < 100) is n=%d, sequenceLen=%d. ", highest_n, highest_sequence);
}