





#include <iostream>
#include <cstdlib>
#include <SDL.h>
#include <string>
#include <GL/gl.h>
#include <GL/glu.h>
#include <vector>
#include <ctime>


#define MAXPARTICLE 1000

void SDLErrorExit(const std::string &_err)
{
    std::cerr<<_err<<"\n";
    std::cerr<<SDL_GetError()<<"\n";
    SDL_Quit();
    exit(EXIT_FAILURE);
}

/*

//class particle
//{
//    // this represents 1 particle
//    float x,y,xvel,yvel; //pos and speed
//    Uint32 endTime;
//    Uint8 color;
//    public:
//        particle(float X, float Y, float Xvel, float Yvel, int life, Uint8 Color);
//    void move(SDL_Rect _rect);
//    void show();
//    bool isDead(SDL_Rect _rect); // this turns true when the particle is alive

//};

//class particleEngine
//{
//    std::vector<particle*> particles;   //this vector reprsents all of the particles
//    int x,y,maxparticle;
//    public:
//        particleEngine(int maxpart,int X, int Y);
//        ~particleEngine(); //need for the deallocate allocated space
//        void refresh();

//};

//particle::particle(float X, float Y, float Xvel, float Yvel, int life, Uint8 Color)
//{
//    //inits the variables for the particles
//    x=X;
//    y=Y;
//    xvel=Xvel;
//    yvel=Yvel;
//    endTime=SDL_GetTicks()+life; //this gets the end time, and the current time plus the time of the particles life
//    color=Color;
//}

//void particle::move(SDL_Rect _rect)
//{
//    //move the particles
//    x+=xvel;
//    y+=yvel;
//    //SDL_Rect rect;
//    //if it goes outside the screen, it brings the emmiter back into the screen
//    if(x<0)
//    {
//        x=0;
//    }
//    if(y<0)
//    {
//        y=0;
//    }
//    if(x>_rect.w)
//    {
//        x=_rect.w-1;
//    }
//    if(y>_rect.h)
//    {
//        y=_rect.y-1;
//    }

//}

//void particle::show()
//{
// //    Uint8* pixels=(Uint8*)_rect.pixels;
// //    Uint8* pixel=pixels+(int)y*_rect.pitch+(int);
// //    *pixel=color;
//}

//bool particle::isDead(SDL_Rect _rect)
//{
//    return (SDL_GetTicks()>=endTime || x==0 || y==0 || x==_rect.w-1 || y==_rect.h-1);
//}

//particleEngine::particleEngine(int maxpart, int X, int Y)
//{
//    x=X;
//    y=Y;
//    maxparticle=maxpart;
//    for(int i=0; i<maxparticle; i++)     // this creates maxparticle with a random value and position
//    {
//        particles.push_back(new particle(x+rand()%6-3,
//                                         y+rand()%6-3,
//                                         rand()%10+(float)rand()/(float)RAND_MAX-5,
//                                         rand()%10+(float)rand()/(float)RAND_MAX-5,
//                                         500+rand()%1000,rand()%255));
//    }
//}

//particleEngine::~particleEngine()
//{
//    //deallocate all reserved memory
//    for(int i=0; i<maxparticle; i++)
//    {
//        delete particles[i];
//    }
//}

//void particleEngine::refresh()
//{
//    for(int i=0; i>maxparticle; i++)
//    {
//        if(particles[i]->isDead(SDL_Rect _rect))
//        {
//            delete particles[i];
//            particles[i]=new particle((x+rand()%6-3,
//                                      y+rand()%6-3,
//                                      rand()%10+(float)rand()/(float)RAND_MAX-5,
//                                      rand()%10+(float)rand()/(float)RAND_MAX-5,
//                                      500+rand()%2000,rand()%255));
//            particles[i]->move;
//            particles[i]->show;
//        }
//    }
//}






//int main()
//{
//    SDL_Rect rect;
//    SDL_GetDisplayBounds(0,&rect);
//    //SDL_Get
//    std::cout<<"Success"<<std::endl;

//    SDL_Init(SDL_INIT_EVERYTHING);
//    SDL_Surface* screen;


//}
*/
void draw()
{
 //used to make a cude
    static int rot;
    float xOffset = 1.0f;
    glPushMatrix();
        //glRotated(++rot,0,1,0);
        glBegin(GL_QUADS);
//        //FRONT FACE
//            glColor3f(1.0f,0.0f,0.0f);
//            glVertex3f(0.0f, 0.0f, 0.0f);
//            glVertex3f(0.0f, 0.1f, 0.0f);
//            glVertex3f(0.1f, 0.1f, 0.0f);
//            glVertex3f(0.1f, 0.0f, 0.0f);
//        //top face
//            glColor3f(1.0f,1.0f,0.0f);
//            glVertex3f(0.0f, 0.1f, 0.0f);
//            glVertex3f(0.0f, 0.1f, 0.1f);
//            glVertex3f(0.1f, 0.1f, 0.1f);
//            glVertex3f(0.1f, 0.1f, 0.0f);
//       //back face
//            glColor3f(1.0f,0.0f,1.0f);
//            glVertex3f(0.0f, 0.0f, 0.1f);
//            glVertex3f(0.0f, 0.1f, 0.1f);
//            glVertex3f(0.1f, 0.1f, 0.1f);
//            glVertex3f(0.1f, 0.0f, 0.1f);
//       //bottom face
//            glColor3f(0.0f,1.0f,1.0f);
//            glVertex3f(0.0f, 0.0f, 0.0f);
//            glVertex3f(0.0f, 0.0f, 0.1f);
//            glVertex3f(0.1f, 0.0f, 0.1f);
//            glVertex3f(0.1f, 0.0f, 0.0f);
//        //right face
//            glColor3f(0.0f,1.0f,0.0f);
//            glVertex3f(0.0f, 0.1f, 0.0f);
//            glVertex3f(0.0f, 0.1f, 0.1f);
//            glVertex3f(0.0f, 0.0f, 0.1f);
//            glVertex3f(0.0f, 0.0f, 0.0f);
//        //left face
//            glColor3f(0.0f,0.0f,1.0f);
//            glVertex3f(0.1f, 0.1f, 0.0f);
//            glVertex3f(0.1f, 0.1f, 0.1f);
//            glVertex3f(0.1f, 0.0f, 0.1f);
//            glVertex3f(0.1f, 0.0f, 0.0f);
    glEnd();
    glPopMatrix();
}

