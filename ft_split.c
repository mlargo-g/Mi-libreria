/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 00:22:25 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/11/09 04:45:39 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(const char *s, char c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static int  ft_strlen(char const *s, char c)
{
    int len;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    return (len);
}

static void free_all(char **tab, int words_saved)
{
    int i;

    i = 0;
    while (i < words_saved)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (NULL);
}

static char *copy_word(char const *s, char c)
{
    int len;
    int i;
    char    *word;

    len = ft_strlen(s, c);
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int words;
    int i;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    tab = (char **)malloc(sizeof(char *) * (words + 1));
    if (!tab)
        return (NULL);
    i = 0;
    while (i < words)
    {
        while (*s && *s == c)
            s++;
        tab[i] = copy_word(s, c);
        if (!tab[i])
            return (free_all(tab, i));
        s += ft_strlen(s, c);
        i++;
    }
    tab[i] = NULL;
    return (tab);
}