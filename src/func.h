/* INCL. WHERE 'MAIN':
<stdio.h>
"data.h"
IN THE PRESENTED ORDER */

void prtstr(char*);

void
prtstr(char *str)
{
    char c;
    while ((c = *str++) != NUL)
        putchar(c);
}