/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_str_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:34:14 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/19 14:34:48 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"

void	free_str_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free_str(str[i]);
		i++;
	}
	free(str);
}
