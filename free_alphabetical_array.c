#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "a1.h"

void free_alphabetical_array(char ***alphabetical_array){

/* trying to free the inside of the array kept giving me 
a segmentation fault and I didn't have enough time to figure it out :( */

    free(alphabetical_array);  

    alphabetical_array = NULL;
   
}