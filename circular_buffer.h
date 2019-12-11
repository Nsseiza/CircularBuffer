#ifndef CURCULARBUFFER_H_
#define CIRCULARBUFFER_H_

#define BUF_SIZE 11

typedef struct buffer_struct
{
	int buffer[BUFF_SIZE];
	buffer_struct* write;
	buffer_struct* read;

}buffer_struct;



#endif
