/*
 WARNING: This code is not mine. I found it somewhere on the Internet. I
 have added it to this repository just for educational purpose. I disown
 everything about this code, and consequences arising from use of it.
 
 gcc -Wall -O2 -U_FORTIFY_SOURCE -fstack-protector-strong boom.c -o boom
 ./boom 64 AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no_chars {
    unsigned int len;
    unsigned int data;
};

int main(int argc, char * argv[])
{
    struct no_chars info = { };

    if (argc < 3) {
        fprintf(stderr, "Usage: %s LENGTH DATA...\n", argv[0]);
        return 1;
    }

    info.len = atoi(argv[1]);
    memcpy(&info.data, argv[2], info.len);

    return 0;
}
