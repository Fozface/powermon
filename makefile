OBJ = main.o sensor.o helper.o
CFLAGS = -Wall -Werror -Wextra -g


all : powermon
powermon : $(OBJ)
	cc $(CFLAGS) -o powermon $(OBJ)
main.o : main.c sensor.h helper.h
	cc $(CFLAGS) -c main.c
sensor.o : sensor.c sensor.h helper.h
	cc $(CFLAGS) -c sensor.c
helper.o : helper.c helper.h
	cc $(CFLAGS) -c helper.c
.PHONY : clean format remake debug all
clean :
	rm -f powermon $(OBJ)
format :
	clang-format -i *.c *.h
debug :
	$(MAKE) clean
	$(MAKE) powermon CFLAGS="$(CFLAGS) -O0"
	gdb --args ./powermon 3
remake :
	$(MAKE) clean
	$(MAKE) powermon
