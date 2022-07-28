/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:37:50 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/26 19:00:18 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			if ((str[a - 1] < 'a' || str[a - 1] > 'z')
				&& (str[a - 1] < 'A' || str[a - 1] > 'Z')
				&& (str[a - 1] < '0' || str[a - 1] > '9'))
					str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
