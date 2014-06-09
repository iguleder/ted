/*
 * regsub
 * @(#)regsub.c	1.3 of 2 April 86
 *
 *	Copyright (c) 1986 by University of Toronto.
 *	Written by Henry Spencer.  Not derived from licensed software.
 *
 *	Permission is granted to anyone to use this software for any
 *	purpose on any computer system, and to redistribute it freely,
 *	subject to the following restrictions:
 *
 *	1. The author is not responsible for the consequences of use of
 *		this software, no matter how awful, even if they arise
 *		from defects in it.
 *
 *	2. The origin of this software must not be misrepresented, either
 *		by explicit claim or by omission.
 *
 *	3. Altered versions must be plainly marked as such, and must not
 *		be misrepresented as being the original software.
 */
#include "libregConfig.h"

#include <stdio.h>
#include <reg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "regmagic.h"

#include <appDebugon.h>

#ifndef CHARBITS
#define	UCHARAT(p)	((int)*(unsigned char *)(p))
#else
#define	UCHARAT(p)	((int)*(p)&CHARBITS)
#endif

/*
 - regsub - perform substitutions after a regexp match
 */
void regSubstitute(	regProg *	prog,
			char *		source,
			char *		dest )
{
	register char *src;
	register char *dst;
	register char c;
	register int no;
	register int len;

	if (prog == NULL || source == NULL || dest == NULL) {
		SDEB("NULL parm to regsub");
		return;
	}
	if (UCHARAT(prog->rpProgram) != MAGIC) {
		SDEB("damaged regexp fed to regsub");
		return;
	}

	src = source;
	dst = dest;
	while ((c = *src++) != '\0') {
		if (c == '&')
			no = 0;
		else if (c == '\\' && '0' <= *src && *src <= '9')
			no = *src++ - '0';
		else
			no = -1;

		if (no < 0) {	/* Ordinary character. */
			if (c == '\\' && (*src == '\\' || *src == '&'))
				c = *src++;
			*dst++ = c;
		} else if (prog->rpStartp[no] != NULL && prog->rpEndp[no] != NULL) {
			len = prog->rpEndp[no] - prog->rpStartp[no];
			(void) strncpy(dst, (char *)prog->rpStartp[no], len);
			dst += len;
			if (len != 0 && *(dst-1) == '\0') {	/* strncpy hit NUL. */
				SDEB("damaged match string");
				return;
			}
		}
	}
	*dst++ = '\0';
}
