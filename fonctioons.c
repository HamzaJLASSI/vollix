#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "enigme.h"

void initialiser_imageBACK(image *imge) 
{
	imge->url="/home/hamza/Desktop/hamza/background.png";
	imge->img=IMG_Load(imge->url);

if (imge->img == NULL) {
printf ("unable to load background image %s \n",SDL_GetError());
return ;}
imge->pos_img_ecran[0].x=0;
imge->pos_img_ecran[0].y=0;
imge->pos_img_affiche[0].x=0;
imge->pos_img_affiche[0].y=0;
imge->pos_img_affiche[0].h=600;
imge->pos_img_affiche[0].w=1200;
}


void initialiser_imageBOUTON1(image *imgbtn)
{
imgbtn->url="/home/hamza/Desktop/enigme/341005677_537310065003030_9149078526244674224_n.png";
imgbtn->img=IMG_Load(imgbtn->url) ;
if(imgbtn->img == NULL){
printf("unable to load background image %s \n",SDL_GetError());
return ;}
//etat initial
imgbtn->pos_img_affiche[0].x=190;
imgbtn->pos_img_affiche[0].y=895;
	//pos image%background
imgbtn->pos_img_affiche[0].w=400;
imgbtn->pos_img_affiche[0].h=60;

imgbtn->pos_img_ecran[0].x=190;
imgbtn->pos_img_ecran[0].y=295;
imgbtn->pos_img_ecran[0].w=400;
imgbtn->pos_img_ecran[0].h=60;

//hover state
imgbtn->pos_img_affiche[1].x=189;
imgbtn->pos_img_affiche[1].y=295;
//pos image%background
imgbtn->pos_img_affiche[1].w=400;
imgbtn->pos_img_affiche[1].h=60;

imgbtn->pos_img_ecran[1].x=190;
imgbtn->pos_img_ecran[1].y=295;
imgbtn->pos_img_ecran[1].w=400;
imgbtn->pos_img_ecran[1].h=60;

imgbtn->pos_img_affiche[2].x=47;
imgbtn->pos_img_affiche[2].y=30;
//pos image%background
imgbtn->pos_img_affiche[2].w=240;
imgbtn->pos_img_affiche[2].h=180;
imgbtn->pos_img_ecran[2].x=47;
imgbtn->pos_img_ecran[2].y=30;
imgbtn->pos_img_ecran[2].w=240;
imgbtn->pos_img_ecran[2].h=180;
}

 

