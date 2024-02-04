#include <SDL2/SDL.h>

int main() {
    // Inicializar a SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erro ao inicializar a SDL: %s\n", SDL_GetError());
        return 1;
    }

    // Criar uma janela
    SDL_Window* janela = SDL_CreateWindow("Meu Jogo", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (janela == NULL) {
        printf("Erro ao criar a janela: %s\n", SDL_GetError());
        return 1;
    }

    // Loop principal do jogo
    SDL_Event evento;
    int rodando = 1;
    while (rodando) {
        // Processar eventos
        while (SDL_PollEvent(&evento) != 0) {
            if (evento.type == SDL_QUIT) {
                rodando = 0;
            }
        }
    }

    // Limpar e fechar a SDL
    SDL_DestroyWindow(janela);
    SDL_Quit();

    return 0;
}
