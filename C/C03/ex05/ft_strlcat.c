/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:57:19 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/14 18:41:47 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (src_size + size);
	while (src[i] && i < (size - dest_size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("ft_strlcat returned : %d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
		printf("strlcat returned    : %zu\n", strlcat(av[1], av[2], atoi(av[3])));
	}
}  */