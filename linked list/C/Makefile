CC = gcc
CCFLAGS = -Wall -g

TEST = test.out
SRCS_TEST = linked_list_test.c

clean:
	rm -f *.o
	rm -f *.out

test: ${TEST}
	./${TEST}

${TEST}: ${SRCS_TEST} linked_list.o
	${CC} ${CCFLAGS} -o ${TEST} ${SRCS_TEST} linked_list.o

linked_list.o: linked_list.c

.PHONY: all clean test