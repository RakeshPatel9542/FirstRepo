#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)
		{
		printf("FizzBuzz");
	    printf("\n");
		}
		else if(i%3==0)
		printf("Fizz\n");
		else if(i%5==0)
		printf("Buzz\n");
		else
		printf("%d\n",i);
	}
	return 0;
}
