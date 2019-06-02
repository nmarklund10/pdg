CC=gcc
CFLAGS=-Wall -Werror -g3
OUT=data_types.out

$(OUT): data_types.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OUT)