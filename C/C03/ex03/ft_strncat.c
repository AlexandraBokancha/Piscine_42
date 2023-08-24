/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:23:02 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/14 18:40:05 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "hello";
	char	dest2[] = "hello";
	char	src[] = "world";
	unsigned int 	n;

	n = 10;
	
	printf("%s\n", ft_strncat(dest, src, n));
	printf("%s\n", strncat(dest2, src, n));
}
 */