#include <iostream>
#include <raylib.h>

#define SCREEN_H 750
#define SCREEN_W 750

using namespace std;

int main() {
  cout << "Starting the game..." << endl;
  InitWindow(SCREEN_H, SCREEN_W, "Retro Snake");

  while (WindowShouldClose() == false) {
    BeginDrawing();

    EndDrawing();
  }

  CloseWindow();
  return 0;
}
