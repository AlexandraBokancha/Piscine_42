/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:59:09 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/15 16:59:12 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return	(0);
	}
	
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}


/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "5Alo";
	s2 = "5Allo";
 	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d", strncmp(s1, s2, 0));
}
 */