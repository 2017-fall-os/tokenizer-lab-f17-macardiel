#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "MyToc.h"

void printTokens( char **tVector ) {
    char **tvTemp;
    int n;
    
    tvTemp = tVector;
    
    for( n = 0; *tvTemp != '\0'; n++ ) {
        printf( "%d: \"%s\"\n", n, *tvTemp );
        tvTemp++;
    }
    printf( "\n" );
}

int main() {
    char **tokenV;
    char test1[] = "Hello my dog's name is Darwin";
    char test2[] = "     Hello   World!    ";
    char test3[] = "";
    char test4[] = "          ";
    char test5[] = " HelloWorld";
    char input[100];
        
    printf( "Test1: \"%s\"\n", test1 );
    tokenV = mytoc( test1, ' ');
    printTokens( tokenV );
    
    printf( "Test2: \"%s\"\n", test2 );
    tokenV = mytoc( test2, ' ');
    printTokens( tokenV );
    
    printf( "Test3: \"%s\"\n", test3 );
    tokenV = mytoc( test3, ' ');
    printTokens( tokenV );
    
    printf( "Test4: \"%s\"\n", test4 );
    tokenV = mytoc( test4, ' ');
    printTokens( tokenV );
    
    printf( "Test5: \"%s\"\n", test5 );
    tokenV = mytoc( test5, ' ');
    printTokens( tokenV );
    
    printf("\n----------\n");
    
    printf( "$\n" );
    scanf( "%s", &input );
    
    tokenV = mytoc( input, ' ' );
    printTokens( tokenV );
}
