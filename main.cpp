#include <iostream>
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL2_gfx.h>
#include <SDL2/SDL_mixer.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>







using namespace std;
void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L,double theta,int widht, int R, int G, int B );
void texture(SDL_Renderer *m_renderer,int xp,int yp,string addressOfImage,int width,int height);
void top(SDL_Renderer *m_renderer,int x_top,int y_top,int r_top,int rang_top);
void betterText(SDL_Renderer *renderer, string S,int x, int y,int r, int g, int b, int a,int size, string Font /*def = arial */);
void srt(int a[],int n);



struct ball{
    int x=100;
    int y=100;
    bool vojod=true;
    int rang;
    int x2=100;
    int y2=100;

};
int main( int argc, char * argv[] )
{
//*******************************************************************************************************
 SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048);
    Mix_Chunk *backgroundSound1 = Mix_LoadWAV("zakwk.wav");
    Mix_Chunk *backgroundSound2 = Mix_LoadWAV("zakwk1.wav");
    Mix_Chunk *backgroundSound3 = Mix_LoadWAV("zakwk2.wav");
    Mix_Chunk *backgroundSound4 = Mix_LoadWAV("Bisk.wav");



    Mix_Chunk *ter = Mix_LoadWAV("ter.wav");
    Mix_Chunk *tir2 = Mix_LoadWAV("tir2.wav");

int W = 700;//ertefa safhe
    int L = 1280;//tool safhe
srand(time(NULL));
      // be ina kari nadashte bashid

    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    //Pass the focus to the drawing window
    SDL_RaiseWindow(m_window);
    //Get screen res olution
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);





        SDL_Texture *myTexture;
        myTexture = IMG_LoadTexture( m_renderer, "menou4.PNG");
        int w1, h1;
        SDL_QueryTexture(myTexture, NULL, NULL, &w1, &h1);
        SDL_Rect texr1;
        texr1.x = 0;
        texr1.y = 0;
        texr1.w =1280;
        texr1.h = 800;



        SDL_Texture *myTexture1;
        myTexture1 = IMG_LoadTexture( m_renderer, "menou5.jpg");
        int w11, h11;
        SDL_QueryTexture(myTexture1, NULL, NULL, &w11, &h11);
        SDL_Rect texr11;
        texr11.x = 0;
        texr11.y = 0;
        texr11.w =1280;
        texr11.h = 800;


        SDL_Texture *myTexture6;
        myTexture6 = IMG_LoadTexture( m_renderer, "pit1.png");
        int w16, h16;
        SDL_QueryTexture(myTexture6, NULL, NULL, &w16, &h16);
        SDL_Rect texr16;
        texr16.x = 175;
        texr16.y = 575;
        texr16.w =50;
        texr16.h = 50;


         SDL_Texture *myTexture2;
        myTexture2 = IMG_LoadTexture( m_renderer, "menou2.png");
        int w12, h12;
        SDL_QueryTexture(myTexture2, NULL, NULL, &w12, &h12);
        SDL_Rect texr12;
        texr12.x = 0;
        texr12.y = 0;
        texr12.w =1280;
        texr12.h = 800;



         SDL_Texture *myTexture7;
        myTexture7 = IMG_LoadTexture( m_renderer, "pit2.png");
        int w17, h17;
        SDL_QueryTexture(myTexture7, NULL, NULL, &w17, &h17);
        SDL_Rect texr17;
        texr17.x = 175;
        texr17.y = 75;
        texr17.w =50;
        texr17.h = 50;




         SDL_Texture *myTexture5;
        myTexture5 = IMG_LoadTexture( m_renderer, "login9.png");
        int w15, h15;
        SDL_QueryTexture(myTexture5, NULL, NULL, &w15, &h15);
        SDL_Rect texr15;
        texr15.x = 0;
        texr15.y = 0;
        texr15.w =1280;
        texr15.h = 700;








          SDL_Texture *myTexture4;
        myTexture4 = IMG_LoadTexture( m_renderer, "menou6.png");
        int w14, h14;
        SDL_QueryTexture(myTexture4, NULL, NULL, &w14, &h14);
        SDL_Rect texr14;
        texr14.x = 0;
        texr14.y = 0;
        texr14.w =1280;
        texr14.h = 800;





    Mix_PlayChannel(1,backgroundSound1,5);










    // be ina kari nadashte bashid
