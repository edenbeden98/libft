#include "libft.h"

int	ft_2d_arrlen(void **arr)
{
	int size;

	size = 0;
	while (arr[size])
		size++;
	return (size);
}