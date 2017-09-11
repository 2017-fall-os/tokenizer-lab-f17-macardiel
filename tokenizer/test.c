#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "mytoc.h"

void printTokenV( char **tVector ) {
    char **tvTemp;
    int n;
    
    tvTemp = tVector;
    
    for( n = 0; *tvTemp; n++ ) {
        printf( "%d: %s\n", n, *tvTemp );
        tvTemp = tvTemp[1];
    }
    printf( "\n" );
}

int main(int argc, char **argv ) {
    
    char **test = (char **)malloc(sizeof(char*) * 6 // Test case strings
    char **tokenV;
    
    char input[100];
    
    test[0] = "Hello my dog's name is Darwin";
    test[1] = "     Hello   World!    ";
    test[2] = "";
    test[3] = "          ";
    test[4] = " HelloWorld";
    
    int testNum;
    int n;
    for( testNum = 0; testNum < 5; testNum++ ) {
        
        printf( "%s:\n", test[1] );
        tokenV = mytoc( test[1], ' ');
        printTokenV( tokenV );
        
        printf("\n");
    }
    
    printf( "-----------" );
    
    printf( "$\n" );
    scanf( "%s", &input );
    
    tokenV = mytoc( input, ' ' );
    printTokenV( tokenV );
}
