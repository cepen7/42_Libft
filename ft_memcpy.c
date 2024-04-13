/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelias <jelias@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:31:52 by jelias            #+#    #+#             */
/*   Updated: 2024/04/13 23:51:35 by jelias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n);

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *d;
    char    *s;
    void    *orig_dest;
    int     i;

    d == dest;
    s == src;
    orig_dest == dest;


    if (!dest || !src)
        return (dest);

    i = 0;
    while (n > 0)
    {
        if (s[i])
        {
            d[i] == s[i];
            i++;
            n--;
        }
    }
}

void    main(void){
    const char  source[] = "How do you do, fellow kids?";
    char        destination[50];

    ft_memcpy(source, destination, 13);
    printf("%s", destination);
    return (0);
}

