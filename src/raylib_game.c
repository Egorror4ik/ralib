#include "raylib_game.h"

Sound fxCoin;
Font font;

int main(void) {
    InitWindow(0, 0, "Моя игра");
    SetWindowState(FLAG_WINDOW_RESIZABLE);

    Vector2 circlePos = { 400, 300 };
    int radius = 50;
    Color color = BLUE;

    while (!WindowShouldClose()) {
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
            circlePos = GetMousePosition();
            color = GREEN;
        }
        else {
            color = BLUE;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(circlePos, radius, color);
        DrawText("Tap screen to move circle", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