void initialiser_imageBOUTON2(image *imgbtn)
{
imgbtn->url="/home/hamza/Desktop/hamza/source.png";
imgbtn->img=IMG_Load(imgbtn->url) ;
if(imgbtn->img == NULL){
printf("unable to load background image %s \n",SDL_GetError());
return ;}

imgbtn->pos_img_affiche[0].x=590;
imgbtn->pos_img_affiche[0].y=895;
//pos image%background
imgbtn->pos_img_affiche[0].w=400;
imgbtn->pos_img_affiche[0].h=60;

imgbtn->pos_img_ecran[0].x=590;
imgbtn->pos_img_ecran[0].y=295;
imgbtn->pos_img_ecran[0].w=400;
imgbtn->pos_img_ecran[0].h=60;

//hover state
imgbtn->pos_img_affiche[1].x=590;
imgbtn->pos_img_affiche[1].y=295;
//pos image%background
imgbtn->pos_img_affiche[1].w=400;
imgbtn->pos_img_affiche[1].h=60;

imgbtn->pos_img_ecran[1].x=590;
imgbtn->pos_img_ecran[1].y=295;
imgbtn->pos_img_ecran[1].w=400;
imgbtn->pos_img_ecran[1].h=60;

imgbtn->pos_img_affiche[2].x=970;
imgbtn->pos_img_affiche[2].y=30;
//pos image%background
imgbtn->pos_img_affiche[2].w=240;
imgbtn->pos_img_affiche[2].h=180;
imgbtn->pos_img_ecran[2].x=970;
imgbtn->pos_img_ecran[2].y=30;
imgbtn->pos_img_ecran[2].w=220;
imgbtn->pos_img_ecran[2].h=190;

}
void initialiser_imageBOUTON3(image *imgbtn)
{
imgbtn->url="/home/hamza/Desktop/hamza/source.png";
imgbtn->img=IMG_Load(imgbtn->url) ;
if(imgbtn->img == NULL){
printf("unable to load background image %s \n",SDL_GetError());
return ;}
imgbtn->pos_img_affiche[0].x=190;
imgbtn->pos_img_affiche[0].y=995;
//pos image%background
imgbtn->pos_img_affiche[0].w=400;
imgbtn->pos_img_affiche[0].h=60;

imgbtn->pos_img_ecran[0].x=190;
imgbtn->pos_img_ecran[0].y=395;
imgbtn->pos_img_ecran[0].w=400;
imgbtn->pos_img_ecran[0].h=60;

//hover state
imgbtn->pos_img_affiche[1].x=180;
imgbtn->pos_img_affiche[1].y=400;
//pos image%background
imgbtn->pos_img_affiche[1].w=410;
imgbtn->pos_img_affiche[1].h=60;

imgbtn->pos_img_ecran[1].x=180;
imgbtn->pos_img_ecran[1].y=400;
imgbtn->pos_img_ecran[1].w=410;
imgbtn->pos_img_ecran[1].h=60;

imgbtn->pos_img_affiche[2].x=970;
imgbtn->pos_img_affiche[2].y=30;
//pos image%background
imgbtn->pos_img_affiche[2].w=240;
imgbtn->pos_img_affiche[2].h=180;
imgbtn->pos_img_ecran[2].x=970;
imgbtn->pos_img_ecran[2].y=30;
imgbtn->pos_img_ecran[2].w=220;
imgbtn->pos_img_ecran[2].h=190;

}
void initialiser_imageBOUTON4(image *imgbtn)
{
imgbtn->url="/home/hamza/Desktop/hamza/source.png";
imgbtn->img=IMG_Load(imgbtn->url) ;
if(imgbtn->img == NULL){
printf("unable to load background image %s \n",SDL_GetError());
return ;}

imgbtn->pos_img_affiche[0].x=590;
imgbtn->pos_img_affiche[0].y=995;
//pos image%background
imgbtn->pos_img_affiche[0].w=400;
imgbtn->pos_img_affiche[0].h=60;

imgbtn->pos_img_ecran[0].x=590;
imgbtn->pos_img_ecran[0].y=395;
imgbtn->pos_img_ecran[0].w=400;
imgbtn->pos_img_ecran[0].h=60;


//hover state
imgbtn->pos_img_affiche[1].x=590;
imgbtn->pos_img_affiche[1].y=390;
//pos image%background
imgbtn->pos_img_affiche[1].w=400;
imgbtn->pos_img_affiche[1].h=70;

imgbtn->pos_img_ecran[1].x=590;
imgbtn->pos_img_ecran[1].y=390;
imgbtn->pos_img_ecran[1].w=400;
imgbtn->pos_img_ecran[1].h=70;


imgbtn->pos_img_affiche[2].x=970;
imgbtn->pos_img_affiche[2].y=30;
//pos image%background
imgbtn->pos_img_affiche[2].w=240;
imgbtn->pos_img_affiche[2].h=180;
imgbtn->pos_img_ecran[2].x=970;
imgbtn->pos_img_ecran[2].y=30;
imgbtn->pos_img_ecran[2].w=220;
imgbtn->pos_img_ecran[2].h=190;

}

void afficher_imageBMP(SDL_Surface *screen,image imge)
{
imge.state=0;
SDL_BlitSurface(imge.img, &(imge.pos_img_affiche[0]), screen, &(imge.pos_img_ecran[0])) ;
}







void afficher_imageBTN1(SDL_Surface *screen, image imge)
{

SDL_BlitSurface(imge.img,&imge.pos_img_affiche[imge.state], screen,&imge.pos_img_ecran[imge.state] ) ;
}


void afficher_imageBTN2(SDL_Surface *screen, image imge)
{

SDL_BlitSurface(imge.img,&imge.pos_img_affiche[imge.state], screen,&imge.pos_img_ecran[imge.state]) ;
}

void afficher_imageBTN3(SDL_Surface *screen, image imge)
{

SDL_BlitSurface(imge.img,&imge.pos_img_affiche[imge.state], screen,&imge.pos_img_ecran[imge.state]) ;
}

void afficher_imageBTN4(SDL_Surface *screen, image imge)
{

SDL_BlitSurface(imge.img,&imge.pos_img_affiche[imge.state], screen,&imge.pos_img_ecran[imge.state]) ;
}








void liberer_image(image imge)
{
SDL_FreeSurface(imge.img);
}


void initialiser_audio(Mix_Music *music)
{
if(Mix_OpenAudio (44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024)==-1){
printf("%s",SDL_GetError());
}   

music=Mix_LoadMUS("/home/hamza/Desktop/hamza/File Select - The Legend of Zelda Ocarina of Time OST  Remastered.mp3");
Mix_PlayMusic(music,-1);
Mix_VolumeMusic(100);
}

void liberer_musique(Mix_Music *music)
{
Mix_FreeMusic(music);
}


void initialiser_audiobref(Mix_Chunk *mus)
{
	Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT, 2, 2048);
	mus=Mix_LoadWAV("/home/hamza/Desktop/fff/mixkit-arcade-game-jump-coin-216.wav");
	Mix_PlayChannel (-1,mus,0);
	if (mus == NULL) printf("%s", SDL_GetError());
}
void liberer_audiobref(Mix_Chunk *mus)
{
	Mix_FreeChunk(mus);
}


