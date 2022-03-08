#include <stdio.h>
#include <string.h>

int ask(char pass[], char name[]);

int main()
{
    char password[] = {"Qwerty123"};
    char name[80];
    char answer;

    printf("Hello. What's your name?\n");
    scanf("%s%*c", &name);
    printf("%s are you owner of this PC? y/n : ", name);
    answer = getchar();

    switch(answer){
        case 'y':
            printf("You're welcome, %s...", name);
            return 0;
        case 'n':
            ask(password, name);
            break;
    }

    return 0;
}

int ask(char pass[], char name[])
{
    int count;
    char answer[13];

    printf("Please enter password (you have 3 attempts) : ");
    for(count = 3, scanf("%s", &answer); count > -1; --count){
        if(count == 0){
            printf("Sorry, but I can't let you come in ...\n");
            return 1;
        }

        if(strcmp(answer, pass) == 0){
            printf("Okay, you may come in, %s!\n", name);
            return 0;
        }
        else{
            printf("%s, please try again. You have %d attempts : ", name, count);
            scanf("%s", &answer);
        }
    }
}