/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlargo-g <mlargo-g@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:12:37 by mlargo-g          #+#    #+#             */
/*   Updated: 2026/11/09 04:45:22 by mlargo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd);

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 10)
    {
        nb = nb / 10;
        ft_putnbr_fd(nb, fd);
    }
    nb = (nb % 10) + '0';
    ft_putchar_fd(nb, fd);
}