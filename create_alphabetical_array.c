#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "a1.h"


char *** create_alphabetical_array(char ** words, int * count){

    int i,j,k = 0;

    int total_words = 0;

    char ***alphabetical_array = malloc(sizeof(char**) * ALPHABET_LENGTH);

    for(i = 0; i < ALPHABET_LENGTH; i++){
        alphabetical_array[i] = malloc(sizeof(char *) * count[i]);

        total_words += count[i];

        for(j = 0; j < count[i]; j++){
            alphabetical_array[i][j] = malloc(sizeof(char) * MAX_CHARACTERS);
        }
    }


    for(i = 0; i < ALPHABET_LENGTH; i++){
        for(j = 0; j < total_words; j++){
            if((words[j][0]) == (97 + i)){
                alphabetical_array[i][k] = words[j];
                k++;

            }else if ((words[j][0]) == (65 + i)){
                alphabetical_array[i][k] = words[j];
                k++;
            }
            
        }

        alphabetical_array[i][k] = NULL;

        k = 0;

        if(alphabetical_array[i][0] == NULL){
            alphabetical_array[i] = NULL;
        }
    }
/*
    for(i = 0; i < ALPHABET_LENGTH; i++){
        for(j = 0; j < count[i]; j++){
            if(alphabetical_array[i][j] != NULL){
                printf("%s\n", alphabetical_array[i][j]);
            }
        }

    }
*/
    return alphabetical_array;

}