//*********************************************************************************************************
int r_b=20,x_b=100,y_b=100,r,g,b,p=1,k=0,u[100],v=1,x_l=600,y_l=350,flag=0,i=0,j=0,r_sh=rand()%4,r_sh2=rand()%4,m_top=50,vo=0,wq=1,temp=0,tte=1,wa=1,flo=1,music=0;
int sound=0,sc=0,sco=0,musics=0;
double step=0.1,teta=0.3,x_m=10,y_m=10,x_k,y_k,beta, y_t,x_t ;
bool key =false,key2=0,start=false, mapp=0,ranking=0,setting=0, jj=0, namk=0, mood=0,time=1;
ball rh[100];
char *n1;
char *n15;
string s_s="0",ramz;
string s;
string Font="arial";
float seconds=0;
string tim;
float time_score=150;

  SDL_Texture *myTexture3;
        myTexture3 = IMG_LoadTexture( m_renderer, "cannon1.png");
        int w13, h13;
        SDL_QueryTexture(myTexture3, NULL, NULL, &w13, &h13);
        SDL_Rect texr13;
        texr13.x = x_l-100;
        texr13.y = y_l-141;
        texr13.w =200;
        texr13.h = 283;

while (1){
        SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
SDL_RenderCopy( m_renderer, myTexture2, NULL, &texr12);

SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEBUTTONDOWN){


        if (e.button.x >430 && e.button.x< 770 && e.button.y >600 && e.button.y <700)
        {
               mood=1;

        }


        if (e.button.x >430 && e.button.x< 770 && e.button.y >0 && e.button.y <190)
         {
             start=1;
//             while (start)
//{
//
//
//SDL_RenderCopy( m_renderer, myTexture5, NULL, &texr15);
//SDL_RenderPresent(m_renderer);
//SDL_Event e;
//SDL_PollEvent(&e);
//if (e.type== SDL_MOUSEBUTTONDOWN){
//        //................................................................................................register
//        if (e.button.x >0 && e.button.x< 580 && e.button.y >100 && e.button.y <350)
//         {
//
//          string es="";
//          SDL_Event er;
//          SDL_StartTextInput();
//          bool typing=1;
//          while (typing)
//          {
//              while (SDL_PollEvent(&er))
//              {
//                 if (er.type== SDL_KEYDOWN)
//                 {
//                     if (er.key.keysym.sym==SDLK_RETURN)
//                     {
//
//                         typing=0;
//
//                         fstream ff("register.txt");
//
//                         bool ch=0;
//                         while (ff.good()){
//                            string j1,j2,j3;
//                            ff>>j1;
//                            ff>>j2;
//                            ff>>j3;
//                            if (j1==es)
//                            {
//                                ch=1;
//                                namk=1;
//                            }
//
//                         }
//
//                         if (!ch){
//
//                            n1= new char [es.length()+1];
//                            strcpy(n1,es.c_str());
//                            ofstream ofu("register.txt",ios::app);
//                            ofu<<es<<endl;
//                         }
//
//
//                         }
//
//                  else     {es+=char(er.key.keysym.sym);
//                  char *c1= new char [es.length()+1];
//                  strcpy(c1,es.c_str());
//                  textRGBA(m_renderer,700,350,c1,2,40,255,255,255,255);
//                  }
//
//                           }
//                 }
//              }
//               es="";
//          SDL_Event er1;
//          SDL_StartTextInput();
//           typing=1;
//          while (typing)
//          {
//              while (SDL_PollEvent(&er1))
//              {
//                 if (er1.type== SDL_KEYDOWN)
//                 {
//                     if (er1.key.keysym.sym==SDLK_RETURN)
//                     {
//
//                         typing=0;
//                         fstream ff("register.txt");
//
//                         bool ch=0;
//                         while (ff.good()){
//                            string j1,j2;
//                            ff>>j1;
//                            ff>>j2;
//
//                         }
//
//                         if (!ch && !namk){
//
//                            n1= new char [es.length()+1];
//                            strcpy(n1,es.c_str());
//                            ofstream ofu("register.txt",ios::app);
//                            ofu<<es<<endl;
//                         }
//
//
//                         }
//
//                  else     {es+=char(er1.key.keysym.sym);
//                  char *c1= new char [es.length()+1];
//                  strcpy(c1,es.c_str());
//                  textRGBA(m_renderer,700,475,c1,2,40,255,255,255,255);
//                  if (!namk)
//                  textRGBA(m_renderer,1050,475,"true",2,40,127,255,0,255);
//                  }
//
//                           }
//                 }
//              }
//              if (namk)
//                {
//                typing=1;
//                namk=0;
//                continue;}
//              else
//              break;
//          }
////...........................................................login
//if (e.button.x >590 && e.button.x< 1280 && e.button.y >100 && e.button.y <350)
//         {
//
//          string es="";
//          SDL_Event er;
//          SDL_StartTextInput();
//          bool typing=1;
//          while (typing)
//          {
//              while (SDL_PollEvent(&er))
//              {
//                 if (er.type== SDL_KEYDOWN)
//                 {
//                     if (er.key.keysym.sym==SDLK_RETURN)
//                     {
//
//                         typing=0;
//                         fstream ffp("register.txt");
//
//                         bool ch=0;
//                         while (ffp.good()){
//                            string j1,j2,j3;
//                            ffp>>j1;
//                            ffp>>j2;
//                            ffp>>j3;
//                            if (j1==es)
//                            {
//                                ch=1;
//                                ramz=j2;
//
//
//
//
//
//                            }
//                         }
//
//                         if (!ch){
//
//                            n1= new char [es.length()+1];
//                            strcpy(n1,es.c_str());
//
//                         }
//
//
//                         }
//
//                  else     {es+=char(er.key.keysym.sym);
//                  char *c1= new char [es.length()+1];
//                  strcpy(c1,es.c_str());
//                  textRGBA(m_renderer,700,350,c1,2,40,255,255,255,255);
//                  }
//
//                           }
//                 }
//              }
//          es="";
//          SDL_Event er1;
//          SDL_StartTextInput();
//           typing=1;
//          while (typing)
//          {
//              while (SDL_PollEvent(&er1))
//              {
//                 if (er1.type== SDL_KEYDOWN)
//                 {
//                     if (er1.key.keysym.sym==SDLK_RETURN)
//                     {
//
//                         typing=0;
//
//
//                         bool ch=0;
//
//
//                         if (!ch){
//
//                            n1= new char [es.length()+1];
//                            strcpy(n1,es.c_str());
//
//                         }
//
//
//                         }
//
//                  else     {es+=char(er1.key.keysym.sym);
//                  char *c1= new char [es.length()+1];
//                  strcpy(c1,es.c_str());
//                  textRGBA(m_renderer,700,475,c1,2,40,255,255,255,255);
//                  if (ramz==es)
//                    textRGBA(m_renderer,1050,475,"true",2,40,127,255,0,255);
//                  }
//
//                           }
//                 }
//              }
//              if (ramz==es)
//              {
//
//              break;
//              }
//              else
//                continue;
//          }
//          //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//
//
//
//
//
//
//
//
//}
//
//
//}


             break;
         }

          if (e.button.x >450 && e.button.x< 745 && e.button.y >215 && e.button.y <270)
         {
             mapp=1;
////             while (1)
////             {
//////SDL_RenderClear(m_renderer);
//// SDL_RenderCopy( m_renderer, myTexture5, NULL, &texr15);
//// SDL_RenderPresent(m_renderer);
////SDL_Event e8;
////SDL_PollEvent(&e8);
////
////if (e8.type== SDL_MOUSEBUTTONDOWN){
////   if (e8.button.x >0 && e8.button.x< 100 && e8.button.y >0 && e8.button.y <100)
////         {
////          break;
////         // mapp=0;
////
////         }
////
////             }
////             break;
////         }
         }
                 if (e.button.x >380 && e.button.x< 830 && e.button.y >350 && e.button.y <400)
         {
             ranking=1;
             while(ranking)
//             {
//                SDL_RenderCopy( m_renderer, myTexture1, NULL, &texr11);
//                SDL_RenderPresent(m_renderer);
//                string yyy,yyyy,yyyyy;
//                int x_ra=500,y_ra=500;
//                fstream ff("register.text");
//                ff>>yyy;
//
//    const int length = yyy.length();
//    char* char_array = new char[length + 1];
//    strcpy(char_array, yyy.c_str());
//    for (int i = 0; i < length; i++)
//    {
//         textRGBA(m_renderer,700,350,&char_array[i],2,40,255,255,255,255);
//    }
//    delete[] char_array;
//
//
//
//             }
             break;
         }
                 if (e.button.x >380 && e.button.x< 830 && e.button.y >400 && e.button.y <500)
         {
             setting=1;

             break;




         }
                  if (e.button.x >450 && e.button.x< 750 && e.button.y >500 && e.button.y <600)
         {

SDL_DestroyWindow( m_window );
SDL_DestroyRenderer( m_renderer );
SDL_Quit();
return 0;
break;
         }



}


}
 while (setting){
          SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
 SDL_RenderCopy( m_renderer, myTexture1, NULL, &texr11);
 SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);

