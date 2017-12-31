#include "window.hh"
#include <iostream>

using namespace std;

void initializeWindow()
{
  /* initialize SDL */
  SDL_Init(SDL_INIT_EVERYTHING);
  
  /* Main Code for window */
  SDL_Window* window;
  window = SDL_CreateWindow("sumGame"               ,
			    SDL_WINDOWPOS_UNDEFINED ,
			    SDL_WINDOWPOS_UNDEFINED ,
			    1000                     ,
			    800                     ,
			    SDL_WINDOW_RESIZABLE    );

  // Error Call
  if (window = NULL)
    cout << "error while initializing window" << endl << SDL_GetError << endl;
}

void SDLWindowLoop()
{
  initializeWindow();
  /* Event Variables */
  SDL_Event event;
  bool windowRunning = true;

  /* Main loop */
  do {
    /* Window Running Loop */
    do {
      /* Event Loop */
      if (event.type == SDL_QUIT) {
	windowRunning = false;
	break;
      }
    } while (SDL_PollEvent(&event));
  } while (windowRunning);

  /* shutdown SDL after window closes */
  SDL_Quit;
}
