all:
	
	gcc -Wall -ansi -c read_words.c

	gcc -Wall -ansi -c file_size.c

	gcc -Wall -ansi -c print_words.c

	gcc -Wall -ansi -c alphabetical_word_count.c

	gcc -Wall -ansi -c create_alphabetical_array.c

	gcc -Wall -ansi -c free_alphabetical_array.c

	gcc -Wall -ansi -c print_words_alphabetically.c

	gcc -Wall -ansi -c print_alphabetical_word_count.c

	gcc -Wall -ansi -o alphabetical_printing file_size.o read_words.o print_words.o alphabetical_word_count.o print_alphabetical_word_count.o create_alphabetical_array.o free_alphabetical_array.o print_words_alphabetically.o alphabetical_printing.c

clean:
	rm *.o alphabetical_printing	