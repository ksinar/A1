#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "a1.h"

void print_alphabetical_word_count(int *count){
    int letter_start = 65;

    int i = 0;

    for(i = 0; i < 26; i++){
        printf("%c = %i", letter_start, count[i]);
        if(i != 25){
            printf(", ");
        }
        letter_start++;
    }

    printf("\n");
}