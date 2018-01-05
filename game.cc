#include "Game.hh"
#include <iostream>

using namespace std;

// Constructing Funtions
Game::Game()
{}

Game::~Game()
{}

// Initializing Function
void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
  int flags = 0;
  // Check to see if Fullscreen Mode has been called
  if(fullscreen)
    flags = SDL_WINDOW_FULLSCREEN;
  
  if(SDL_Init(SDL_INIT_EVERYTHING) == 1) {
    cout << "Initialization Complete" << endl;

    // Create the Window
    window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
    // Create the Renderer
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer) {
      SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    }
    // Set Is Running to True
    isRunning = true;
  } else {
    isRunning = false;
  }
}

// Looping Funtions
void Game::eventHandler()
{
  // Initialize EventHandler & Get Event Type
  SDL_Event event;
  SDL_PollEvent(&event);

  // Process Events
  switch (event.type) {
  case SDL_QUIT:
    isRunning = false;
    break;
  default:
    break;
  }
}

void Game::update()
{}

void Game::render()
{
  // Clear Renderer
  SDL_RenderClear(renderer);
  // Render Shit
  SDL_RenderPresent(renderer);
}

void Game::clean()
{
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();

  cout << "Game Quit Successfuly" << endl;
}

bool Game::running()
{}
