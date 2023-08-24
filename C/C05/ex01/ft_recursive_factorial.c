/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:06:38 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/18 22:59:01 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}
/* 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
}  */