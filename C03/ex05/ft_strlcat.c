/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elkaynar <elkaynar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:05:52 by elkaynar          #+#    #+#             */
/*   Updated: 2024/09/01 14:05:18 by elkaynar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b])
		b++;
	if (size <= a)
	{
		return (b + size);
	}
	c = 0;
	while (src[c] && c < size - a - 1)
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (a + b);
}
