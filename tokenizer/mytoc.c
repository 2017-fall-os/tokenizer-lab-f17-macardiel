#include <stdio.h>
#include <stdlib.h>
#include "mytoc.h"

int countWords( char *paragraph ) {
    int n, c, nw, state;
    state = OUT;
    nw = 0;
    for( n = 0; paragraph[n]; n++ ) {
        c = paragraph[n];
        if( c == ' ' || c == '\n' || c == '\t' )
            state = OUT;
        else if( state == OUT ) {
            state = IN;
            ++nw;
        }
    }
    return nw;
}

char **mytoc( char *strSep, char delim ){
    int numWords = countWords( strSep );
    int Index = 0;
    char **tokens = calloc( numWords+2, sizeof(char*));
    
    char temp = ' ';
    
    int i;
    for( i = 0; strSep[i]; i++ ) {
        if( strSep[i] == delim ) {
            temp = strSep[i];
            strSep[i] = '\0';
        }
        else if( temp == ' ') {
            tokens[ Index++ ] = &strSep[i];
            temp = strSep[i];
        }
    }
    return tokens;
}
