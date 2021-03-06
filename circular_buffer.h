#ifndef CURCULARBUFFER_H_
#define CIRCULARBUFFER_H_

#define BUFF_SIZE 11

typedef struct buffer_struct
{
	int buffer[BUFF_SIZE];
	int* write;
	int* read;

}buffer_struct;

int Init_buffer(buffer_struct* buff);

int Is_full(buffer_struct* buff);

int Is_empty(buffer_struct* buff);

int put(buffer_struct* buff, int data);

int get(buffer_struct* buff);

void dump(buffer_struct* buff);

#endif
