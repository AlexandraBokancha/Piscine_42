/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:36:44 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/15 14:36:23 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j])
		{
			j++;
		}
		if (j == ft_strlen(to_find))
			return (&str[i]);
		i++;
	}	
	return (0);
}

/* #include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str = argv[1];
	char	*to_find = argv[2];
	int	i;
	i = 0;

	printf("la fonction de Sasha  %s\n", ft_strstr(str, to_find)); 
	printf("la fonction de la lib %s\n", strstr(str, to_find)); 
} */