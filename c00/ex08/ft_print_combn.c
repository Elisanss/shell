/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elkaynar <elkaynar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:47:30 by elkaynar          #+#    #+#             */
/*   Updated: 2024/08/17 23:49:33 by elkaynar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_function(char *arr, int n, int index, char start)
{
	if (index == n)
	{
		write(1, arr, n);
		if (arr[0] != '9' - n + 1)
		{
			write(1, ", ", 2);
		}
	}
	while (start <= '9')
	{
		arr[index] = start;
		recursive_function(arr, n, index + 1, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[n];

	recursive_function(arr, n, 0, '0');
}