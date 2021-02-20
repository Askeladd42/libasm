# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:17 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:17 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_strcpy

section	.text

ft_strcpy:	push	rcx
			xor		rax, rax
			jmp		chk_dst

loop:		mov	cl, byte[rsi + rax]
			mov	byte[rdi + rax], cl
			inc	rax
			jmp	chk_dst

chk_dst:	cmp	byte[rsi + rax], 0
			je	ret_0
			jmp	loop

ret_0:		mov	byte[rdi +rax], 0
			mov	rax , rdi
			pop	rcx
			ret
