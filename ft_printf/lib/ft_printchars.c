/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:55:16 by thchau            #+#    #+#             */
/*   Updated: 2024/10/31 13:14:56 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_printchars(const char *str)
{
	if (!str)
		return (write (1, "(null)", 6));
	return (write (1, str, ft_strlen(str)));
}