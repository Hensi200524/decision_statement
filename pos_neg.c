#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("Please Enter your number:");
    scanf("%d",&no);
    
    if(no>0){
        printf("positive number");
    }
    else
    {
        printf("Negative number");
    }
    
    getch();
}