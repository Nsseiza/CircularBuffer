#include <stdio.h>
#include <stdlib.h>

#include "circular_buffer.h"

int main(int argc, char* argv[])
{
	buffer_struct buff_1;

	Init_buffer(&buff_1);
	
	put(&buff_1, 5);
	put(&buff_1, 10);
	
	printf("\n%d", get(&buff_1));
	
	rerturn 0;
}
