#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void     ft_putnb(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb ;
    }
    if (nb >= 10)
        ft_putnb(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int     main()
{
	ft_putnb(30);
}