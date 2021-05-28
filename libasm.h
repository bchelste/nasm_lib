/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artempot <artempot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:30:41 by artempot          #+#    #+#             */
/*   Updated: 2021/05/28 15:23:48 by artempot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

size_t      ft_strlen(const char *str);
char        *ft_strcpy(char *dst, const char *src);
int         ft_strcmp(const char *str1, const char *str2);
int         ft_write(int fd, void *buf, int byte);
int         ft_read(int fd, void *buf, int byte);

#endif