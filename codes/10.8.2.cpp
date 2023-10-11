#include<stdio.h>
#define PRICE 12.5
int main()
{
	int num=3;
	char ch1,ch2='D';
	float total;
	total=num*PRICE;
	ch1=ch2-'A'+'a';
	printf("total=%f,ch1%c\n=",total,ch1);
	printf("num的十进制%d,十六进制%x\n",num,num);
	printf("num,total,ch1占的字节数分别为%d,%d,%d",sizeof(num),sizeof(total),sizeof(ch1));
}