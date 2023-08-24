/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:02:08 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/15 14:31:46 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "A";
	s2 = "Bss";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
} */