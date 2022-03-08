//this file for testing new functions
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int num, value;

   printf("Enter value : ");
   scanf("%d", &value);

   for(num = 2; num < value; num++){
       if(value % num == 0){
           printf("%d is not simple\n");
           return 1;
       }
   }
   printf("%d is simple\n", value);

    return 0;
}