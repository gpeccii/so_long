/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:33:41 by gpecci            #+#    #+#             */
/*   Updated: 2023/02/28 19:41:20 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	win_d(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp][game->xp - 1] = '0';
	game->moves++;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("HAI VINTO!!!!");
	ft_putstr("\n");
}

void	win_s(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp - 1][game->xp] = '0';
	game->moves++;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("HAI VINTO!!!!");
	ft_putstr("\n");
	//mlx_string_put(game->mlx, game->win, (game->map_w) / 2, (game->map_h) / 2, 16777215, "HAI VINTO!!!!");
}

void	win_a(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp][game->xp + 1] = '0';
	game->moves++;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("HAI VINTO!!!!");
	ft_putstr("\n");
}

void	win_w(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	game->map[game->yp + 1][game->xp] = '0';
	game->moves++;
	game->endgame = 1;
	draw_map(game);
	draw_wall(game);
	ft_putstr("HAI VINTO!!!!");
	ft_putstr("\n");
}
