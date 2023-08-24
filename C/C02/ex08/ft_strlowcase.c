/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:39:44 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:29:46 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		c++;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "aoihfhaGAIUFhAIFj132131231@!#^#&*";
	printf("%s", ft_strlowcase(str));
} */