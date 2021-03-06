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
	if((buff->write+1) == (buff->read))
		return 1;
	if((buff->write == &(buff->buffer[BUFF_SIZE-1])) && (buff->read == &(buff->buffer[0])))
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
	if(Is_full(buff)){
		printf("\nBuffer is full\n");
		return 0;
	
	}else
	{
		*(buff->write) = data;
		buff->write++;
		
		if(buff->write == &(buff->buffer[BUFF_SIZE]))
			buff->write = buff->buffer;
	}
	
	return 1;
}

int get(buffer_struct* buff)
{
	if(Is_empty(buff))
		return 0;
	
	int data = *(buff->read);
	buff->read++;

	if(buff->read == &(buff->buffer[BUFF_SIZE]))
		buff->read = &(buff->buffer[0]);

	return data;	
}

void dump(buffer_struct* buff)
{
	if(Is_empty(buff))
		return;

	int* current = buff->write;

	while(current != buff->write)
	{
		printf("Buffer element %d", *current);
		current++;
		
		if(current == &(buff->buffer[BUFF_SIZE-1]))
			current=&(buff->buffer[0]);
	}
	  

	
}


























