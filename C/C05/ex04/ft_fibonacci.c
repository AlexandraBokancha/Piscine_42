/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:35:21 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/18 22:56:01 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nbr;

	nbr = 2;
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* #include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{	
	(void)argc;
	printf("%d", ft_fibonacci(atoi(argv[1])));
	return (0);
} */