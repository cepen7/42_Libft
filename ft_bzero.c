/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:41:23 by jelias            #+#    #+#             */
/*   Updated: 2024/03/19 12:00:06 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
// sets n number of bytes to zero ('\0')
{
	size_t	i;
	char	*to_be_zeroed;

	to_be_zeroed = s;
	i = 0;
	while (n > i)
	{
		to_be_zeroed[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	test_string[] = "1234567890";

	ft_bzero(test_string, 5);
	printf("%s\n", test_string);
	return (0);
}
*/
