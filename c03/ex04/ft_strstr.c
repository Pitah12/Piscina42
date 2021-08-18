/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmarti <pedmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:06:38 by pedmarti          #+#    #+#             */
/*   Updated: 2021/08/17 17:31:19 by pedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		k = 0;
		j = i;
		while (to_find[k] == str[i])
		{
			if (to_find[k + 1] == '\0')
				return (str + j);
			i++;
			k++;
		}
		i = i - k;
		i++;
	}
	return (0);
}
