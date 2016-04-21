#include <iostream>
#include "SDL2/SDL.h" /* This one can't be found */

using namespace std;

int main(int argc, char *argv[] ){
    SDL_Init( SDL_INIT_EVERYTHING );

    SDL_Window *window;

    window = SDL_CreateWindow("KEY MASTER", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 400, 400, SDL_WINDOW_RESIZABLE );

    SDL_Delay(5000);

    if ( window == NULL){

        cout << "Problem with window" << SDL_GetError() <<  endl;

    }

    SDL_Event event;
    bool running = true;

    while (running) {

        while (SDL_PollEvent(&event)){

            if(event.type == SDL_QUIT)

                running = false;
                break;

        }



    }





    cout << "ending program" << endl;

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}