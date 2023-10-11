/***********************/
/*   班级：电气一班    */
/*                     */
/*   姓名：蓝语霖      */
/*   学号：3123001111  */
/***********************/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc,x1,x2,p,q;
	printf("请输入abc每个数以半角逗号结束");
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/(2*a);
	x1=p+q;
	x2=p-q;;
	printf("\n\nx1=%5.2f\nx2=%5.2f\n",x1,x2);
	return 114514;
}