void particle()
{
    float xPos;
    float yPos; //= 7.0f;
    float r;
    float g;
    float b;


    glPushMatrix();
        glPointSize(1);

        glBegin(GL_POINTS);
            glColor3f(0.0f,1.0f,0.0f);

            for (int i=0; i<MAXPARTICLE*5000; i++)
            {
                xPos = (((float)rand() / (float)RAND_MAX)*2-1)*15;
                yPos = (((float)rand() / (float)RAND_MAX)*2-1)*155;
                glVertex2f(xPos,yPos);
                r = (rand()%255)/255;
                g = 10;
                b = (rand()%255)/255;
                glColor3f(r,g,b);
            }

        glEnd();
    glPopMatrix();
}



SDL_GLContext createOpenGLContext(SDL_Window *_win)
{
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,1);

    return SDL_GL_CreateContext(_win);
}

int main()
{
 //    std::cout<<"Hello World"<<std::endl;

    if(SDL_Init(SDL_INIT_VIDEO) <0)
    {
        SDLErrorExit("Unable to init SDL");
    }

    //grabs the size if the display
    SDL_Rect rect;
    SDL_GetDisplayBounds(0,&rect);
    SDL_Window *win;
    win=SDL_CreateWindow("OpenGL Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, rect.w, rect.h, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!win)
    {
        SDLErrorExit("Unable to create Window");
    }



    SDL_GLContext gl=createOpenGLContext(win);
    if(!gl)
    {
        SDLErrorExit("Problem creating OpenGL context");
    }

    //makes so all open gl is used with these two contexts
    SDL_GL_MakeCurrent(win,gl);
    SDL_GL_SetSwapInterval(1);

    glMatrixMode(GL_PROJECTION);
    gluPerspective(150.0f,float(rect.w)/rect.h,0.1,100.0);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0,0,2,0,0,0,0,1,0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);


    int quit = 0;
    while(!quit)
    {
        SDL_Event e;

        while(SDL_PollEvent(&e))
            {
              switch(e.type)
              {
                case SDL_WINDOWEVENT :
                {
                  int w, h;
                  SDL_GetWindowSize(win, &w, &h);
                  glViewport(0, 0, w, h);
                }
                break;

              case SDL_QUIT: quit = 1; break;

                case SDL_KEYDOWN :
                {
                  switch(e.key.keysym.sym)
                  {
                    case SDLK_ESCAPE : quit = 1; break;
                    case SDLK_w : glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); break;
                    case SDLK_s : glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); break;
                  }
                }
                break;
              }
            } // Event poll

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       // draw();
        particle();

        SDL_GL_SwapWindow(win);
    }





    SDL_Quit();
    return EXIT_SUCCESS;


}

