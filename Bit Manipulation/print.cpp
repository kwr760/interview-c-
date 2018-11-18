#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>

const char *printbitssimple(int n)
{
	static char b[33];
	unsigned int i;
	i = 1<<(sizeof(n) * 8 - 1);
	b[0] = '\0';

	while (i > 0) {
		if (n & i)
			strcat(b, "1");
		else
			strcat(b, "0");
		i >>= 1;
	}
	return b;
}

const char *byte_to_binary(int x)
{
    static char b[33];
    b[0] = '\0';

    int z;
    for (z = 65536; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}