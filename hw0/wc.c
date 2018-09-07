#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
    int i = 0;

    FILE *file;
    char *code;
    size_t n = 0;
    int c;
    char *filename;

    int linecount = 0;
    int wordcount = 0;
    int bytecount = 0;


    if (argc == 1){
	//printf("We have yet to complete this yet");
	//exit(1);
	file = stdin;
    }

    if (argc == 2){

	filename = argv[1];
	file = fopen(filename, "r");
    }

	//lets read our file and get the file size
	//long size;
	//FILE *file;
	/*
	FILE *f;
	f = fopen(filename, "rb");
	if (f == NULL) {
	    printf("You attempted to open a file, and it didn't happen");
	    exit(1);
	}
	fseek(f, 0, SEEK_END);
	bytecount = ftell(f);
	fclose(f);
	
	*/
	
	//we have a flag to see whether we start counting a word
	int word = 0;

	int prevc;

	//Okay so we have to check the newline
	//so lets preget the end of file. 

	if (file) {

		//so we shall do while. 

	    while ((c = getc(file)) != EOF) {
			//putchar(c);
			
			bytecount++;

			if (c == 10){
			    linecount++;
			}

			if (c == 10 || c == 32 || c == 9) {
			    //now we check if wordprog is 0 or 1
				if (word == 1){
			    	word = 0;
				}    
			}
			else {
			    //this means we should start counting!
			    //A non space was found, when it was before
			    if (word == 0){
					word = 1;
					wordcount++;
			    }
			}
	    }
	    fclose(file);
    }

    if (argc > 2){
	printf("There are too many arguments, you have %d ",argc);
	exit(1);
    
    }
    
    printf("\r%d%d  %d %s\r\n",linecount,wordcount,bytecount,filename);

    return 0;
}



