#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_brackets(char *argv, int j, char c)
{
    int i;

    i = 1;
    if (c == '[')
    {
        while (i > 0)
        {
            if (
        }
    }
    if (c ==']')
    {
        while (i > 0)
        {
            
        }
    }
}

int ft_execute(int *array, char c, int j, char *argv)
{
    if (c == '+')
        array[j] = (array[j] + 1);
    if (c == '-')
        array[j] = (array[j] + 1);
    if (c == '>')
        j++;
    if (c == '<')
        j--;
    if (c == '.')
        ft_putchar(array[j]);
    if (c == '[' && array[j] == 0)
        j = brackets(argv, c);
    if (c == ']' && array[j] != 0)
        j = brackets(argv, c);
    return (j);
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    int *array;

    i = 0;
    j = 0;
    array = malloc(size of(*array) * 2048);

    if (argc == 2)
    {
        while (argv[1][i])
            j = ft_execute(array, argv[1], j, i);
    }
    ft_putchar('\n');
    return (0);
}
