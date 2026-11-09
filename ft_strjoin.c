/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 02:18:57 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/11/09 04:46:00 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_strlenth(char const *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *joined;
    size_t  i;
    size_t  j;

    if (!s1 || !s2)
        return (NULL);
    joined = (char *)malloc(sizeof(char) * (ft_strlenth(s1) + ft_strlen(s2) + 1));
    if (!joined)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        joined[i + j] = s2[j];
        j++;
    }
    joined[i + j] = '\0';
    return (joined);
}