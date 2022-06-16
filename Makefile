CC=tcc
CFLAGS= -g -Wall
BIN = bin/main
OBJS=obj/main.o obj/functions.o
SUBMITNAME=name.zip

all:$(BIN)

bin/main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r bin/* obj/*

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)
	tar -zcvf $(SUBMITNAME).tar.gz $(BIN)
