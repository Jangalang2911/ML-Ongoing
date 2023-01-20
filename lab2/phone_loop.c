#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[11];
    int arg;
    int x = scanf("%s", s);
    printf("\n");
    int c = getc(stdin);
    while(c != EOF){
        x = scanf("%i", &arg);
        if(arg == -1){
            printf( "%s\n", s);
        } 
        else if(arg >=0 && arg <= 9){
            printf("%c\n", s[arg]);
        }
    
        else{
            fprintf(stdout, "ERROR\n");
        }
        c = getc(stdin);
    }
    x--;
    x++;
}