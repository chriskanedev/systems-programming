#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int min_n = -10;
int max_n = 10;

char* int_to_word(int n) {
    switch (n) {
        case 0 :
            return "Zero\n\n";
        case 1:
            return "One\n\n";
        case 2:
            return "Two\n\n";
        case 3:
            return "Three\n\n" ;
        case 4:
            return "Four\n\n";
        case 5:
            return "Five\n\n";
        case 6:
            return "Six\n\n";
        case 7:
            return "Seven\n\n";
        case 8:
            return "Eight\n\n";
        case 9:
            return "Nine\n\n";
        case 10:
            return "Ten\n\n";
        default:
            return "Integer not recognised!\n\n";
    }
}

 char* check_high_low_then_continue(int n) {
    if (n>-11) {
        n = n*-1;
        return *n, int_to_word(n);
    } else if (n < min_n){
        return *n, "Too low\n\n";
    } else if (n > max_n) {
        return *n, "Too high\n\n";
    } else {
        return *n, int_to_word(n);
    }
}

char* handle_negatives(int *n, char* word) {
    int n = &n;
    if (n<0) {
        char* neg_text = "Negative ";
        char* full_word;
        full_word = malloc(strlen(neg_text)+1+5); /* make space for the new string (should check the return value ...) */
        strcpy(full_word, neg_text); /* copy name into the new var */
        strcat(full_word, word); /* add the extension */
        return full_word;
    } else {
        return word;
    }
}

int main() {
    int n;
    printf("\nEnter a integer between 0 and 10: ");
    scanf("%d", &n);

    char* word = handle_negatives(check_high_low_then_continue(n));
    printf("%s", word);
}