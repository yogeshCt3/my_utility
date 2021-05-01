#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
int main (int argc, char *argv[]) {
	
	char name[100];
	if(argc == 1) {
		// if user has not entered the file name
		printf("\nEnter the file name : ");
		scanf("%s", name);
		
		if(strlen(name) == 0) {
			// if user has entered the file name as empty
			printf("Empty file name: Exiting process");
			exit(1);
		}
        }
                                              

	strcpy(name, argv[1]);       


	FILE *f;
	f = fopen(name, "w");
	if(f == NULL) {
		printf("unable to open file");
		exit(1);
	} 
		
	

	// getting system time                                                     
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	fprintf(f, "/*\n * Author\t:\tYogesh\n * Date\t\t:\t%02d-%02d-%d \n */",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

	return 0;
}