void initialiser_texte(texte *txte)
{
TTF_Init();
txte->police=TTF_OpenFont("/home/hamza/Desktop/hamza/KHMenu.otf",40);
txte->color_txt.r=0;
txte->color_txt.g=0;
txte->color_txt.b=0;
txte->pos_txt.x=285;
txte->pos_txt.y=185;
}

void Liberer_texte (texte txte)
{
TTF_CloseFont(txte.police);
 
}

void initialiser_texte1(texte1 *txtee)
{
TTF_Init();
txtee->police=TTF_OpenFont("/home/hamza/Desktop/hamza/KHMenu.otf",25);
txtee->color_txt1.r=0;
txtee->color_txt1.g=0;
txtee->color_txt1.b=0;
txtee->pos_txt1.x=300;
txtee->pos_txt1.y=305;
}

void afficher_texte1(SDL_Surface *screen, texte1 txtee)
{
txtee.txt1=TTF_RenderText_Blended(txtee.police,"6 Players",txtee.color_txt1);
SDL_BlitSurface(txtee.txt1, NULL, screen, &txtee.pos_txt1);
}

void Liberer_texte1 (texte1 txtee)
{
TTF_CloseFont(txtee.police);

}

void initialiser_texte2(texte2 *txtee2)
{
TTF_Init();
txtee2->police=TTF_OpenFont("/home/hamza/Desktop/hamza/KHMenu.otf",25);
txtee2->color_txt2.r=0;
txtee2->color_txt2.g=0;
txtee2->color_txt2.b=0;
txtee2->pos_txt2.x=700;
txtee2->pos_txt2.y=305;
}

void afficher_texte2(SDL_Surface *screen, texte2 txtee2)
{
txtee2.txt2=TTF_RenderText_Blended(txtee2.police,"7 Players",txtee2.color_txt2);
SDL_BlitSurface(txtee2.txt2, NULL, screen, &txtee2.pos_txt2);

}

void Liberer_texte2 (texte2 txtee2)
{
TTF_CloseFont(txtee2.police);
}

void initialiser_texte3(texte3 *txtee3)
{
TTF_Init();
txtee3->police=TTF_OpenFont("/home/hamza/Desktop/hamza/KHMenu.otf",25);
txtee3->color_txt3.r=0;
txtee3->color_txt3.g=0;
txtee3->color_txt3.b=0;
txtee3->pos_txt3.x=300;
txtee3->pos_txt3.y=410;
}

void Liberer_texte3 (texte3 txtee3)
{
TTF_CloseFont(txtee3.police);

}

void initialiser_texte4(texte4 *txtee4)
{
TTF_Init();
txtee4->police=TTF_OpenFont("/home/hamza/Desktop/hamza/KHMenu.otf",25);
txtee4->color_txt4.r=0;
txtee4->color_txt4.g=0;
txtee4->color_txt4.b=0;
txtee4->pos_txt4.x=700;
txtee4->pos_txt4.y=410;
}

void Liberer_texte4 (texte4 txtee4)
{
TTF_CloseFont(txtee4.police);
}

void afficher_texte(SDL_Surface *screen, texte txte ,texte1 txtee, texte2 txtee2,texte3 txtee3,texte4 txtee4,engme e)
{
FILE *f;
f=fopen("enigme.txt","r");
while(!feof(f))
{
	fscanf(f,"%d %s %s %s %s %s %s\n",&e.q,e.question,e.rep1,e.rep2,e.rep3,e.rep4,e.repc);
	printf("%d %s %s %s %s %s %s\n",e.q,e.question,e.rep1,e.rep2,e.rep3,e.rep4,e.repc);
}
txte.txt=TTF_RenderText_Blended(txte.police,e.question,txte.color_txt);
SDL_BlitSurface(txte.txt, NULL, screen, &txte.pos_txt);

txtee.txt1=TTF_RenderText_Blended(txtee.police,e.rep1,txtee.color_txt1);
SDL_BlitSurface(txtee.txt1, NULL, screen, &txtee.pos_txt1);

txtee2.txt2=TTF_RenderText_Blended(txtee2.police,e.rep2,txtee2.color_txt2);
SDL_BlitSurface(txtee2.txt2, NULL, screen, &txtee2.pos_txt2);
 
txtee3.txt3=TTF_RenderText_Blended(txtee3.police,e.rep3,txtee3.color_txt3);
SDL_BlitSurface(txtee3.txt3, NULL, screen, &txtee3.pos_txt3);
 
txtee4.txt4=TTF_RenderText_Blended(txtee4.police,e.rep4,txtee4.color_txt4);
SDL_BlitSurface(txtee4.txt4, NULL, screen, &txtee4.pos_txt4);
 
}
/*void refresh()
{afficher_imageBMP(screen,IMAGE);}*/
