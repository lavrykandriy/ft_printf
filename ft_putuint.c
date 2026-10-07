/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 07:22:16 by alavryk           #+#    #+#             */
/*   Updated: 2026/10/07 07:28:08 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{	
	int	len;

	len = 0;
	while (n >= 10)
		len += ft_putuint(n / 10);
	len += ft_putchar_len(n % 10 + '0');
	return (len);
}	
