libraries = `pkg-config --cflags --libs sdl2`

main:
	g++ main.cc game.cc -o game $(libraries) -Wall
