#include <SDL.h>
#include <iostream>


int main(){

    SDL_Window* Game;
    SDL_Init(SDL_INIT_VIDEO);

    Game = SDL_CreateWindow(
        "Game",
        800,
        600,
        SDL_WINDOW_OPENGL
    );
    SDL_GLContext context = SDL_GL_CreateContext(Game);
    if (context == nullptr) {
        std::cerr << "Error: Failed to create OpenGL context: " << SDL_GetError() << std::endl;
        std::cin.ignore();
        SDL_DestroyWindow(Game);
        SDL_Quit();
        return 1;
    }
    return 0;
}