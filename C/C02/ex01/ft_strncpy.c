/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:27:48 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:31:12 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <string.h>

int	main(void)
{
	unsigned int n = 5;
	char start[] = "hello";
	char finish[6] = "";
	*ft_strncpy(finish, start, n);
	printf("%s", finish);
	printf("%s", strncpy(finish, start, n));
} */