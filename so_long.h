/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:29:16 by gpecci            #+#    #+#             */
/*   Updated: 2023/02/27 17:29:17 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "./mlx/mlx.h"
# include "./libft/libft.h"

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	void	*img_backg;
	void	*img_wall;
	void	*img_wall2;
	void	*img_player;
	void	*img_colect;
	void	*img_exit;
	void	*img_enemy;
	int		map_w;
	int		map_h;
	int		img_w;
	int		img_h;
	int		n_collect;
	int		n_player;
	int		n_exit;
	int		xp;
	int		yp;
	int		moves;
	int		endgame;
	int		loop;
	int		pos_enemy;
}	t_game;

# define KEY_ESC 53
# define KEY_Q 12
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_LEFT 123
# define KEY_RIGHT 124

char	**read_map(char *path);
int		map_check(t_game *game);
int		draw_map(t_game *game);
int		draw_wall(t_game *game);
void	draw_img(t_game *game, void *img, int x, int y);
void	free_map(char **map);
void	player_w(t_game *game);
void	player_a(t_game *game);
void	player_s(t_game *game);
void	player_d(t_game *game);
void	init_game(t_game *game);
int		exit_game(t_game *game);
void	gameplay(t_game *game);
int		animation(t_game *game);
void	display_moves(t_game *game);
void	draw_tomb(t_game *game);
void	win_w(t_game *game);
void	win_a(t_game *game);
void	win_s(t_game *game);
void	win_d(t_game *game);
void	display_term(t_game *game);

#endif
