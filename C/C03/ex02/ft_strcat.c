/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:28:12 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/14 18:39:31 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[50] = "hello";
	char	dest2[50] = "hello";
	char	src[50] = "world";
	
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src));
} */
