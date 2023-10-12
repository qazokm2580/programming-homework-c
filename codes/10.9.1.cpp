#include<stdio.h>
int main()
{
	float x,y;
	int a;
	a=7;
	x=3.2;
	y=4.5;
	x+=a%2*(int)(x+y)%3/2;
	printf("X=%f",x);
}
