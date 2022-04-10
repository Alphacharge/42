/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:49:24 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/10 19:20:50 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	void	*ptr;

	ptr = ft_calloc(sizeof(content),(size_t)1);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
