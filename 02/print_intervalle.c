/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_intervalle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:19:36 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/26 18:20:12 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//prend une chaine str en argument et renvoie la meme chaine mais remplace le caractere multiple de 3 par "5"
//, celui multiple de 5 par  "3" et multiple de 3 et 5 par '5'
#include <unistd.h>

int     main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		if (av[1][0])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		while(av[1][i])
		{
			if (i % 15 == 0)
				write(1, "5", 1);
			else if (i % 3 == 0)
				write(1, "5", 1);
			else if (i % 5 == 0)
				write(1, "3", 1); 
			else 
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}