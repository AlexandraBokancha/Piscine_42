/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:47:20 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/23 21:01:47 by albokanc         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		(*range) = NULL;
		return (0);
	}
	(*range) = ft_range(min, max);
	if ((*range) == NULL)
		return (-1);
	return (max - min);
}
/* 
#include <stdio.h>
int	main(int argc, char **argv)
{
	int *ptr;
	
	if (argc != 3)
		return (1);	
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	
	printf("%d\n", ft_ultimate_range(&ptr, min, max));
	
	
	for (int i = 0; i < max - min; i++)
	{
		printf("tab[%i] = %i\n", i, ptr[i]);
	} 
}  */