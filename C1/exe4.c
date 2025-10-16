#include <stdio.h>
int	main()
{
	int	table[] = {1,2,3,4,5};
	int i =1;
	int	temp;
	while (i <4)
	{
		if(table[i] < table[i + 1])
		{
			temp = table[i];
			table[i] = table[i+1];
			table[i + 1] = temp;
		}
		i++;
	}
	for(int j = 0 ;i <=4; j++)
	{
		printf("%d",table[i]);
	}
}
