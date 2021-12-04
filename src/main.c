#include <stdio.h>
#include "data.h"
#include "func.h"

int
main(void)
{
    char *msg = "hello world\n";
    int status = OK;
    if (strlen(msg) >= MAXSTR)
        printf("\nERROR CODE: %d\n", (status = ERR));
    else
        prtstr(msg);
    return status;
}
