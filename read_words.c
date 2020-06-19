#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "a1.h"


char ** read_words(FILE *fp){

	char *buffer = malloc(sizeof(char) * BUFFER_MAX);

	int i,j,k,counter = 0;

	int size = file_size(fp);

	/* allocating memory for array of words  */

	char **words = malloc(sizeof(char *) * (size));

	for(i = 0; i < size; i++){
		words[i] = malloc(sizeof(char) * (MAX_CHARACTERS + 1));
	}

	i = 0;

	j = 0;

	k = 0;

	/* reading in words from file into a buffer, 
	then putting them into the dynamic array */

	while(fgets(buffer, BUFFER_MAX, fp) != NULL){
		for(i = 0; i < strlen(buffer); i++){

			if((buffer[i] != ' ') && (buffer[i] != '\n') && (buffer[i] != '\t') && (buffer[i] != '.') && (buffer[i] != ',')){
				words[j][k] = buffer[i];
				k++;
			}else{
				words[j][k] = '\0';
				j++;
				k = 0;
				counter++;
			}
		}
	
	}	


	words[j] = NULL;

	free(buffer);
	buffer = NULL;

return words;
}
