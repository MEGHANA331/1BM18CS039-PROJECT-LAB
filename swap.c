#include<stdio.h>
#include<conio.h>
void swap(int a, int b);
main()
{
int no1,no2;
clrscr();
printf("Please enter the first number: ");
scanf("%d",&no1);
printf("Please enter the second number: ");
scanf("%d",&no2);
printf("Before swapping : no1 = %d , no2 = %d",no1,no2);
swap(no1,no2);
}
void swap(int x, int y){
int temp;
temp = x;
x = y;
y = temp;

printf("\nAfter swapping no1 = %d, no2 = %d",x,y);
getch();
}