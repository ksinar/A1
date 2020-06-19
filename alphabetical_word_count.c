#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "a1.h"

int * alphabetical_word_count(char **ptr){

    int *count = malloc(sizeof(int) * 26);

    int lower_start = 97;

    int upper_start = 65;

    int i = 0;

    char *lowercase_letters = malloc(sizeof(char) * 26);

    char *uppercase_letters = malloc(sizeof(char) * 26);

    /* sets 2 arrays with the upper case and lower case
    letters of the alphabet for comparing later */

    for(i = 0; i < ALPHABET_LENGTH; i++){
        count[i] = 0;
        lowercase_letters[i] = lower_start;
        uppercase_letters[i] = upper_start;
        lower_start++;
        upper_start++;
    }

    i = 0;

    /* compares first letters and increments int array */

    while(ptr[i] != NULL){
        if(ptr[i][0] > 96){
            count[(ptr[i][0] - 97)]++;
        }
        i++;
    }

    free(lowercase_letters);
    free(uppercase_letters);

    return count;
}