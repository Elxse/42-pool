/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:52:55 by echin             #+#    #+#             */
/*   Updated: 2020/08/23 20:33:37 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_FILE_H
# define FT_READ_FILE_H

int		safe_open(char *path);
int		safe_close(int fd);

#endif
