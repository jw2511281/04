#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    
    printf("Input the second: ");
    scanf("%i", &a);
    
    b= a/60;
    c= a%60;
    
    printf("The time is %i : %i \n", b, c);
  
  system("PAUSE");	
  return 0;
}
