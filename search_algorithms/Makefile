CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
RM=rm -rf
VALGRIND=valgrind
VFLAGS= --leak-check=full --show-leak-kinds=all

TARGET0=0-linear
SRC0=	0-linear.c \
	0-main.c

TARGET1=1-binary
SRC1=	1-main.c \
	1-binary.c

all: 0 1

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3)

re: clean all

betty:
	betty 0-linear.c 1-binary.c

val0:
	$(VALGRIND) $(VFLAGS) ./0-insertion

val1:
	$(VALGRIND) $(VFLAGS) ./1-binary
