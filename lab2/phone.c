#include <stdio.h>
#include <stdlib.h>

int phone(char phone[11], int argument){
    if(argument == -1){
        printf( "%s\n", phone);
        return 0;
    } 
    else if(argument >=0 && argument <= 9){
        printf("%c\n", phone[argument]);
        return 0;
    }
    
    fprintf(stdout, "ERROR\n");
    return 1;  
}

int main(){
    char s[11];
    int arg;
    int x = scanf("%s %i", s, &arg);
    int ret_val = phone(s, arg);
    x = x + ret_val;
    x = x - ret_val;
}