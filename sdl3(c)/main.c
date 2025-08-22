#include <SDL3/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Initialize SDL (video subsystem)
    if (SDL_Init(SDL_INIT_VIDEO) == 0) {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a window
    SDL_Window *window = SDL_CreateWindow("SDL3 Window",
                                          800, 600,        // width, height
                                          SDL_WINDOW_RESIZABLE);
    if (!window) {
        printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Timing variables
    Uint64 lastTime = SDL_GetTicks();
    Uint64 fpsLastTime = lastTime;
    int frameCount = 0;

    // Event loop
    int running = 1;
    SDL_Event e;
    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) {
                running = 0;
            }
        }

        // Count frames
        frameCount++;

        // Current time
        Uint64 currentTime = SDL_GetTicks();

        // Every 1 second, print FPS
        if (currentTime - fpsLastTime >= 1000) {
            printf("FPS: %d\n", frameCount);
            frameCount = 0;
            fpsLastTime = currentTime;
        }

        // Simulate rendering delay (optional)
    }

    // Cleanup
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
