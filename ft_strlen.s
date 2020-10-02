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

section.text
	global _start

_start:
	_size_t	ft_strlen

cnt:
	cmp eax, 0				; comparing the eax value and \0
	je exit					; if it's equal : jump to the exit instruction
	inc eax					; if it isn't equal : incremente eax
	jmp cnt					; then jump to the cnt instruction again

exit:
	ret						; returning eax value