/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:33:41 by gpecci            #+#    #+#             */
/*   Updated: 2023/03/02 16:26:59 by gpecci           ###   ########.fr       */
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
}

void	win_image(t_game *game)
{
	int	x;
	int	y;

	mlx_clear_window(game->mlx, game->win);
	game->img_end = mlx_xpm_file_to_image(game->mlx,
			"images/win.xpm", &x, &y);
	mlx_put_image_to_window(game->mlx, game->win, game->img_end,
		(((game->map_w) / 2) - 390), (((game->map_h) / 2) - 85));
}
