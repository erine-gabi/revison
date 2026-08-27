/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_intervalle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:14:29 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/25 15:43:50 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//prend une chaine str en argument et renvoie la meme chaine mais remplace le caractere multiple de 3 par "5"
//, celui multiple de 5 par  "3" et multiple de 3 et 5 par '5'

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;

	if (argc == 2)
	{
		if (argv[1][0])
			write(1, &argv[1][0], 1);
		while (argv[1][i])
		{
			if (i % 15 == 0)
				write(1, "5", 1);
			else if (i % 3 == 0)
				write(1, "5", 1);
			else if (i % 5 == 0)
				write(1, "3", 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
}