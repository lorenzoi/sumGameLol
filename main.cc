#include <iostream>
#include "Game.hh"

Game *game = nullptr;

int main()
{
  game = new Game;

  game->init("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
  
  do {
    game->eventHandler();
    game->update();
    game->render();
  } while(game->running());
  game->clean();
}
