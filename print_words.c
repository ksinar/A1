#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "a1.h"

void print_words(char **ptr){
    if(*ptr == NULL){
        exit(1);
    }

    int i = 0;

    while(ptr[i] != NULL){
        printf("%s\n", ptr[i]);
        i++;
    }
}