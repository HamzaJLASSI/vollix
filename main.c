#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL.h>
#include<SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "enigme.h"

int main()
{
SDL_Surface *screen;
image IMAGE, IMAGE_BTN1, IMAGE_BTN2,IMAGE_BTN3,IMAGE_BTN4;
Mix_Music *music;
Mix_Chunk * mus;
texte txte;
texte1 txtee;
texte2 txtee2;
texte3 txtee3;
texte4 txtee4;
engme e;
SDL_Event event;
int boucle=1;
int k=0;
int isfullscreen=0;
int backganim=1;
char backgname[25];
  
if (SDL_Init (SDL_INIT_VIDEO| SDL_INIT_AUDIO|SDL_INIT_TIMER)==1)

{
printf("Could not initialize SDL: %s.\n", SDL_GetError());
return -1;
}

screen=SDL_SetVideoMode(1200,601 , 32,SDL_SWSURFACE|SDL_DOUBLEBUF);
SDL_WM_SetCaption("GAME", NULL);


initialiser_imageBACK(&IMAGE);
initialiser_imageBOUTON1(&IMAGE_BTN1);
initialiser_imageBOUTON2(&IMAGE_BTN2);
initialiser_imageBOUTON3(&IMAGE_BTN3);
initialiser_imageBOUTON4(&IMAGE_BTN4);
initialiser_audio(music);
initialiser_texte(&txte);
initialiser_texte1(&txtee);
initialiser_texte2(&txtee2);
initialiser_texte3(&txtee3);
initialiser_texte4(&txtee4);

while(boucle)
{

IMAGE_BTN1.state=0;
IMAGE_BTN2.state=0;
IMAGE_BTN3.state=0;
IMAGE_BTN4.state=0;
afficher_imageBMP(screen,IMAGE);
afficher_imageBTN1(screen,IMAGE_BTN1);
afficher_imageBTN2(screen,IMAGE_BTN2);
afficher_imageBTN3(screen,IMAGE_BTN3);
afficher_imageBTN4(screen,IMAGE_BTN4);
afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
int x, y;
SDL_GetMouseState(&x, &y);
 

if(y<=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].y+50 && y>=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].y &&( x<=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].x+590&& x>=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].x)) 

{IMAGE_BTN1.state=1;
//initialiser_audiobref(mus);
//(SDL_PointInRect(&(m.b), &(IMAGE_BTN1.pos_img_ecran[0]));
SDL_FreeSurface(screen);

afficher_imageBMP(screen,IMAGE);
afficher_imageBTN2(screen,IMAGE_BTN2);
afficher_imageBTN3(screen,IMAGE_BTN3);
afficher_imageBTN4(screen,IMAGE_BTN4);
afficher_imageBTN1(screen,IMAGE_BTN1);
afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
}








else if(y<=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].y+50 && y>=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].y+10 &&( x<=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].x+590 && x>=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].x))
{IMAGE_BTN2.state=1;


afficher_imageBMP(screen,IMAGE);
afficher_imageBTN2(screen,IMAGE_BTN2);
afficher_imageBTN3(screen,IMAGE_BTN3);
afficher_imageBTN4(screen,IMAGE_BTN4);
afficher_imageBTN1(screen,IMAGE_BTN1);
afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
}


else if(y<=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].y+50 && y>=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].y+10 &&( x<=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].x+590 && x>=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].x))
{IMAGE_BTN3.state=1;


afficher_imageBMP(screen,IMAGE);
afficher_imageBTN2(screen,IMAGE_BTN2);
afficher_imageBTN3(screen,IMAGE_BTN3);
afficher_imageBTN4(screen,IMAGE_BTN4);
afficher_imageBTN1(screen,IMAGE_BTN1);
afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
}


else if(y<=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].y+50 && y>=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].y+10 &&( x<=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].x+590&& x>=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].x))
{IMAGE_BTN4.state=1;


afficher_imageBMP(screen,IMAGE);
afficher_imageBTN2(screen,IMAGE_BTN2);
afficher_imageBTN3(screen,IMAGE_BTN3);
afficher_imageBTN4(screen,IMAGE_BTN4);
afficher_imageBTN1(screen,IMAGE_BTN1);
afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
}




