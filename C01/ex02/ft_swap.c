//dont forget to add header

#include <unistd.h>

void	ft_swap(int *a, int *b);

{
	int	samrorng;
	samrorng = *a;
	*a = *b;
	*b = samrorng;
}
