/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_exam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:05:55 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/21 11:58:04 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int	i;
    int	sign;
    int	atoi;

    i = 0;
    sign = 1;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if ( str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
	   {
		sign = -sign;
	   }
	   i++;
    }
    atoi = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        atoi = atoi * 10 + (str[i] - '0');
        i++;
    }
    return (atoi * sign);
}

#include <stdio.h>
int main()
{
	int result = ft_atoi("--125544488");
	printf("%d", result);
}