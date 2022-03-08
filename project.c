//My project
#include "formuls.h"
#include "again.h"

int main(void)
{
    char choice;
    _Bool status;
    int num;
    int first;
    int second;

    printf("Hello. I'm your pocket calculator. Please enter operation : \n");
    printf("a.Summarise first n numbers;\n");
    printf("b.Factorial of number;\n");
    printf("c.Fibbonachi numbers;\n");
    printf("d.Minus;\n");
<<<<<<< HEAD
    printf("e.Simple value;\n");
=======
>>>>>>> 490f3a793824d31ec5b9131d4f3f503c03fa944f
    printf("$.Exit.\n");

    do {
        
        status = scanf("%c", &choice);

        switch(choice){
            case 'a':
                printf("Enter last number of sum : ");
                scanf("%d", &num);
                summa(num);
                break;
            case 'b':
                printf("Enter last number of factorial : ");
                scanf("%d", &num);
                factor(num);
                break;
            case 'c':
                printf("Enter quantity of numbers fibbonachi : ");
                scanf("%d", &num);
                fibbonachi(num);
                break;
            case 'd':
                printf("Enter 2 numbers : \n"
                "first number is divisible second is devider : ");
                scanf("%d%*c%d", &first, &second);
                minus(first, second);
                break;
<<<<<<< HEAD
            case 'e':
                printf("Enter number that you want to know \"Simple it or no\" : \n");
                scanf("%d", &num);
                simple(num);
                break;
=======
>>>>>>> 490f3a793824d31ec5b9131d4f3f503c03fa944f
            case '$':
                printf("Okay. See you later...\n");
                return 0;
            default : 
                again();
                break;
            while(getchar() != '\n') continue;
        }
    }while (status == 1);

    return 0;
    
}