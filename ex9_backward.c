#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 25;
	while (i <= 25)
	{		
		printf("%d", i);
		i--;
		if (i <= 0)
		{
			break;
		}		
	}

	return 0;
}
