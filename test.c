#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
        int i=0;// nombre d'années
        bool be = 0;

        if (i==0) be=1; // why ?

        while ( be || !be ) {
                printf("That is the question\n");
                i++; //une année de plus
                if (i >= rand() % 129 )  be=0; // why ?
        }
}
