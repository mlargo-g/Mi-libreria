/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:46:23 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/10/30 02:09:56 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *a;
    size_t  total;

    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    total = nmemb * size;
    a = malloc(total);
    if (!a)
        return (NULL);
    ft_bzero(a, total);
    return (a);
}