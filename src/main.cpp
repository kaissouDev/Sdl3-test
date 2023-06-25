#include <SDL.h>
#include <iostream>
#include <vulkan/vulkan.h>


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

    VkInstance instance;
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
        std::cerr << "Error: Failed to create Vulkan instance" << std::endl;
        SDL_DestroyWindow(Game);
        SDL_Quit();
        return 1;
    }

    return 0;
}