while(SDL_PollEvent(&event))
{
	switch(event.type)
	{
		case SDL_QUIT:
		boucle=0;
		break;
		case SDL_KEYDOWN:
			switch(event.key.keysym.sym)
			{/*
				case SDLK_d:
				switch(k)
				{
				case 0:IMAGE_BTN1.state=2;
				break;
				case 1:IMAGE_BTN2.state=2;
				break;
				case 2:IMAGE_BTN3.state=2;
				break;
				case 3:IMAGE_BTN4.state=2;
				}
				initialiser_audiobref(mus);
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte);
				afficher_texte1(screen,txtee);
afficher_texte2(screen,txtee2);
afficher_texte3(screen,txtee3);
afficher_texte4(screen,txtee4);
				SDL_Delay(5);
				break;
				
				case SDLK_q:
				IMAGE_BTN4.state=2;
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte);
				afficher_texte1(screen,txtee);
afficher_texte2(screen,txtee2);
afficher_texte3(screen,txtee3);
afficher_texte4(screen,txtee4);
				initialiser_audiobref(mus);
				boucle=0;
				break;
				case SDLK_p:
				IMAGE_BTN1.state=1;
				initialiser_audiobref(mus);
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN1(screen,IMAGE_BTN1);
				IMAGE_BTN1.state=2;
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte);
				afficher_texte1(screen,txtee);
afficher_texte2(screen,txtee2);
afficher_texte3(screen,txtee3);
afficher_texte4(screen,txtee4);
				break;
				case SDLK_o:
				IMAGE_BTN2.state=2;
				initialiser_audiobref(mus);
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte);
				afficher_texte1(screen,txtee);
afficher_texte2(screen,txtee2);
afficher_texte3(screen,txtee3);
afficher_texte4(screen,txtee4);
				break;
*/
				case SDLK_DOWN:
				k++;
				if(k<0)
				k=3;
				if(k>3)
				k=0;
				switch(k)
				{
				case 0:IMAGE_BTN1.state=1;
				break;
				case 1:IMAGE_BTN2.state=1;
				break;
				case 2:IMAGE_BTN3.state=1;
				break;
				case 3:IMAGE_BTN4.state=1;
				break;
				}
				initialiser_audiobref(mus);
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
				break;
				case SDLK_UP:
				k--;
				if(k<0)
				k=3;
				if(k>3)
				k=0;
				switch(k)
				{
				case 0:IMAGE_BTN1.state=1;
				break;
				case 1:IMAGE_BTN2.state=1;
				break;
				case 2:IMAGE_BTN3.state=1;
				break;
				case 3:IMAGE_BTN4.state=1;
				break;
				}
				initialiser_audiobref(mus);
				afficher_imageBMP(screen,IMAGE);
				afficher_imageBTN2(screen,IMAGE_BTN2);
				afficher_imageBTN3(screen,IMAGE_BTN3);
				afficher_imageBTN4(screen,IMAGE_BTN4);
				afficher_imageBTN1(screen,IMAGE_BTN1);
				afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
				break;;
				
	
			}



		case SDL_MOUSEBUTTONDOWN:
		if((event.button.button==SDL_BUTTON_LEFT)&&(event.button.y<=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].y+50 && event.button.y>=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].y+10 &&( event.button.x<=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].x+590&&
event.button.x>=IMAGE_BTN1.pos_img_ecran[IMAGE_BTN1.state].x)))
		
		{
		IMAGE_BTN1.state=2;
		afficher_imageBMP(screen,IMAGE);
		afficher_imageBTN2(screen,IMAGE_BTN2);
		afficher_imageBTN3(screen,IMAGE_BTN3);
		afficher_imageBTN4(screen,IMAGE_BTN4);
		afficher_imageBTN1(screen,IMAGE_BTN1);
		afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
		initialiser_audiobref(mus);
		}
				else if((event.button.button==SDL_BUTTON_LEFT)&&(event.button.y<=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].y+50 && 		event.button.y>=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].y+10 &&( event.button.x<=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].x+590&& event.button.x>=IMAGE_BTN2.pos_img_ecran[IMAGE_BTN2.state].x)))
		
		{
		IMAGE_BTN2.state=2;
		afficher_imageBMP(screen,IMAGE);
		afficher_imageBTN2(screen,IMAGE_BTN2);
		afficher_imageBTN3(screen,IMAGE_BTN3);
		afficher_imageBTN4(screen,IMAGE_BTN4);
		afficher_imageBTN1(screen,IMAGE_BTN1);
		afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
		initialiser_audiobref(mus);
		}
						else if((event.button.button==SDL_BUTTON_LEFT)&&(event.button.y<=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].y+50 && 		event.button.y>=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].y+10 &&( event.button.x<=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].x+590&& event.button.x>=IMAGE_BTN3.pos_img_ecran[IMAGE_BTN3.state].x)))
		
		{
		IMAGE_BTN3.state=2;
		afficher_imageBMP(screen,IMAGE);
		afficher_imageBTN2(screen,IMAGE_BTN2);
		afficher_imageBTN3(screen,IMAGE_BTN3);
		afficher_imageBTN4(screen,IMAGE_BTN4);
		afficher_imageBTN1(screen,IMAGE_BTN1);
		afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
		initialiser_audiobref(mus);
		}
						else if((event.button.button==SDL_BUTTON_LEFT)&&(event.button.y<=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].y+50 && 		event.button.y>=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].y+10 &&( event.button.x<=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].x+590&& event.button.x>=IMAGE_BTN4.pos_img_ecran[IMAGE_BTN4.state].x)))
		
		{
		IMAGE_BTN4.state=2;
		afficher_imageBMP(screen,IMAGE);
		afficher_imageBTN4(screen,IMAGE_BTN4);
		afficher_imageBTN2(screen,IMAGE_BTN2);
		afficher_imageBTN3(screen,IMAGE_BTN3);
		
		afficher_imageBTN1(screen,IMAGE_BTN1);
		afficher_texte(screen,txte ,txtee,txtee2,txtee3,txtee4,e);
		initialiser_audiobref(mus);
		
		}
		break;


}
SDL_Flip(screen);
}
}

liberer_image(IMAGE);
liberer_image(IMAGE_BTN1);
liberer_image(IMAGE_BTN2);
liberer_musique(music);
//liberer_musiquebref(mus);
/*Liberer_texte(txte);
Liberer_texte1(txtee);
Liberer_texte2(txtee2);
Liberer_texte3(txtee3);
Liberer_texte4(txtee4);*/
TTF_Quit();
SDL_Quit();
return 0;
}
