/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:44:43 by irhett            #+#    #+#             */
/*   Updated: 2017/09/12 19:13:05 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "david.h"

t_client	*make_client(void);
{
	t_client	*t;

	t = (t_client *)malloc(sizeof(t_client));
	if (t == NULL)
	{
		printf("error allocating space\n");
		return (NULL);
	}
	bzero(t, sizeof(t_client));
	return (t);
}

t_client	*make_named_client(char	*name)
{
	t_client	*t
