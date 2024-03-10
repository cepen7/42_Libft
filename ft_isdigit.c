/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:19:33 by jelias            #+#    #+#             */
/*   Updated: 2024/03/10 13:35:13 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'a';
	if (ft_isdigit(c))
		printf("it's quite a number!");
	else
		printf("not a number :(");
	return (0);
}
