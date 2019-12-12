
all:buffer

buffer:main.o circ_buff.o
	gcc main.o circ_buff.o -o buffer

main.o:main.c circular_buffer.h
	gcc -c main.c -o main.o

circ_buff.o:circular_buffer.c circular_buffer.h
	gcc -c circular_buffer.c -o circ_buff.o

.PHONY: clean
clean:
	rm *.o  
