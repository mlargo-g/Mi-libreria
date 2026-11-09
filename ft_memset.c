/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 21:59:47 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/10/24 22:03:00 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;
    size_t  i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}