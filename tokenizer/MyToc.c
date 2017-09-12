#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* outside a 'd */

char ** mytoc( char *paragraph, char delim ){
    
    int n, i, currChar, numWords, state, pIndex; 
    // number, index, current character, number of words, and state (in or out), pointer index
    
    state = OUT; // By default, we are not inside a word until the loop starts
    numWords = 0;
    
    for( n = 0; paragraph[n]; n++ ) {
        currChar = paragraph[n];
        if( currChar == ' ' || currChar == '\n' || currChar == '\t' )
            state = OUT;
        else if( state == OUT ) {
            state = IN;
            ++numWords;
        }
    }
    
    char **tokens = calloc( numWords+2, sizeof(char*));
    char temp = ' ';
    pIndex = 0;
    for( i = 0; paragraph[i]; i++ ) {
        if( paragraph[i] == delim ) {
            temp = paragraph[i];
            paragraph[i] = '\0';
        }
        else if( paragraph[i] != '\0' && temp == ' ' ) {
            tokens[ pIndex++ ] = &paragraph[i];
            temp = paragraph[i];
        }
    }
    return tokens;
}
