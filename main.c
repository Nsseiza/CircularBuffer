#include <stdio.h>
#include <stdlib.h>

#include "circular_buffer.h"

int main(int argc, char* argv[])
{
	buffer_struct buff_1;

	Init_buffer(&buff_1);
	
	put(&buff_1, 1);
	put(&buff_1, 2);
	put(&buff_1, 3);
	put(&buff_1, 4);
	put(&buff_1, 5);
	put(&buff_1, 6);
	put(&buff_1, 7);
	put(&buff_1, 8);
	put(&buff_1, 9);
	put(&buff_1, 10);
	put(&buff_1, 11);
	put(&buff_1, 12);
	
	printf("\n%d\n", get(&buff_1));
	printf("\n%d\n", get(&buff_1));
	
	return 0;
}
