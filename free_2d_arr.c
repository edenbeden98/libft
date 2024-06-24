#include "libft.h"

void	free_2d_arr(void **arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(arr[i++]);
	free(arr);
}