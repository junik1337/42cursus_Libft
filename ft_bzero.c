/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassir <ayassir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:08:03 by ayassir           #+#    #+#             */
/*   Updated: 2021/11/24 14:47:58 by ayassir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *) ptr;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}
