CC = gcc
CFLAGS = -g -ansi -Wall
LDFLAGS = -llua -lrtaudio -framework CoreAudio -lpthread
OBJECTS = ckv.o ckvlib.o ckvaudio.o
EXECUTABLE=ckv

$(EXECUTABLE): $(OBJECTS)
	g++ $(LDFLAGS) $(OBJECTS) -o $@

ckvaudio.o: ckvaudio.cpp
	g++ $(CFLAGS) -c -o ckvaudio.o ckvaudio.cpp -D__MACOSX_CORE__

clean:
	rm -f *.o $(EXECUTABLE)
