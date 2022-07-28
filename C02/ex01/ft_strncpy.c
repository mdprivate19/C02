/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:08:17 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/21 17:53:37 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	m;

	m = 0;
	while (src[m] != '\0' && m < n)
	{
		dest[m] = src[m];
		m++;
	}
	while (n > m)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
