#include<stdio.h>
#include<conio.h>

void main(){
  int r;
  float pi = 3.14, area, ci;
  clrscr();
  printf("Enter radius of circle: ");
  scanf("%d", &r);
  area=pi*r*r;
  printf("area of circle=%f", area);
  ci=2*pi*r;
  printf("circumference=%f", ci);
  getch();
}
