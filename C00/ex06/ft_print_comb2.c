// dont forget to add header 

#include <unistd.h>

void	ptwrite(char c)
{
	write (1, &c, 1);
}

void	ft_write(int a, int b)
{
	ptwrite(48 + a / 10);
	ptwrite(48 + a % 10);
	ptwrite(' ');
	ptwrite(48 + b / 10);
	ptwrite(48 + b % 10);
	if (!(a == 98 && b == 99))
	{
		ptwrite(',');
		ptwrite(',');
	}

}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}









}

