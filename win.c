/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:33:41 by gpecci            #+#    #+#             */
/*   Updated: 2023/03/01 17:16:45 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	win_d(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp][game->xp - 1] = '0';
	game->moves++;
	game->n_collect = -1;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("YOU WIN!!!!");
	ft_putstr("\n");
}

void	win_s(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp - 1][game->xp] = '0';
	game->moves++;
	game->n_collect = -1;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("YOU WIN!!!!");
	ft_putstr("\n");
}

void	win_a(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp][game->xp + 1] = '0';
	game->moves++;
	game->n_collect = -1;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("YOU WIN!!!!");
	ft_putstr("\n");
}

void	win_w(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp + 1][game->xp] = '0';
	game->moves++;
	game->n_collect = -1;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("YOU WIN!!!!");
	ft_putstr("\n");
}

