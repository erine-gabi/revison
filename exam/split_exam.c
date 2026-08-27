/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_exam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:03:34 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/21 10:21:32 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str) 
{
    char **tab = malloc(10000000);
    int i = 0;
    int x = -1;

    while (str[i]) 
    {
        while (str[i] == ' ')
            i++;
        if (!str[i])
            break;
        tab[++x] = malloc(10000000);
        int y = 0;
        while (str[i] != ' ')
            tab[x][y++] = str[i++];
    }
    tab[++x] = NULL;
    return tab;
}

int main () 
{
    char **test = ft_split("test 2 test");
    for (int i = 0; test[i]; i++) 
    {
        printf("%s\n", test[i]);
    }
}