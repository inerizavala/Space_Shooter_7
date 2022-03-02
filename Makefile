CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: asteroids

asteroids: asteroids.cpp log.cpp timers.cpp ewarren.cpp btate.cpp jpereyra.cpp inerizavala.cpp
	g++ $(CFLAGS) asteroids.cpp log.cpp timers.cpp ewarren.cpp btate.cpp jpereyra.cpp inerizavala.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -oasteroids

clean:
	rm -f asteroids
	rm -f *.o

