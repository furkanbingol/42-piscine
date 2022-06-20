/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbingol <fbingol@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:21:16 by fbingol           #+#    #+#             */
/*   Updated: 2022/02/26 12:27:31 by fbingol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		ac--;
		while (ac > 0)
		{
			i = 0;
			while (av[ac][i])
			{
				write(1, &av[ac][i], 1);
				i++;
			}
			write(1, "\n", 1);
			ac--;
		}
	}
	return (0);
}
