#make main with 3 files
objs = main.o input.o calc.o
.PHONY : clean
	
main: $(objs)
	gcc -o main $(objs)
%.o : %.c
	gcc -c $<


clean:
	rm *.o
	rm main