if (e.type== SDL_MOUSEBUTTONDOWN){
   if (e.button.x >460 && e.button.x< 820 && e.button.y >170 && e.button.y <235)
         {
            sound++;
            sound=sound%2;
         }
 if (e.button.x >460 && e.button.x< 820 && e.button.y >255 && e.button.y <320)
         {
            music++;
            music=music%4;
  if(music==0)
            {

                Mix_PlayChannel(1,backgroundSound1,10);
            }
            if(music==1)
            {
                Mix_PlayChannel(1,backgroundSound2,10);
            }
            if(music==2)
            {
                Mix_PlayChannel(1,backgroundSound3,10);
            }
            if(music==3)
            {

                Mix_PlayChannel(1,backgroundSound4,15);

            }

         }

   if (e.button.x >460 && e.button.x< 820 && e.button.y >400 && e.button.y <500)
         {
           setting=0;
           while (1){
                  SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
SDL_RenderCopy( m_renderer, myTexture2, NULL, &texr12);

SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEBUTTONDOWN){
        if (e.button.x >430 && e.button.x< 770 && e.button.y >150 && e.button.y <190)
         {
             start=1;
             break;
         }
          if (e.button.x >450 && e.button.x< 745 && e.button.y >215 && e.button.y <270)
         {
             mapp=1;
             break;
         }
                 if (e.button.x >380 && e.button.x< 830 && e.button.y >350 && e.button.y <400)
         {
             ranking=1;
             break;
         }
                 if (e.button.x >380 && e.button.x< 830 && e.button.y >400 && e.button.y <500)
         {
             setting=1;
             break;




         }
                  if (e.button.x >450 && e.button.x< 750 && e.button.y >500 && e.button.y <510)
         {
SDL_DestroyWindow( m_window );
SDL_DestroyRenderer( m_renderer );
SDL_Quit();
return 0;

break;

         }



}


}
         //  break;

         }
