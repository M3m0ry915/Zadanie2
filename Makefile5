.PHONY: clean
.SUFFIXES: .c .o

%.o: %.c
	gcc -c $<

Code2: main.o obj.o pole.o
	gcc -o $@ $^

clean:
	rm -f Code2 *.o
