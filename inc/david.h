/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   david.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:40:34 by irhett            #+#    #+#             */
/*   Updated: 2017/09/12 19:29:49 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAVID_H
# define DAVID_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct			s_client
{
	char				*name;
	int					amount_money;  
	//void				*best_friend;
	struct s_client		*best_friend;
}						t_client;

typedef struct			s_workplace
{
	t_client			*boss;
	t_client			*intern;
}						t_work;

/*
(char *)++; // 1 byte -> 0-255
(int *)++; // 4 bytes -> 4294967295
(struct s_client)++; // -> size
(void *)++; // error
*/

t_client	*make_client(void);
t_client	*make_named_client(char *name);
void		destroy_client(t_client *client);

void		print_client(t_client *t);

#endif
