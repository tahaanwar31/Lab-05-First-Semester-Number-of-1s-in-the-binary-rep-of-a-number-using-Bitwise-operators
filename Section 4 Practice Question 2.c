#include <stdio.h>
#include <limits.h>
#include <conio.h>
int main()
{
	int number,count,result;
	printf("Enter a number: \n");
	scanf("%d",&number);
	while (number!=0)
	{
		count=count + (number & 1);
		number=number>>1;
	}
	printf("The number of 1s in the number you entered are %d\n",count);
	return 0;
}