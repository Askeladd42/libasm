# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:24 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:24 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.data

	global: _ft_strlen
	global: s

s:
	db	"Salut les gens"

i:
	db	0

section.text
	global _start

_start:
	_size_t	ft_strlen

	mov eax, 0
	jmp	edx
	mov eax, edx


	ret;