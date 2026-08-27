/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 09:36:21 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/21 09:48:32 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1)
}

void    ft_buzzfizz(int nb)
{
    nb = 1;
    
    while (nb < 100)
    {
        if (nb % 15 == 0)
            write(1, "buzzfizz", 8);
        else if (nb % 3 == 0)
            write(1, "buzz", 4);
        else if
            write(1, "fizz", 4);
        else
            ft_putnbr(nbr)
        write(1, "\n", 1);
        nb++;
   }
}