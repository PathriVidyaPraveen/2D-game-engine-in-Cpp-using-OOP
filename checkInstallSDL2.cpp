#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cerr << "SDL2 cannot be initialized. SDL Error: " << SDL_GetError() << endl;
        return 1;
    } else {
        cout << "SDL2 successfully initialized. Running SDL2 window..." << endl;
    }

    // Create SDL Window
    SDL_Window* window = SDL_CreateWindow("SDL2 Window", 
                                          SDL_WINDOWPOS_CENTERED, 
                                          SDL_WINDOWPOS_CENTERED, 
                                          800, 600, 
                                          SDL_WINDOW_SHOWN);

    if (!window) {
        cerr << "Window could not be created. SDL Error: " << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }

    // Delay to see the window (5 seconds)
    SDL_Delay(5000);

    // Cleanup
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
