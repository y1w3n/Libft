/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:28:12 by yitay             #+#    #+#             */
/*   Updated: 2023/06/09 14:17:00 by yitay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr;

// 	if (count == SIZE_MAX || size == SIZE_MAX)
// 		return (NULL);
// 	ptr = malloc(count * size);
// 	if (!ptr)
// 		return (NULL);
// 	ft_bzero(ptr, count * size);
// 	return (ptr);
// }

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	//if ((count * size) > 4) integer has 4 bytes
	if ((count * size) > INT_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (count * size))
		ptr[i++] = 0;
	return ((void *)ptr);
}
