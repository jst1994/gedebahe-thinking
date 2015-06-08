#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
for(i=4;i<=100;i+=2)
{
	for(j=2;j<=i/2;j++)
	{
		if(isPrime(j)&&isPrime(i-j))
		{
			printf("%d=%d+%d\n",i,j,i-j);
		}
	}
}


}
