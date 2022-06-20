/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbingol <fbingol@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:40:04 by fbingol           #+#    #+#             */
/*   Updated: 2022/02/22 14:06:26 by fbingol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	i;

	ld = 0;
	ls = 0;
	i = 0;
	while (src[ls] != '\0')
		ls++;
	while (dest[ld] != '\0')
		ld++;
	if (size == 0)
		return (ls);
	if (size <= ld)
		return (ls + size);
	while (src[i] && ld < size - 1 && i < size - 1)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}
