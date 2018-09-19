/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukhoza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:02:40 by tukhoza           #+#    #+#             */
/*   Updated: 2018/06/06 15:55:08 by tukhoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*snew;

	if (s == NULL)
		return (NULL);
	size = 0;
	i = 0;
	snew = NULL;
	size = ft_strlen((char*)s);
	snew = (char*)malloc((sizeof(char) * size) + 1);
	if (snew == NULL)
		return (NULL);
	while (i < size)
	{
		snew[i] = (*f)(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
