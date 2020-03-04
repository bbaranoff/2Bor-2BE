#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
        int i=0;// nombre d'années
        bool be = 0;
        if (i==0) be=1; // why ?
    	FILE * confFile = fopen( "conf.txt", "r" );
    	if ( confFile == NULL ) {
	        printf( "Cannot open configuration file.\n" );
        	exit( EXIT_FAILURE );
		FILE * confFile = fopen( "conf.txt", "r" );}
        while ( be || !be ) {
                printf("That is the question\n");
                i++; //une année de plus
                if (i >= rand() % 129 )  be=0; // why
    	fclose( confFile );
	exit(EXIT_SUCCESS);
	}
}
