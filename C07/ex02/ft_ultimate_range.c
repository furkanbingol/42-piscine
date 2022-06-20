/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbingol <fbingol@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:49:46 by fbingol           #+#    #+#             */
/*   Updated: 2022/02/28 10:05:58 by fbingol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!(*range))
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	bound;
	int	*range;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min : %d , max : %d , bound : %d",min, max, bound);
	return (0);
}
*/
