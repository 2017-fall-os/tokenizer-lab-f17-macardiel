#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "MyToc.h"

void printTokenV( char **tVector ) {
    char **tvTemp;
    int n;
    
    tvTemp = tVector;
    
    for( n = 0; *tvTemp; n++ ) {
        printf( "%d: %s\n", n, *tvTemp );
        tvTemp = tvTemp+2;
    }
    printf( "\n" );
}

int main(int argc, char **argv ) {
    char **tokenV;
    char test1[] = "Hello my dog's name is Darwin";
    char test2[] = "     Hello   World!    ";
    char test3[] = "";
    char test4[] = "          ";
    char test5[] = " HelloWorld";
    char input[100];
        
    printf( "%s:\n", test1 );
    tokenV = mytoc( test1, ' ');
    printTokenV( tokenV );
    
    printf( "%s:\n", test2 );
    tokenV = mytoc( test2, ' ');
    printTokenV( tokenV );
    
    printf( "%s:\n", test3 );
    tokenV = mytoc( test3, ' ');
    printTokenV( tokenV );
    
    printf( "%s:\n", test4 );
    tokenV = mytoc( test4, ' ');
    printTokenV( tokenV );
    
    printf( "%s:\n", test5 );
    tokenV = mytoc( test5, ' ');
    printTokenV( tokenV );
    
    printf("\n----------\n");
    
    printf( "$\n" );
    scanf( "%s", &input );
    
    tokenV = mytoc( input, ' ' );
    printTokenV( tokenV );
}
