/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:36:08 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/20 22:46:47 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof (int));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/* #include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);

	int *tab = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("tab[%i] = %i\n", i, tab[i]);
	}
} */