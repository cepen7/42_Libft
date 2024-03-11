/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:12:33 by jelias            #+#    #+#             */
/*   Updated: 2024/03/11 11:31:43 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	strlen(const char *s);

size_t	strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s++)
		length++;
	return (length);
}
/*
int	main(void)
{
	printf("The word given is %lu characters long \n", strlen("Bamboozle"));
	return (0);
}
*/
