/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:21:42 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:24:30 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a' && str[c] <= 'z')
			|| (str[c] >= 'A' && str[c] <= 'Z'))
			c++;
		else
			return (0);
	}
	return (1);
}
/* #include <stdio.h>
int main(int argc, char **argv)
{	
	char c;
	char str[] = "Sfjfj";
	printf("%d", ft_str_is_alpha(argv[1]));
}
 */