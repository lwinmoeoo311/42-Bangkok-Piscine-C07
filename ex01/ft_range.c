/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:28:06 by lwoo              #+#    #+#             */
/*   Updated: 2025/07/24 16:58:41 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *) malloc ((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
