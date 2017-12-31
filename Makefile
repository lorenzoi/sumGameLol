libraries = `pkg-config --cflags --libs sdl2`

main:
	g++ main.cc -o game $(libraries)
