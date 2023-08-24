/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:43:11 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/10 22:30:32 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumeric(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}

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

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	ft_strlowcase(str);
	while (str[c])
	{	
		if (ft_str_is_alphanumeric(str[c]) == 1)
		{
			if ((ft_str_is_alphanumeric(str[c - 1]) == 0)
				&& (!(str[c -1] >= '0' && str[c - 1] <= '9')))
				str[c] -= 32;
		}
		c++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char c[] = "salut, 43comment !@&tu vas ? 42mots quaraNte-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(c));
} */