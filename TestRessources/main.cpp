#include <iostream>
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include <string>
#include <cstring>
#include <QDebug>
#include <QString>

using namespace std;
#undef main

SDL_Event event;
SDL_Rect offset;

//Get offsets


SDL_Surface *image = NULL, *screen = NULL;

int main()
{

    offset.x = 0;
    offset.y = 0;

    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
            return false;

    //Set up the screen
    screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );

    //If there was an error in setting up the screen
    if( screen == NULL )
        return false;

    //Set the title
    SDL_WM_SetCaption( "TestRessources", NULL );

    // Create a surface from picture:
    image = IMG_Load(":/img/boxtest.png");

    if(image == NULL)
        qDebug() << IMG_GetError();

    SDL_BlitSurface( image, NULL, screen, &offset );

    //Update the screen
    if( SDL_Flip(screen) == -1 )
        return -1;

    //Free the surface and quit SDL
    SDL_FreeSurface( image );
    SDL_FreeSurface(screen);

    //Quit SDL
    SDL_Quit();



    return 0;
}

