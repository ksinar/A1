#include <stdlib.h>

#define MAX_CHARACTERS 45


#define BUFFER_MAX 300000


#define ALPHABET_LENGTH 26


int file_size(FILE *fp);

char ** read_words(FILE *fp);

void print_words(char **ptr);

int * alphabetical_word_count(char **ptr);

void print_alphabetical_word_count(int *count);

char *** create_alphabetical_array(char ** words, int * count);

void free_alphabetical_array(char ***alphabetical_array);

void print_words_alphabetically(char ***alphabetical_array);