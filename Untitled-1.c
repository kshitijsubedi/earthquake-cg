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
{   int x,y,i;
    initgraph(&gd,&gm,NULL);
//    intro();
    ghanta();
 //   dh();
  //  dh_anim();
   // info();
    // outro();
    getch();
    return 0;
}

    void ghanta()
    {
        rectangle(400,480,200,240);
        rectangle(230,360,260,480);
        rectangle(290,360,320,480);
        rectangle(350,360,375,480);
        rectangle(375,345,230,330);
        circle(300,285,30);
        
        
    }

void border()
{
    line(0,0,640,0);
  line(0,0,0,480);
  line(639,0,639,480);
  line(639,479,0,479);
}
void sky()
{   int x,y,i;
    for(i=0;i<=1000;i++)
  {
    x=rand()%639;
    y=rand()%480;
    putpixel(x,y,15);
  }
}

