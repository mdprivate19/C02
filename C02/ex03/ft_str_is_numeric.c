/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:50:09 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/21 17:55:16 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
			return (0);
		a++;
	}
	return (1);
}
