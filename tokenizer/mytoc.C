#include <stdio.h>
#include <stdlib.h>

int countWords( char[] str ) {
    int n, c, nw, state;
    state = OUT;
    nw = 0;
    for( n = 0; str[n]; n++ ) {
        c = str[n];
        if( c == ' ' || c == '\n' || c = '\t' )
            state = OUT;
        else if( state == OUT ) {
            state = IN;
            ++nw;
        }
    }
    return nw;
}
char ** mytoc( char *str, char delim ) {
    int numWords = countWords( str );
    int Index = 0;
    char **tokens = calloc(tCount+2, sizeof(char*));
    
    char temp = ' ';
    
    int i;
    for( i = 0; str[i]; i++ ) {
        if( str[i] == delim ) {
            temp = str[i];
            //str[i] = '\0';
        }
        else if( temp == ' ') {
            tokens[ Index++ ] = &str[i];
            temp = str[i];
        }
    }
    
    return tokens;
}
