#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mystrcat(char *destination, const char *source);

int main(){

    char str1[50] = "this is a";
    char str2[50] = " concatenated text"; 
    char str3[50] = ", WOW!";

    mystrcat(str1, str2);  
    mystrcat(str1, str3);  

    printf("%s",str1);

    return 0;
}
 
char *mystrcat(char *destination, const char *source){

    // set counters
    int i = 0;
    int j = 0;
    
    while (destination[i]){ 
        i++;
    }
    while (source[j]){         '
        destination[i+j] = source[j]; 
        j++;
    }
    destination[i+j] = '\0'; 

   return destination;      

}

