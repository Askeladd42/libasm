/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:32:58 by plam              #+#    #+#             */
/*   Updated: 2021/01/21 15:40:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

/*void	ft_len(void)
{
	printf("-----------FT_STRLEN----------\n");
	printf("mine = |%zd|\n", ft_strlen("hello"));
	printf("real = |%zd|\n", strlen("hello"));
	printf("mine = |%zd|\n", ft_strlen("hello_world !"));
	printf("real = |%zd|\n", strlen("hello_world !"));
	printf("mine = |%zd|\n", ft_strlen("#stayathome"));
	printf("real = |%zd|\n", strlen("#stayathome"));
	printf("mine = |%zd|\n", ft_strlen("#42atom"));
	printf("real = |%zd|\n", strlen("#42atom"));
	printf("mine = |%zd|\n", ft_strlen(""));
	printf("real = |%zd|\n", strlen(""));
	printf("mine = |%zd|\n", ft_strlen("\n"));
	printf("real = |%zd|\n", strlen("\n"));
	printf("mine = |%zd|\n", ft_strlen("asdfasdf''///##!!@"));
	printf("real = |%zd|\n", strlen("asdfasdf''///##!!@"));
	printf("mine = |%zd|\n", ft_strlen("the\0hidden"));
	printf("real = |%zd|\n", strlen("the\0hidden"));
	printf("mine = |%zd|\n", ft_strlen("Lorem \bipsum\vdollar"));
	printf("real = |%zd|\n", strlen("Lorem \bipsum\vdollar"));
	printf("------------------------------\n\n");
}

void	ft_cmp(void)
{
	printf("-----------FT_STRCMP----------\n");
	printf("mine = |%d|\n", ft_strcmp("hello", "hello"));
	printf("real = |%d|\n", strcmp("hello", "hello"));
	printf("mine = |%d|\n", ft_strcmp("hello", "HELLA"));
	printf("real = |%d|\n", strcmp("hello", "HELLA"));
	printf("mine = |%d|\n", ft_strcmp("hello_world !", "Bonjour le monde !"));
	printf("real = |%d|\n", strcmp("hello_world !", "Bonjour le monde !"));
	printf("mine = |%d|\n", ft_strcmp("stayathome", "#restezchezvous"));
	printf("real = |%d|\n", strcmp("#stayathome", "#resterchezvous"));
	printf("mine = |%d|\n", ft_strcmp("Hi", "Hi"));
	printf("real = |%d|\n", strcmp("HI", "HI"));
	printf("mine = |%d|\n", ft_strcmp("#42atom", "#42aAISON"));
	printf("real = |%d|\n", strcmp("#42atom", "#42MAISON"));
	printf("mine = |%d|\n", ft_strcmp("", "vide"));
	printf("real = |%d|\n", strcmp("", "vide"));
	printf("mine = |%d|\n", ft_strcmp("\n", "rien"));
	printf("real = |%d|\n", strcmp("\n", "rien"));
	printf("mine = |%d|\n", ft_strcmp("the\0hidden", "thehidden"));
	printf("real = |%d|\n", strcmp("the\0hidden", "thehidden"));
	printf("mine = |%d|\n", ft_strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%d|\n", strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}
*/
void	ft_cpy(void)
{
	printf("-----------FT_STRCPY----------\n");
	printf("mine = |%s|\n", ft_strcpy("hell", "hello"));
	printf("real = |%s|\n", strcpy("hell", "hello"));
	printf("mine = |%s|\n", ft_strcpy("hello", "HELLA"));
	printf("real = |%s|\n", strcpy("hello", "HELLA"));
	printf("mine = |%s|\n", ft_strcpy("hello_world !", "Bonjour le monde !"));
	printf("real = |%s|\n", strcpy("hello_world !", "Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strcpy("stayathome", "#restezchezvous"));
	printf("real = |%s|\n", strcpy("#stayathome", "#resterchezvous"));
	printf("mine = |%s|\n", ft_strcpy("Hi", "Hi"));
	printf("real = |%s|\n", strcpy("HI", "HI"));
	printf("mine = |%s|\n", ft_strcpy("#42atom", "#42aAISON"));
	printf("real = |%s|\n", strcpy("#42atom", "#42MAISON"));
	printf("mine = |%s|\n", ft_strcpy("", "vide"));
	printf("real = |%s|\n", strcpy("", "vide"));
	printf("mine = |%s|\n", ft_strcpy("\n", "rien"));
	printf("real = |%s|\n", strcpy("\n", "rien"));
	printf("mine = |%s|\n", ft_strcpy("the\0hidden", "thehidden"));
	printf("real = |%s|\n", strcpy("the\0hidden", "thehidden"));
	printf("mine = |%s|\n", ft_strcpy("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%s|\n", strcpy("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

/*
void	ft__write(void)
{
	int fd;

	fd = 1;
	errno = 0;
	printf("-----------FT_WRITE-----------\n");
	printf("mine = %ld errno = %d\n", ft_write(5000, "hello world", 11), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(5000, "hello world", 11), errno);
	errno = 0;
	printf("mine = %ld errno= %d\n", ft_write(fd, "hi", 2), errno);
	errno = 0;
	printf("real = %ld erno = %d\n", write(fd, "hi", 2), errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(50000, "hola, como estas ?", 18),
			errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(50000, "hola, como estas ?", 18),
			errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(fd, "welcome hi", 9), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(fd, "welcome hi", 9), errno);
	printf("------------------------------\n\n");
}
*/

int		main(void)
{
	//ft_len();
	//ft_cmp();
	//ft__write();
	//ft__read();
	ft_cpy();
	//ft_dup();
	return (0);
}