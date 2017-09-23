taylor_series: function.c function.h main.c
	gcc -g -o taylor_series main.c function.c function.h -Wall -lm
