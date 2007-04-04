/*
 * data.c - this is the initialization for the standard streams
 */
/* $Header: /cvsup/minix/src/lib/stdio/data.c,v 1.1.1.1 2005/04/21 14:56:34 beng Exp $ */

#include	<stdio.h>

struct __iobuf __stdin = {
	0, 0, _IOREAD, 0,
	(unsigned char *)NULL, (unsigned char *)NULL, 
};

struct __iobuf __stdout = {
	0, 1, _IOWRITE, 0,
	(unsigned char *)NULL, (unsigned char *)NULL, 
};

struct __iobuf __stderr = {
	0, 2, _IOWRITE | _IOLBF, 0,
	(unsigned char *)NULL, (unsigned char *)NULL, 
};

FILE *__iotab[FOPEN_MAX] = {
	&__stdin,
	&__stdout,
	&__stderr,
	0
};
