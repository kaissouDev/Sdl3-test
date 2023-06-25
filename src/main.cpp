#include <SDL.h>
#include <iostream>
#include <SDL_vulkan.h>
#include <boxer/boxer.h>

int main(){

    SDL_Window* Game;
    SDL_Init(SDL_INIT_VIDEO);

    Game = SDL_CreateWindow(
        "Game",
        800,
        600,
        SDL_WINDOW_VULKAN
    );
    /*SDL_GLContext context = SDL_GL_CreateContext(Game);
    if (context == nullptr) {
        std::cerr << "Error: Failed to create OpenGL context: " << SDL_GetError() << std::endl;
        std::cin.ignore();
        SDL_DestroyWindow(Game);
        SDL_Quit();
        return 1;
    }*/

    if (SDL_Vulkan_LoadLibrary(nullptr) != 0) {
        boxer::show("Error: Failed to load Vulkan library", "Vulkan-Errors", boxer::Style::Warning);
        SDL_DestroyWindow(Game);
        SDL_Quit();
        return 1;
    }
}