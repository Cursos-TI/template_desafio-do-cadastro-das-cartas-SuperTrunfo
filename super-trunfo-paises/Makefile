CC=gcc
CFLAGS=-I./src -Wall -Wextra
SRC=src/main.c src/cartas.c
OBJ=$(SRC:.c=.o)
TARGET=super-trunfo-paises

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean