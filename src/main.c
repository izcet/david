/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:44:24 by irhett            #+#    #+#             */
/*   Updated: 2017/09/12 19:34:24 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "david.h"

int			main(int argc, char **argv)
{
	t_client	*alice; // null
	t_client	bob; // struct {null, 0, null};
	t_client	*charlie; // null

	alice = make_named_client("Alice");
	charlie = &bob;
	alice->best_friend = charlie;
	bob.name = "foo";
	//bob.best_friend = alice;
	print_client(alice);

	destroy_client(alice);

	(void)argc;
	(void)argv;
	return (0);
}


