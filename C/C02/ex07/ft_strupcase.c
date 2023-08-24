/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:54:29 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:28:59 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a' && str[c] <= 'z'))
			str[c] -= 32;
		c++;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "hell123!@*  o";
	printf("%s", ft_strupcase(str));
} */