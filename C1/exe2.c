#include <stdio.h>
int	main()
{
	int	table[] = {1,2,3,4};
	int	i = 0;
	while (i <= 3)
	{
		i++;
	}
	int number = 0;
	number = table[i];
	table[i] = table[0];
	table[0] = number;
	for(i = 0;i<= 3;i++)
	{
		printf("%d",table[i]);
	}

}
