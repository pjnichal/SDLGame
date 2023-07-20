#include <iostream>
#include <SDL2/SDL.h>
using namespace std;
const int WIDTH = 800, HEIGHT = 600;
int main(int argv, char **args)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("pravin", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if (NULL == window)
    {
        cout << "ERROR" << SDL_GetError();
        return 1;
    }
    SDL_Event windowEvent;
    while (true)
    {
        if (SDL_PollEvent(&windowEvent))
        {
            if (SDL_QUIT == windowEvent.type)
            {
                break;
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}