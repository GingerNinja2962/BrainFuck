#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void 

int ft_execute(int *array, char c, int j)
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
    if (c == '[')
        
    if (c == ']')
        
    return (j);
}

int main(int argc, char *argv[])
{
    int i;
    int c;
    int *array;

    array = malloc(size of(int) * 2048);

    if (argc == 2)
    {
        while (argv[1][i])
        {
            ft_execute(array, argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}
