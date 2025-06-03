//to write a program to age is grater than 18 to eligible to vote

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    
    printf("Please Enter your age:");
    scanf("%d",&age);
    
    if(age>18){
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
    
    getch();
}
