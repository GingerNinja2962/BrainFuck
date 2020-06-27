#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	f_brackets(char *argv, int *i)
{
	int c;

	c = 1;
	while (c > 0)
	{
		*i = (*i + 1);
		if (argv[*i] == '[')
			c++;
		if (argv[*i] == ']')
			c--;
	}
}

void	b_brackets(char *argv, int *i)
{
	int c;

	c = 1;
	while (c > 0)
	{
		*i = (*i - 1);
		if (argv[*i] == ']')
			c++;
		if (argv[*i] == '[')
			c--;
	}
}

void	ft_execute(int *array, int *j, char *argv, int *i)
{
	if (argv[*i] == '+')
		array[*j] = (array[*j] + 1);
	if (argv[*i] == '-')
		array[*j] = (array[*j] - 1);
	if (argv[*i] == '>')
		*j = (*j + 1);
	if (argv[*i] == '<')
		*j = (*j - 1);
	if (argv[*i] == '.')
		ft_putchar(array[*j]);
	if (argv[*i] == '[' && array[*j] == 0)
		f_brackets(argv, i);
	if (argv[*i] == ']' && array[*j] != 0)
		b_brackets(argv, i);
}

int	main(int argc, char *argv[])
{
	int i;
	int *pi;
	int j;
	int *pj;
	int *array;

	i = 0;
	pi = &i;
	j = 0;
	pj = &j;
	array = malloc(sizeof(*array) * 2048);

	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_execute(array, pj, argv[1], pi);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
