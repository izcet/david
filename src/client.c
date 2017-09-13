/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:44:43 by irhett            #+#    #+#             */
/*   Updated: 2017/09/12 19:32:29 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "david.h"

t_client	*make_client(void)
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

t_client	*make_named_client(char	*new_name)
{
	t_client	*t;

	t = make_client();
	//t->name = strdup(new_name); // same thing  vv
	(*t).name = strdup(new_name); // same thing  ^^

	/*
	 * t_client pointer named t
	 * points to struct whatever
	 * whatever contains:
	 * 		char pointer pointing to string newname
	 * 		integer amount_money = 0;
	 * 		pointer to struct = NULL;
	 */
	return (t);
}

void		destroy_client(t_client *t)
{
	if (t)
	{
		if (t->name)
			free(t->name);
		if (t->best_friend)
			; // do nothing because we don't want to break it
		free(t);
	}
	else
		printf("can't destroy nothing, stupid\n");
}

void	print_client(t_client *t)
{
	printf("Client : %p \n{\n", t);
	printf("\tname:   %s\n", t->name);
	printf("\tmonies: %i\n", t->amount_money);
	printf("\tfriend: %p \n}\n", t->best_friend);
	if (t->best_friend)
	{
		printf("\n");
		print_client(t->best_friend);
	}
}