if (e.button.x >460 && e.button.x< 820 && e.button.y >350 && e.button.y <400)
         {
             while(1){
                      SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
SDL_RenderCopy( m_renderer, myTexture4, NULL, &texr14);
SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEBUTTONDOWN)
    {
      if (e.button.x >0 && e.button.x< 1200 && e.button.y >500 && e.button.y <800)
            break;
    }
}



         }
}


}




for(int t=1;t<=m_top;t++)
{
   rh[t].rang=rand()%4;
   rh[t].x=100;
   rh[t].y=100;
}

while (start)
{
      SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
    SDL_RenderCopy( m_renderer, myTexture5, NULL, &texr15);

SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEBUTTONDOWN){
        if (e.button.x >430 && e.button.x< 770 && e.button.y >0 && e.button.y <500)
         {
             start=1;
             break;
         }
}
}


while (1 && start )

        {
            while(i<=5000)
          {


             rect(m_renderer,0,0,L,W, 255,255,255,1);

            if(seconds<40){
            betterText(m_renderer,tim,265,350,0,0,0,255,20,Font);}
            else {
                betterText(m_renderer,"40.000000",265,350,0,0,0,255,20,Font);
            }

            rectangleRGBA(m_renderer,15,270,185,330,0,0,0,255);
            betterText(m_renderer,"Score",100,300,80,50,60,255,45,Font);
            if(mood==0)
            {
            betterText(m_renderer,s_s,100,352,0,0,0,255,30,Font);
            }
            if(mood==1)
            {
            betterText(m_renderer,s_s,100,352,0,0,0,255,30,Font);
            }

            betterText(m_renderer,"Timer",265,300,80,50,60,255,45,Font);

            rectangleRGBA(m_renderer,187,333,350,373,0,0,0,255);
            rectangleRGBA(m_renderer,187,270,350,330,0,0,0,255);
            rectangleRGBA(m_renderer,15,333,185,373,0,0,0,255);


            // my_line(m_renderer,x_l,y_l,150,teta,15,200,100,0);
            SDL_RenderCopy( m_renderer, myTexture6, NULL, &texr16);
            SDL_RenderCopy( m_renderer, myTexture7, NULL, &texr17);

SDL_RendererFlip flip;


             SDL_RenderCopyEx( m_renderer, myTexture3 , NULL , &texr13 , -teta*180/3.14 +90 , NULL , flip);

          top(m_renderer,600-50*cos(teta),350+50*sin(teta),20,r_sh2);




                p=1;
                k=0;
                flag++;
//------------------------------------------------------------------------------------------
//SDL_Event *e = new SDL_Event();

SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEMOTION){
x_m=e.button.x;
y_m=e.button.y;
if(x_m>=x_l)
teta=atan((y_l-y_m)/(x_m-x_l));
if(x_m<x_l)
teta=atan((y_l-y_m)/(x_m-x_l))+3.2;
}
if (e.type== SDL_MOUSEBUTTONDOWN) {
x_k=e.button.x;
y_k=e.button.y;
if(x_k>=x_l){
        if (y_k<y_l){
                 if(sound==0){
                    Mix_PlayChannel(-1,tir2,0);
                }
        beta=atan((y_l-y_k)/(x_k-x_l));}
        if (y_k>=y_l){
                 if(sound==0){
                    Mix_PlayChannel(-1,tir2,0);
                }
        beta=atan(-(y_l-y_k)/(x_k-x_l));}


}
if(x_k<x_l){
        if (y_k<y_l){
                 if(sound==0){
                    Mix_PlayChannel(-1,tir2,0);
                }
        beta=atan((y_l-y_k)/-(x_k-x_l));}
        if (y_k>=y_l){
                 if(sound==0){
                    Mix_PlayChannel(-1,tir2,0);
                }
        beta=atan(-(y_l-y_k)/-(x_k-x_l));}
}
key=true;


}
if( e.type == SDL_KEYDOWN )
{
switch( e.key.keysym.sym )
{
case SDLK_ESCAPE:
{
    flo=0;
    time=0;
    while (1)
    {
        SDL_RenderCopy( m_renderer, myTexture, NULL, &texr1);

        SDL_RenderPresent(m_renderer);
        SDL_Event e;
        SDL_PollEvent(&e);
         if (e.type== SDL_MOUSEBUTTONDOWN){
        if (e.button.x >400 && e.button.x< 830 && e.button.y >70 && e.button.y <170)
         {
             time=1;
          flo=1;
         break;
         }
         if (e.button.x >400 && e.button.x< 830 && e.button.y >175 && e.button.y <250)
         {
          sound++;
          sound=sound%2;
         }

         if (e.button.x >400 && e.button.x< 830 && e.button.y >260 && e.button.y <335)
         {
          musics++;
          musics=musics%3;
          if(musics==1)
            {
                Mix_PlayChannel(1,backgroundSound2,15);
            }
            if(musics==2)
            {
                Mix_PlayChannel(1,backgroundSound3,15);
            }
            if(musics==0)
            {
                Mix_PlayChannel(1,backgroundSound4,15);
            }
//            if(musics==0)
//            {
//                Mix_PlayChannel(1,backgroundSound1,15);
//            }

         }
         if (e.button.x >400 && e.button.x< 820 && e.button.y >350 && e.button.y <400)
         {
             while(1){
                      SDL_SetRenderDrawColor(m_renderer,0,0,0,255);
SDL_RenderClear(m_renderer);
SDL_RenderCopy( m_renderer, myTexture4, NULL, &texr14);
SDL_RenderPresent(m_renderer);
SDL_Event e;
SDL_PollEvent(&e);
if (e.type== SDL_MOUSEBUTTONDOWN)
    {
      if (e.button.x >0 && e.button.x< 1200 && e.button.y >500 && e.button.y <800)
            break;
    }
}
         }

           if (e.button.x >460 && e.button.x< 820 && e.button.y >450 && e.button.y <500)
         {

              ofstream ofoo("register.txt",ios::app);
                            ofoo<<s_s<<endl;

         SDL_DestroyTexture(myTexture);
         SDL_DestroyTexture(myTexture2);
         SDL_DestroyTexture(myTexture1);
         SDL_DestroyWindow( m_window );
         SDL_DestroyRenderer( m_renderer );
         SDL_Quit();
         return 0;


        break;
         }

         }


SDL_RenderPresent(m_renderer);
    }


break;
}

case SDLK_SPACE:
    {
        swap(r_sh,r_sh2);
    }


}

}
Uint32 star=SDL_GetTicks();


//-------------------------------------------------------------------------------------------------------
if (key)
{
if(x_k>=x_l){
         if (y_k<y_l)
      {
           x_t=j*cos(beta)+x_l+50*cos(beta);
           y_t=y_l-j*sin(beta)-50*sin(beta);
      }
          if (y_k>=y_l)
          {
            x_t=j*cos(beta)+x_l+50*cos(beta);
            y_t=y_l+j*sin(beta)+50*sin(beta);
          }

}
if(x_k<x_l)
{

          if (y_k<y_l){
            x_t=-j*cos(beta)+x_l-50*cos(beta);
            y_t=y_l-j*sin(beta)-50*sin(beta);
          }
          if (y_k>=y_l){
            x_t=-j*cos(beta)+x_l-50*cos(beta);
            y_t=y_l+j*sin(beta)+50*sin(beta);

          }

}
 top(m_renderer,x_t,y_t,20,r_sh);

if(y_t<100 || y_t>600 || x_t>1100 || x_t<0 ){
        for (int w=1;w<m_top;w++ )
        {
            if (rh[w].x2-21<=x_t && rh[w].x2+21>x_t && rh[w].y2+21>=y_t && rh[w].y2-21<y_t){


           rh[m_top+1].rang=rh[m_top].rang;
           rh[m_top+1].vojod=rh[m_top].vojod;

           for (int r=m_top-1;r>=w;r--)
           {

        rh[r+1].rang=rh[r].rang;
        rh[r+1].vojod=rh[r].vojod;

           }

        rh[w].rang=r_sh;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


        if (rh[w+1].rang==r_sh && rh[w+2].rang==r_sh)
        {
              if(sound==0)
              {
                  Mix_PlayChannel(-1,ter,0);
              }
            for (int wr=w;rh[wr].rang==r_sh;wr++)
           {
               rh[wr].vojod=0;
               temp++;
               wq=wr;
           }
            for (int wl=w;rh[wl].rang==r_sh;wl--)
           {rh[wl].vojod=0;
             temp++;
             wa=wl;
           }
            key2=1;

        }
       else  if (rh[w-1].rang==r_sh && rh[w+1].rang==r_sh)
        {
             if(sound==0)
              {
                  Mix_PlayChannel(-1,ter,0);
              }
              for (int wr=w;rh[wr].rang==r_sh;wr++)
           {
               rh[wr].vojod=0;
               temp++;
                 wq=wr;

           }
            for (int wl=w;rh[wl].rang==r_sh;wl--)
             {rh[wl].vojod=0;
             temp++;
              wa=wl;
           }
            key2=1;

        }
       else if (rh[w-1].rang==r_sh && rh[w-2].rang==r_sh)
        {
             if(sound==0)
              {
                  Mix_PlayChannel(-1,ter,0);
              }
              for (int wr=w;rh[wr].rang==r_sh;wr++)
           {
               rh[wr].vojod=0;
               temp++;
                 wq=wr;
           }
            for (int wl=w;rh[wl].rang==r_sh;wl--)
           {rh[wl].vojod=0;
             temp++;
              wa=wl;
           }
                         key2=1;


        }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

            m_top++;



            break;
            }
        }


        key=false;
        j=0;
        r_sh=r_sh2;
        r_sh2=rand()%4;

}

    j+=flo;
}
Uint32 dani=SDL_GetTicks();
if(!key)
{

 top(m_renderer,600+50*cos(teta),350-50*sin(teta),20,r_sh);

}



                 while(p<m_top){
                        if (rh[p].x2==200 && rh[p].y2==600)
                        {

                             ofstream ofoo("register.txt",ios::app);

                            ofoo<<s_s<<endl;


         SDL_DestroyTexture(myTexture);
         SDL_DestroyTexture(myTexture2);
         SDL_DestroyTexture(myTexture1);
         ofoo.close();

         SDL_DestroyWindow( m_window );
         SDL_DestroyRenderer( m_renderer );
         SDL_Quit();
         return 0;

                        }
                         if (rh[wa-1].x2-21 == rh[wq+1].x2+21 || rh[wa-1].y2-21 == rh[wq+1].y2+21 || rh[wa-1].x2+21 == rh[wq+1].x2-21  )
                      {

                        int rt=wq-wa+1;


                         if(mood==0){
                        sc=rt;
                        sco+=sc;
                        s_s=to_string(sco);}





                           for(int s=wq+1; s<=m_top ; s++)
                           {
                               rh[s-rt].rang=rh[s].rang;
                               rh[s-rt].vojod=rh[s].vojod;
                               rh[s-rt].x2=rh[s].x2;
                               rh[s-rt].y2=rh[s].y2;
                               rh[s-rt].x=rh[s].x;
                               rh[s-rt].y=rh[s].y;
                           }
                        m_top-=rt;
                        key2=0;
                        i-=rt*42;
                      }

                        if (rh[p].vojod)
                        {


                   if (x_b+i-k<1100 && x_b+i-k>200 )
                   {
                       if (key2 && wq>p ){
                             top (m_renderer, rh[p].x2,rh[p].y2,20,rh[p].rang);
                                 }
                   else
                   {top (m_renderer,rh[p].x-k+i,rh[p].y,20,rh[p].rang);
                    rh[p].x2=rh[p].x-k+i;
                    rh[p].y2=rh[p].y;
                    }



                   }
                     if (x_b+i-k>=1100 && x_b+i-k>200 && rh[p].y-k+i-1000 <600 )
                   {

                       if (key2 && wq>p )
                        top (m_renderer, rh[p].x2,rh[p].y2,20,rh[p].rang );

                       else{
                    top (m_renderer,1100,rh[p].y-k+i-1000,20,rh[p].rang );
                    rh[p].y2=rh[p].y-k+i-1000;
                    rh[p].x2=1100;
                       }


                   }
                     if ( rh[p].y-k+i-1000 >=600 )
                     {
                         if (key2 && wq>p ) top (m_renderer,rh[p].x2,rh[p].y2,20,rh[p].rang);

                         else{
                         top (m_renderer,rh[p].x-i+k+2500,600,20,rh[p].rang);
                         rh[p].x2=rh[p].x-i+k+2500;
                         rh[p].y2=600;}
                     }

                             }

                    k+=42;
                    p++;
                             }
                     if(flag%6==0)
                        i+=flo;




                      SDL_Delay(2);

                      Uint32 edn=SDL_GetTicks();
                      Uint32 noll=SDL_GetTicks();
                      seconds+=(edn-star)/1000.0f;
                      time_score-=((noll- dani)/1000.0f);
                      if(mood==1)
                      {
                          s_s=to_string(time_score);
                      }

                      if(seconds>40)
                      {
                          flo=0;
                          betterText(m_renderer,"Time is over",600,200,0,0,0,255,30,Font);
                           betterText(m_renderer,"Pleas Enter The Escape And Exit To Save Your Score",600,500,0,0,0,255,20,Font);
//
//                            ofstream ofoo("register.txt",ios::app);
//                            ofoo<<s_s<<endl;
//
//         SDL_DestroyTexture(myTexture);
//         SDL_DestroyTexture(myTexture2);
//         SDL_DestroyTexture(myTexture1);
//         SDL_DestroyWindow( m_window );
//         SDL_DestroyRenderer( m_renderer );
//         SDL_Quit();
//         return 0;
                      }
                      tim = to_string(seconds);

                     SDL_RenderPresent(m_renderer);



          }




