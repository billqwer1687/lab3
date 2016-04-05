mainb:labb.o mainb.o
	g++ -o mainb mainb.o labb.o
maina:lab3a.o maina.o
	g++ -o maina lab3a.o maina.o
lab3a.o:lab3a.cpp lab3a.h
	g++ -c lab3a.cpp
maina.o:maina.cpp lab3a.h
	g++ -c maina.cpp
labb.o:labb.cpp labb.h
	g++ -c labb.cpp

mainb.o:mainb.cpp labb.h
	
	g++ -c mainb.cpp


clean:
	rm mainb.o labb.o maina.o lab3a.o

