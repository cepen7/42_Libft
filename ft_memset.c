/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:41:23 by jelias            #+#    #+#             */
/*   Updated: 2024/03/12 23:50:44 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
// first try, my dude
{
	int	i;

	i = 0;
	while (n >i)
	{
		*s = c;
		s++;
	}
	return (0);
}
