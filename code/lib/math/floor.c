/*
 * (c) copyright 1988 by the Vrije Universiteit, Amsterdam, The Netherlands.
 * See the copyright notice in the ACK home directory, in the file "Copyright".
 *
 * Author: Ceriel J.H. Jacobs
 */
/* $Header: /cvsup/minix/src/lib/math/floor.c,v 1.1.1.1 2005/04/21 14:56:26 beng Exp $ */

#include	<math.h>

double
floor(double x)
{
	double val;

	return modf(x, &val) < 0 ? val - 1.0 : val ;
	/*	this also works if modf always returns a positive
		fractional part
	*/
}
