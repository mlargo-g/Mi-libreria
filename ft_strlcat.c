/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:13:01 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/10/24 18:42:15 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  n;

    dst_len = 0;
    while (dst[i] && i < size)
        i++;
    j = ft_strlen(src);
    if (size <= i)
        return (size + j);
    i = 0;
    while (src[n] && (i + n < size - 1))
    {
        dst[i + n] = src[n];
        n++;
    }
    dst[i + n] = '\0';
    return (i + j);
}