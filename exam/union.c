/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:37:54 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/26 15:37:55 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_in(char *str, char c)
{    
    int i;

    i = 0;
    while(str[i])
    {
        if (c == str[i])
        return (1);
        i++;
    }
    return (0);
}


int main(int ac, char **av)
{
    int i;
    int j;
    char tab[256] = {0};

    i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if(av[1][i] == av[2][j] && tab[av[1][i] - '0'] == 0)
                {
                    tab[av[1][i] - '0'] = 1;
                    write(1, &av[1][i], 1);
                }
                j++;
            }
            i++;
        }
    }
}