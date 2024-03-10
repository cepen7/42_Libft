/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:06:43 by jelias            #+#    #+#             */
/*   Updated: 2024/03/10 14:20:16 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if (((c > 64 && c < 91) || (c > 96 && c < 123)) || ((c > 47) && (c < 58)))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '*';
	if (ft_isalnum(c))
		printf("it's alnum :)!");
	else
		printf("not an alnum character :(");
}
*/