// +++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++++++++++++++++++++++++++++








}}
void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L, double theta,int widht, int R, int G, int B )
{
    int x_2 = x_1 + L*cos(theta);
    int y_2 = y_1 - L*sin(theta);

    thickLineRGBA(Renderer,x_1,y_1,x_2,y_2,widht,R,G,B,255);
  //  SDL_RenderPresent(Renderer);
}


void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian )
{
    SDL_Rect rectangle ;
    rectangle.x = x;
    rectangle.y = y;
    rectangle.w = w;
    rectangle.h = h;

    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);
    if (fill_boolian==1)
    SDL_RenderFillRect(Renderer, &rectangle);
    SDL_RenderDrawRect(Renderer, &rectangle);
   // SDL_RenderPresent(Renderer);
}


void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian)
{
    if(fill_boolian==1)
        filledEllipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
    if(fill_boolian==0)
        ellipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);
   // SDL_RenderPresent(Renderer);
}


void window_color(SDL_Renderer *Renderer, int R, int G, int B)
{

    SDL_SetRenderDrawColor( Renderer, R, G, B, 255 );
    SDL_RenderClear( Renderer );
    // Show the window
  //SDL_RenderPresent( Renderer );
}


void texture(SDL_Renderer *m_renderer,int xp,int yp,string addressOfImage,int width,int height)
{
        int n = addressOfImage.length();
        char char_array[n+1];

        strcpy(char_array, addressOfImage.c_str());
        SDL_Texture *myTexture;
        myTexture = IMG_LoadTexture( m_renderer, char_array);
        int w1, h1;
        SDL_QueryTexture(myTexture, NULL, NULL, &w1, &h1);
        SDL_Rect texr1;
        texr1.x = xp;
        texr1.y = yp;
        texr1.w = width;
        texr1.h = height;
        SDL_RenderCopy( m_renderer, myTexture, NULL, &texr1);
            SDL_DestroyTexture(myTexture);

}
void top(SDL_Renderer *m_renderer,int x_top,int y_top,int r_top,int rang_top){
    int r,b,g;
                       if (rang_top==0)
                       {
                           r=0;
                           b=255;
                           g=0;
                       }
                        if (rang_top==1)
                       {
                           r=255;
                           b=0;
                           g=255;
                       }
                        if (rang_top==2)
                       {
                           r=255;
                           b=0;
                           g=0;
                       }
                        if (rang_top==3)
                       {
                           r=0;
                           b=0;
                           g=255;
                       }
                       if(rang_top==10)
                       {
                           r=255;
                           b=255;
                           g=255;

                       }
filledCircleRGBA(m_renderer,x_top,y_top,r_top,r,g,b,255);
}
void betterText(SDL_Renderer *renderer, string S,int x, int y,int r, int g, int b, int a,int size, string Font /*def = arial */)
{
    if (!TTF_WasInit())
        TTF_Init();
    string fontDir = "./fonts/" + Font + ".ttf"; // should have fonts as .ttf files in ./fonts folder from project path
    TTF_Font *font = TTF_OpenFont(fontDir.c_str(), size);
    SDL_Color color = {r, g, b, a};
    SDL_Surface *surface = TTF_RenderText_Solid(font, S.c_str(), color);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect rect;
    int h, w;
    SDL_QueryTexture(texture, NULL, NULL, &w, &h);
    rect.h = h;
    rect.w = w;
    rect.x = x - w / 2;
    rect.y = y - h / 2;
    SDL_RenderCopy(renderer, texture, NULL, &rect);
    // free resources
    TTF_CloseFont(font);
    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
}

void srt(int a[],int n)
{
    int z,x;
    for(z=0;z<n;z++)
    {
        for(x=z+1;x<n;x++)
        {
            if(a[z]<a[x])
            {
                swap(a[z],a[x]);
            }
        }
    }
}



