/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:40:37 by jelias            #+#    #+#             */
/*   Updated: 2024/03/10 16:47:25 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if ((c > 31 && c < 127))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = ' ';
	if (ft_isprint(c))
		printf("it's printable, all right");
	else
		printf("unpritable");
}
*/
