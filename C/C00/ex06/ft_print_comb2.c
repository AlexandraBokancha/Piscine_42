/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:28:40 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/24 12:10:37 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_espcom(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (a != 98)
				print_espcom();
			b = b + 1;
		}
		a = a + 1;
	}
}		

/* int main(void)
{
	ft_print_comb2();
	return (0);
} */