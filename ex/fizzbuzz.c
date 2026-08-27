/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:44:47 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/27 15:57:17 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnb(int nbr)
{
    if (nbr >= 10)
        ft_putnb(nbr / 10);
    write(1, &"0123456789"[nbr % 10], 1);
}

void    ft_buzzfizz(int nbr)
{
    nbr = 1;
    
    while (nbr <= 100)
    {
        if (nbr % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (nbr % 3 == 0)
            write(1, "fizz", 4);
        else if (nbr % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnb(nbr);
		write(1, "\n", 1);
        nbr++;  
    }
}

int     main(int nbr)
{
	ft_buzzfizz(nbr);
}