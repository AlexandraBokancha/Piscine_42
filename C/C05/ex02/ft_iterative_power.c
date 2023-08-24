/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:36:24 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/18 22:56:23 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rez;

	rez = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		rez = rez * nb;
		--power;
	}
	return (rez);
}
/* #include <stdio.h>
#include <stdlib.h> 
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}  */