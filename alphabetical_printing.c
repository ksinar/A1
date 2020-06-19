#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "a1.h"

int main(){
  FILE *fp1;
  FILE *fp2;

  char ** words1 = NULL;

  char ** words2 = NULL;

  char *** alphabetical_array1 = NULL;

  char *** alphabetical_array2 = NULL;

  int *count1 = malloc(sizeof(int) * 26);

  int *count2 = malloc(sizeof(int) * 26);

  /* opens first file and performs the specified operations on it, then closes file and frees memory */

  if((fp1 = fopen("a1_words.txt","r")) == NULL){
		printf("Memory not allocated. (file 1)\n");
		exit(1);
	}

  words1 = read_words(fp1);

  print_words(words1);

  printf("\n");

  count1 = alphabetical_word_count(words1);

  print_alphabetical_word_count(count1);

  printf("\n");

  alphabetical_array1 = create_alphabetical_array(words1, count1);

  print_words_alphabetically(alphabetical_array1);

  free_alphabetical_array(alphabetical_array1);
  
  
  fclose(fp1);

  free(words1);

  free(count1);

  /* opens second file and performs the specified operations on it, then closes file and frees memory */

  if((fp2 = fopen("a1_moreWords.txt","r")) == NULL){
	  printf("Memory not allocated. (file 2)\n");
		exit(1);
	}

  words2 = read_words(fp2);

  print_words(words2);

  printf("\n");

  count2 = alphabetical_word_count(words2);

  print_alphabetical_word_count(count2);

  printf("\n");

  alphabetical_array2 = create_alphabetical_array(words2, count2);

  print_words_alphabetically(alphabetical_array2);

  free_alphabetical_array(alphabetical_array2);
  
  
  fclose(fp2);

  free(words2);

  free(count2);
    
  return 0;
}