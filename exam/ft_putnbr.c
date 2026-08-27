/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 09:19:41 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/21 09:29:30 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        write(1, -2147483648, 11)
        return;
    }
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }

    if (nbr > 9)
        ft_putnbr( nbr / 10);
    ft_putchar(nbr % 10 + '0')    
}