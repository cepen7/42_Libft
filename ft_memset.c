/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:41:23 by jelias            #+#    #+#             */
/*   Updated: 2024/03/19 12:03:25 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char test_text[20] = "I love my doggo";

	ft_memset(test_text, '.', 6);
	printf("%s \n", test_text);
	return (0);
}
*/
