#include<stdio.h>

int main()
{
    char Arr[40];
    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr); //Regular Expression Syntax

    printf("Your name is : %s\n",Arr);


    return 0;
}