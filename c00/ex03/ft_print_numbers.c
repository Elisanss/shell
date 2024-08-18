
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elkaynar <elkaynar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:38:01 by elkaynar          #+#    #+#             */
/*   Updated: 2024/08/17 23:49:22 by elkaynar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 47;
	while (++i <= 57)
		write(1, &i, 1);
}
int main()
{
    ft_print_numbers();
}