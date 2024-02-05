#include <raylib/raylib.h>

int main()
{
    int screenWidth = 1920;
    int screenHeight = 1080;
    
    InitWindow(screenWidth, screenHeight, "Program");

    Texture2D texture = LoadTexture("res/test.png");

    Font font = LoadFontEx("res/TitilliumWeb-Italic.ttf", 72, 0, 250);

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);

            DrawTexture(texture,
                        (int) (screenWidth / 2.0f - texture.width / 2.0f),
                        (int) (screenHeight / 2.0f - texture.height / 2.0f),
                        GREEN);

            DrawTextEx(font, "Hello, world", { 855, 170 }, (float)font.baseSize, 1, DARKGREEN);
        }
        EndDrawing();
    }

    UnloadTexture(texture);
    UnloadFont(font);

    CloseWindow();

    return 0;
}
