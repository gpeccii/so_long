/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:28:47 by gpecci            #+#    #+#             */
/*   Updated: 2023/02/28 19:00:34 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_map(char *path)
{
	char	*tmp_map2;
	int		fd;
	char	*line;
	char	**map;
	char	*tmp_map;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	tmp_map = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp_map2 = tmp_map;
		tmp_map = ft_strjoin(tmp_map2, line);
		free(line);
		free(tmp_map2);
	}
	map = ft_split(tmp_map, '\n');
	free(tmp_map);
	close(fd);
	return (map);
}
