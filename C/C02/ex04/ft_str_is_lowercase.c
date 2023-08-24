/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:08:06 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:25:55 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;		

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a' && str[c] <= 'z'))
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
	char str[] = "dfgdfg";
	printf("%d", ft_str_is_lowercase(argv[1]));
}
 */