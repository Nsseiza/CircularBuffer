#include <stdio.h>
#include <stdlib.h>
#include "circular_buffer.h"

int Init_buffer(buffer_struct* buff)
{
	buff->write = buff->buffer;
	buff->read = buff->buffer;
}

int Is_full(buffer_struct* buff)
{
	if((buff->write+1) == buff->read)
		return 1;
	if((buff->read == &(buff->buffer[0])) && (buff->write == &(buff->buffer[BUFF_SIZE-1])))
		return 1;
	
	return 0;
}

int Is_empty(buffer_struct* buff)
{
	if(buff->read == buff->write)
		return 1;
	
	return 0;
}

int put(buffer_struct* buff, int data)
{
	if(Is_full())
		break;
	else
	{
		*(buff->write) = data;
		buff->write++;
		
		if(buff->write == &(buff->buffer[BUFF_SIZE]))
			buff->write = buff->buffer;
	}
}
