#include<stdio.h>
#include<conio.h>

void main(){
  float c, f;
  clrscr();
  printf("Enter temp to centigrade: ");
  scanf("%f", &c);
  f=(1.8*c)+32;
  printf("temp in Fahrenheit=%f", f);
  getch();
}
