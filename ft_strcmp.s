# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:13 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:14 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_strcmp

section	.text
ft_strcmp:	xor rax, rax
			jmp	chk_dst

loop:		mov	cl, byte[rsi + rax]
			cmp	byte[rdi + rax], cl
			ja	ret_p
			jb	ret_n
			inc	rax
			jmp	chk_dst

chk_dst:	cmp	byte[rdi + rax], 0
			je	chk_src
			jmp	loop

chk_src:	cmp	byte[rsi + rax], 0
			je	ret_y
			jmp	loop

ret_y:		xor	rax, rax
			ret

ret_p:		mov		cl, byte[rdi +rax]
			sub		cl, byte[rsi + rax]
			movsx	rax, cl
			ret

ret_n:		sub		cl, byte[rdi + rax]
			neg		cl
			movsx	rax, cl
			ret