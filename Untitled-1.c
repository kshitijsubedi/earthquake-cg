#include<stdio.h>
#include<graphics.h>
int gd=DETECT,gm;
void intro();
void ghanta();
void dh();
void dh_anim();
void info();
void outro();
int main()
{
    initgraph(&gd,&gm,NULL);
//    intro();
    ghanta();
 //   dh();
  //  dh_anim();
   // info();
    // outro();
    getch();
    return 0;
    
   // void intro()
   // {   


  }

    void ghanta()
    {
        rectangle(400,480,200,380);
        
    }