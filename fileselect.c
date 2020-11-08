#include <stdio.h>


void analizefile(char textfile[]){
	
}


void fileSelect(char textfile[]){
	FILE *file;
	int c;

	file = fopen(textfile, "r");
	
	for(int i=0; i < 600; i++){
		/*fgetc is a pointer to a file stream that gets a char from
		 * file stream and returns it as an int and then increments
		 * the pointer to the next char*/
		c = fgetc(file);
		//that received char is then printed
		printf("%c", c);
	}
	fclose(file);
}
