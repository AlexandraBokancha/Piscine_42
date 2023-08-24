/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:08:06 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:26:37 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'A' && str[c] <= 'Z'))
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
	char str[] = "FDFD";
	printf("%d", ft_str_is_uppercase(argv[1]));
}
 */