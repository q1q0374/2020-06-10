#include<stdio.h>
long dec(long n)
{
	long bin,sum=0,i=1;
	
	while(n>0)
	{
		bin=n%2;
		sum=sum+bin*i;
		n=n/2;
		i=i*10;	
	}
	return sum;
}
int main()
{   int a;

    printf("�����Է�");
    scanf("%d",&a);
	printf("%d �� ������ %ld",a,dec(a)); 
	return 0;
}
