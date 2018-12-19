#include<stdio.h>
#include<stdlib.h>
#if 0
void swap1(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(void)
{
	int a1=1,b1=2;
	swap1(&a1,&b1);
	printf("a1=%d,b1=%d\n",a1,b1);
	return 0;
}
#else
void  fn1()
{
	printf("calling fn1()...\n");
}	

void  fn2()
{
	printf("calling fn2()...\n");
}	

int main()
{
	atexit(fn1);
	atexit(fn2);
	printf("calling main...\n");
	return 0;
}
#endif	