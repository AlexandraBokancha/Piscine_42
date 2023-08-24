/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:10:07 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/23 22:18:29 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strstrlen(char **strs, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i++ < size)
	{
		j += ft_strlen(strs[i]);
	}
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	i = 0;
	if (size == 0)
		str = malloc(sizeof (char));
	else
		str = malloc(ft_strstrlen(strs, size) + 1
				+ (ft_strlen(sep) * (size - 1)) * sizeof (char));
	if (!str)
		return (NULL);
	*str = 0;
	while (i++ < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}	
/* #include <stdio.h>

 int	main(int argc, char **argv)
{	
	(void)argc;
	char *str = ft_strjoin(argc - 1, argv + 1, "?");
	printf("%s\n", str);
	free(str);
} */
