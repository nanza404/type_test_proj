#include <stdio.h>
#include "fileselect.c"

int main(){
	/*this char string is used by the fileselect function in FBSN
	 * (file by same name) as the source of txt file to open */
	char textfile[] = "Frankenstein.txt";	
	fileSelect(textfile);
	return 0;
}




















