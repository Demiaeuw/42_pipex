/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:21:04 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 17:10:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/include.h"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	errorcall(errorargument);
	ft_printf("HelloWorld\n");
	return (0);
}
