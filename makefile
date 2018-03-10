main: clean compile exec
clean:
	@rm -f *.o
compile:
	@gcc -g -c *.c
	@gcc *.o -lpthread -g -o "flexyflex"
exec:
	@x-terminal-emulator  --geometry "5x5" -e "bash -c ./flexyflex ; bash" > /dev/null;
