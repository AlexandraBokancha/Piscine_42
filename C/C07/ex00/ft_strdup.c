/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:49:16 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/23 21:04:55 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = malloc((ft_strlen(src) + 1) * sizeof (char));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
/* #include <string.h>
#include <stdio.h>
int	main()
{
	char *str1;
	
	str1 = ft_strdup("stupid shit");
	printf("%s\n", str1);
	free(str1);
}  */