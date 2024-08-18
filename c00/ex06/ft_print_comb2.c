/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elkaynar <elkaynar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:45:19 by elkaynar          #+#    #+#             */
/*   Updated: 2024/08/18 05:08:52 by elkaynar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_number(a / 10 + '0');
			write_number(a % 10 + '0');
			write_number(' ');
			write_number(b / 10 + '0');
			write_number(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				write(1, &", ", 2);
			}
			b++;
		}
		a++;
	}
}
	int main (void) {      
 	ft_print_comb2 ();


	} 