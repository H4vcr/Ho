#include <stdio.h>

int main(int argc, char **argv)
{
		char *secret1 = "This is the first sceret!\n";
		char *secret2 = "This is the second secret!\n";
		printf(argv[1]);

		return 0;
}

// prog hello-world
// prog %s

/*

root@lab:~/exploit#: ./FormatStringSimple %s%s
This is the second secret!
This is the first secret!

 */
// gcc -mpreferred-stack-boundary=2 -o FormatStringSimple FormatStringSimple.c
