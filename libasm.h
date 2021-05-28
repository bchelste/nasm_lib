/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:30:41 by bchelste          #+#    #+#             */
/*   Updated: 2021/05/28 18:31:14 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

size_t      ft_strlen(const char *str);
char        *ft_strcpy(char *dst, const char *src);
int         ft_strcmp(const char *str1, const char *str2);
int         ft_write(int fd, void *buf, int byte);
int         ft_read(int fd, void *buf, int byte);
char        *ft_strdup(const char *str);

#endif