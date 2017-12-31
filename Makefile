libraries = `pkg-config --cflags --libs sdl2`

main:
	g++ main.cc window.cc -o game $(libraries)
