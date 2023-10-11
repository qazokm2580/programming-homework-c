#include<iostream>
using namespace std;
int ASDF(int x,int y)
{
	int z;
	if(x <= y) z = y;
	else z = x;
	return(z);
}
int main()
{
	int a,b;
	a = 13;
	b = 14;
	cout<<ASDF(a,b)<<endl;
	return 114514;
}