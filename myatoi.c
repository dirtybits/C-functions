/* atoi example */
#include <stdio.h>      /* printf, fgets */
// #include <stdlib.h>     /* atoi */
#include <string.h>

int myatoi(const char * str);

int main ()
{
  int i;
  char buffer[256];
  printf ("Enter a number: ");
  fgets (buffer, 256, stdin);
  i = myatoi (buffer);
  printf ("The value entered is %d. Its double is %d.\n",i,i*2);
//  i = atoi (buffer);
//  printf ("The value entered is %d. Its double is %d.\n",i,i*2);
  return 0;

}

int myatoi(const char* str){

    int i = 0;       
    int num = 0;     
    int sign = 1;     

    if (str == NULL)          
        return 0;
    if (str[0] == '-'){         
        sign = -1;            
        i++;                    
    }
    else if (str[0] == '+'){    
        i++;                    
    }
    while(isdigit(str[i])){      
        num = (num*10) + (str[i] - '0');
        i++;
    }
    return sign*num;
}


