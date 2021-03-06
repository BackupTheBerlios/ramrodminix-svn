/*
  (c) copyright 1988 by the Vrije Universiteit, Amsterdam, The Netherlands.
  See the copyright notice in the ACK home directory, in the file "Copyright".
*/

/* $Header: /cvsup/minix/src/lib/float/zrf8.c,v 1.1.1.1 2005/04/21 14:56:11 beng Exp $ */

/*
	return a zero double (ZRF 8)
*/

#include "FP_types.h"

void
zrf8(z)
DOUBLE	*z;
{

	z->d[0] = 0L;
	z->d[1] = 0L;
}
