/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:30:17 by messkely          #+#    #+#             */
/*   Updated: 2023/12/20 17:55:17 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
