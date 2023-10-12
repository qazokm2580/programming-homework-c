#include<stdio.h>
int main()
{
	int a=13,b=11;
	a+=b++;
	printf("%d\n",a);
	a=13,b=11;
	a*=++b;
	printf("%d\n",a);
	a=13,b=11;
	a*=a+(b%=3);
	printf("%d\n",a);
	a=13,b=11;
	a=(float)b/4;
	printf("%d\n",a);
}
