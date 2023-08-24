/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:45:32 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:25:13 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= '0' && str[c] <= '9'))
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
	char str[] = "4004370957#";
	printf("%d", ft_str_is_numeric(argv[1]));
} */