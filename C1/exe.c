#include <stdio.h>
int	main()
{
	int	negatifs = 0;
	int	positifs = 0;
	int tableu[] = {1,-2,3,4,-5,6,-7,8,9};
	int	i = 0;
	while (i <= 8)
	{
		if( i < 0)
			negatifs = negatifs + i;
		else
			positifs += i;
		i++;	
	}
	printf("negatifs %d:",negatifs);
	printf("positifs %d:",positifs);
	return 0;
}
