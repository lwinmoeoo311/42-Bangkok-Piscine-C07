/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:05:34 by lwoo              #+#    #+#             */
/*   Updated: 2025/07/29 00:24:03 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	*range = (int *) malloc ((size) * sizeof (int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min != max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
