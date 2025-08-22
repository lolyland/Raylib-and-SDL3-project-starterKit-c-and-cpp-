#include "raylib.h"
#include <iostream>

int main(void) {
    // Init window
    InitWindow(800, 600, "Raylib Window");

    int frameCount = 0;
    double fpsTimer = GetTime();

    // Main game loop
    while (!WindowShouldClose()) {
        frameCount++;

        // Every second, print FPS to console
        if (GetTime() - fpsTimer >= 1.0) {
            std::cout << "FPS: " << frameCount << "\n";
            frameCount = 0;
            fpsTimer = GetTime();
        }

        BeginDrawing();
            ClearBackground(BLACK);

            // Draw FPS on the window (top-left corner)
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
