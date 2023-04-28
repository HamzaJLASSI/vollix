#ifndef ENIGME_H
#define ENIGME_H
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 1080
#define SCREEN_W 1920



 
typedef struct
{
char *url;
SDL_Rect pos_img_affiche[3]; 
SDL_Rect pos_img_ecran[3];
SDL_Surface *img;
int state;
}image;

SDL_Rect srcrect;
SDL_Rect dstrect;
typedef struct
{
int q;
char question[50];
char rep1[20];
char rep2[20];
char rep3[20];
char rep4[20];
char repc[20];
}engme;
typedef struct
{
SDL_Surface *txt;
SDL_Rect pos_txt;
SDL_Colour color_txt;
TTF_Font *police;
}texte;
typedef struct
{
SDL_Surface *txt1;
SDL_Rect pos_txt1;
SDL_Colour color_txt1;
TTF_Font *police;
}texte1;
typedef struct
{
SDL_Surface *txt2;
SDL_Rect pos_txt2;
SDL_Colour color_txt2;
TTF_Font *police;
}texte2;
typedef struct
{
SDL_Surface *txt3;
SDL_Rect pos_txt3;
SDL_Colour color_txt3;
TTF_Font *police;
}texte3;
typedef struct
{
SDL_Surface *txt4;
SDL_Rect pos_txt4;
SDL_Colour color_txt4;
TTF_Font *police;
}texte4; 
//image
void initialiser_imageBACK(image *imge) ;

void initialiser_imageBOUTON1 (image *imgbtn);
void initialiser_imageBOUTON2 (image *imgbtn);
void initialiser_imageBOUTON3(image *imgbtn);
void initialiser_imageBOUTON4(image *imgbtn);
void afficher_imageBMP(SDL_Surface *screen, image imge);
void afficher_imageBTN1(SDL_Surface *screen, image imge);
void afficher_imageBTN2(SDL_Surface *screen, image imge);
void afficher_imageBTN3(SDL_Surface *screen, image imge);
void afficher_imageBTN4(SDL_Surface *screen, image imge);
void liberer_image(image imge);

  

void initialiser_audio(Mix_Music *music);
void liberer_musique (Mix_Music *music);

void initialiser_audiobref (Mix_Chunk *mus);
void liberer_musiquebref (Mix_Chunk *mus);

void liberer_audiobref(Mix_Chunk *mus); 

void initialiser_texte(texte *txte);
void afficher_texte(SDL_Surface *screen, texte txte ,texte1 txtee, texte2 txtee2,texte3 txtee3,texte4 txtee4,engme e);
void Liberer_texte(texte txte);

void initialiser_texte1(texte1 *txtee);
void afficher_texte1(SDL_Surface *screen, texte1 txtee);
void Liberer_texte1(texte1 txtee);

void initialiser_texte2(texte2 *txtee2);
void initialiser_texte3(texte3 *txtee3);
void initialiser_texte4(texte4 *txtee4);

#endif
