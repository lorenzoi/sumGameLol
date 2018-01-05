#ifndef GAME_HH
#define GAME_HH
#include "SDL.h"


class Game {
public:
  // Constructor and Deconstructor
  Game();
  ~Game();

  // Initializing Functions
  void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

  // Looping Commands
  void eventHandler();
  void update();
  void render();
  void clean();
  
  // Application Running Checker
  bool running();

private:
  bool isRunning;
  SDL_Window* window;
  SDL_Renderer* renderer;
};
#endif
