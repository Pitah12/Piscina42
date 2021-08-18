/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:58:47 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/11 16:56:13 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (str[i] != '\0')
	{
		if (t == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			t++;
		}
		else if (t > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a'
				|| str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			t = 0;
		else
			t++;
		i++;
	}
	return (str);
}
