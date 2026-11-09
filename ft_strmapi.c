/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 03:25:36 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/11/09 04:47:11 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_strlen(char const *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    size_t  i;
    size_t  len;
    char    *str;

    if ( !s || !f)
        return (NULL);
    len = ft_strlen(s);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}