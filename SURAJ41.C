//write a program to swap two variables using the third variable

#include<stdio.h>
#include<conio.h>

void main(){
int a = 5;
int b = 10;
clrscr();
 a = b;
 b = a;
 printf("value of a is %d\n",a);
 printf("value of b is %d",b);
getch();
}