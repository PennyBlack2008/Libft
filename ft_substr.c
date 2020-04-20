/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:47:00 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/21 00:15:12 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	sub_str[len + 1];

	if (!s)
		return (NULL);
	if (ft_strlen(s) + 1 < start + len)
		return (ft_strdup(""));
	ft_strlcpy(sub_str, s + start, len + 1);
	return (ft_strdup(sub_str));
}
