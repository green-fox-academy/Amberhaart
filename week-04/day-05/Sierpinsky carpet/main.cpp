#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>


//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

void draw();

//The window we'll be rendering to
SDL_Window *gWindow = nullptr;

//The window renderer
SDL_Renderer *gRenderer = nullptr;

bool init() {
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Awesome", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == nullptr) {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr) {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    return true;
}

void close() {
    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

void draw(Sint16 x1, Sint16 y1, Sint16 side1, Sint16 side2, int depth) {
    if (depth == 5) {
        return;
    }
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0xFF);

    SDL_Rect fillRect = {x1, y1, side1, side2};

    draw(Sint16 (x1 + side1 + (side1 / 3)), Sint16 (y1 + (side1 / 3)), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 - 2 *(side1) / 3), Sint16 (y1 + (side2 / 3)), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 + side1 / 3), Sint16 (y1 + side2 + (side2 / 3)), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 + side1 / 3), Sint16 (y1 - 2 *(side2) / 3), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);

    draw(Sint16 (x1 + side1 + (side1 / 3)), Sint16 (y1 + side2 + (side2 / 3)), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 + side1 + (side1 / 3)), Sint16 (y1 - 2 *(side2) / 3), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 - 2 *(side1) / 3), Sint16 (y1 - 2 *(side2) / 3), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);
    draw(Sint16 (x1 - 2 *(side1) / 3), Sint16 (y1 + side2 + (side2 / 3)), Sint16 (side1 / 3), Sint16 (side2 / 3), depth +1);


    SDL_RenderFillRect(gRenderer, &fillRect);

}


int main(int argc, char *args[]) {
    //Start up SDL and create window
    if (!init()) {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0xFF);

        draw(SCREEN_WIDTH / 3, SCREEN_HEIGHT / 3 , SCREEN_WIDTH / 3, SCREEN_HEIGHT / 3, 0);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}