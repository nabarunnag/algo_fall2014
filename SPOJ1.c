#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int input = 0;
	for(;;)
	{
		scanf("%d",&input);
		if(input == 42)
		{
			break;
		}
		printf("%d\n",input);
	
	}
	return 0;
}
	
