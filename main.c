#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    float c;
    
    printf("Enter a, b number: \n");
    scanf("%i %i", &a, &b);
    
    c= a*b + b/a - a*a%b;
    
    printf("a*b+b/a-a*a%%b= %f", c);
  
  system("PAUSE");	
  return 0;
}
