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

	section	.text
	global	ft_strlen

	ft_strlen:
		xor	rax, rax			; set rax = 0

	cnt:
		cmp	byte[rdi + rax], 0	; comparing the rax value and \0
		jz	exit				; if it's equal : jump to the exit instruction
		inc	rax					; if it isn't equal : incremente rax
		jmp	cnt					; then jump to the cnt instruction again

	exit:
		ret						; returning rax value
