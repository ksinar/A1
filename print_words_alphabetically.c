#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "a1.h"

void print_words_alphabetically(char ***alphabetical_array){
    int i = 0;

    int upper_start = 65;

    char *uppercase_letters = malloc(sizeof(char) * 26);

    for(i = 0; i < ALPHABET_LENGTH; i++){
        uppercase_letters[i] = upper_start;
        upper_start++;
    }

    

    for(i = 0; i < ALPHABET_LENGTH; i++){
        printf("'%c'\n", uppercase_letters[i]);
        if(alphabetical_array[i] != NULL){
            print_words(alphabetical_array[i]);
        }else{
            printf("There are no words that begin with the letter '%c'\n", uppercase_letters[i]);
        }
        
        printf("\n");
    }

    free(uppercase_letters);
}