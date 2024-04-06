#include <SDL2/SDL.h>
#include <chrono>
#include <thread>

void pressKey(SDL_Scancode key) {
    SDL_Event event;
    event.type = SDL_KEYDOWN;
    event.key.keysym.scancode = key;
    SDL_PushEvent(&event);
    event.type = SDL_KEYUP;
    SDL_PushEvent(&event);
}

int main() {
    // Inicializar SDL
    SDL_Init(SDL_INIT_EVENTS);

    // Esperar por 10 segundos
    std::this_thread::sleep_for(std::chrono::seconds(10));

    // Loop infinito
    while (true) {
        // Simular pressionamentos de teclas
        pressKey(SDL_SCANCODE_1);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        pressKey(SDL_SCANCODE_2);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        pressKey(SDL_SCANCODE_3);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        pressKey(SDL_SCANCODE_4);
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Simular pressionamentos de tecla 'Ctrl'
        for (int i = 0; i < 28; i++) {
            pressKey(SDL_SCANCODE_LCTRL);
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    // Fechar SDL
    SDL_Quit();

    return 0;
}
