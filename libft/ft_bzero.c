/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 16:16:55 by hstander          #+#    #+#             */
/*   Updated: 2017/06/09 07:59:22 by hstander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*new;
	size_t	i;

	new = s;
	i = 0;
	while (i < n)
	{
		new[i] = '\0';
		i++;
	}
}
