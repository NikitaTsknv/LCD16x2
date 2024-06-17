all: lcd16x2

lcd16x2:
	gcc lcd16x2.c -o lcd16x2 -lwiringPi -lwiringPiDev -lpthread

clean:
	rm -rf lcd16x2
