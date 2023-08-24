/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:54:19 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:27:14 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 32 && str[c] <= 127))
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
	printf("%d", ft_str_is_printable(str));
}*/