/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:47:44 by user42            #+#    #+#             */
/*   Updated: 2020/11/23 11:32:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libasm.h"
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_check_strlen(void)
{
	printf("\n*********** STRLEN ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_strlen("Hello World !"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", strlen("Hello World !"));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_strlen(""));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", strlen(""));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_strlen("\n"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", strlen("\n"));
}

void	ft_check_write(void)
{
	printf("\n*********** WRITE ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_write(-7, "My name is Jehanne !", 20));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", write(-7, "My name is Jehanne !", 20));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_write(1, "", 1));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", write(1, "", 1));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%zd]\n", ft_write(1, "Libasm", 1));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%zd]\n\n", write(1, "Libasm", 1));
}

void	ft_check_read(void)
{
	char	buffer[100];
	int		fd;
	int		errno;

	errno = 0;
	fd = -1;
	printf("\n*********** READ ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%ld] | %d\n", ft_read(fd, buffer, 8), errno);
	errno = 0;
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%ld] | %d\n", read(fd, buffer, 8), errno);
	errno = 0;
	fd = open("vide.txt", O_RDONLY);
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%ld] | %d\n", ft_read(fd, buffer, 8), errno);
	close(fd);
	errno = 0;
	fd = open("vide.txt", O_RDONLY);
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%ld] | %d\n", read(fd, buffer, 8), errno);
}

void	ft_check_cmp(void)
{
	printf("\n*********** STRCMP ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%d]\n", strcmp("Hello", "Hello"));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%d]\n", ft_strcmp("Hello", "Hola"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%d]\n", strcmp("Hello", "Hola"));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%d]\n", ft_strcmp("Hello", ""));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%d]\n", strcmp("Hello", ""));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%d]\n", ft_strcmp("", ""));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%d]\n", strcmp("", ""));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%d]\n", ft_strcmp("Hello", "Hello�Hi"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%d]\n", strcmp("Hello", "Hello�Hi"));
}

void	ft_check_cpy(void)
{
	char	dst[500];

	printf("\n*********** STRCPY ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", ft_strcpy(dst, "Hello"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", strcpy(dst, "Hello"));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", ft_strcpy(dst, ""));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", strcpy(dst, ""));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", ft_strcpy(dst, "Bonjour le monde"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", strcpy(dst, "Bonjour le monde"));
}

void	ft_check_strdup(void)
{
	char	*dst;

	dst = NULL;
	printf("\n*********** STRDUP ***********\n\n");
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", dst = ft_strdup("Hello"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", dst = strdup("Hello"));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", dst = ft_strdup(""));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", dst = strdup(""));
	printf("\033[33mMine :\033[00m\n");
	printf("\tret : [%s]\n", dst = ft_strdup("Ceci est strdup !"));
	printf("\033[35mReal :\033[00m\n");
	printf("\tret : [%s]\n", dst = strdup("Ceci est strdup !"));
}

int		main(void)
{
	ft_check_strlen();
	ft_check_write();
	ft_check_read();
	ft_check_cmp();
	ft_check_cpy();
	ft_check_strdup();
	return (0);
}
