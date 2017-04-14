#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	for(i=5;i<=1000000;i+=2)/*从5开始依次加2遍历1000000内的数*/	
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				printf("%d不是质数"，i);
		}
		
	}
	return 0;

}
