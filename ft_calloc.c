/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:17:35 by jchu              #+#    #+#             */
/*   Updated: 2023/01/12 16:52:52 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;
	size_t	idx;

	buffer = (void *)malloc(size * count);
	if (!buffer || count >= MAX / size)
		return (NULL);
	idx = 0;
	while (idx < size * count)
		((char *)buffer)[idx++] = 0;
	return (buffer);
}
