//to write a program to if the marks more than 35 then pass,otherwise fail.

#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    
    printf("Please Enter your marks:");
    scanf("%d",&marks);
    
    if(marks>=35){
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
    getch();
}
