/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:28:53 by gpecci            #+#    #+#             */
/*   Updated: 2023/02/27 17:28:56 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

void	display_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	mlx_string_put(game->mlx, game->win, 25, 20, 16777215, "Moves: ");
	mlx_string_put(game->mlx, game->win, 125, 20, 16777215, str);
	free(str);
}

void	display_term(t_game *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	ft_putstr("Moves: ");
	ft_putstr(str);
	ft_putstr("\n");
	free(str);
}
