//to write a program to chek the number is odd or even

#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("Please Enter your number:");
    scanf("%d",&no);
    
    if(no%2){
        printf("odd number");
    }
    else
    {
        printf("Even number");
    }
    
    getch();
}
