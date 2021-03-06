#include <SDL.h>
#ifdef LINUX
	#include <GL/gl.h>
#endif
#ifdef DARWIN
	#include <OpenGL/gl.h>
#endif

#include <iostream>
#include "GLFunctions.h"
#include "World.h"

/// @brief function to quit SDL with error message
/// @param[in] _msg the error message to send
void SDLErrorExit(const std::string &_msg);

/// @brief initialize SDL OpenGL context
SDL_GLContext createOpenGLContext( SDL_Window *window);



int main()
{


    // Initialize SDL's Video subsystem
    if (SDL_Init(SDL_INIT_VIDEO) < 0 )
    {
      // Or die on error
      SDLErrorExit("Unable to initialize SDL");
    }

    // now get the size of the display and create a window we need to init the video
    SDL_Rect rect;
    SDL_GetDisplayBounds(0,&rect);
    // now create our window
    SDL_Window *window=SDL_CreateWindow("SDLNGL",
                                        SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED,
                                        rect.w/2,
                                        rect.h/2,
                                        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
                                       );
    // check to see if that worked or exit
    if (!window)
    {
      SDLErrorExit("Unable to create window");
    }

    // Create our opengl context and attach it to our window

     SDL_GLContext glContext=createOpenGLContext(window);
     if(!glContext)
     {
       SDLErrorExit("Problem creating OpenGL context");
     }
     // make this our current GL context (we can have more than one window but in this case not)
     SDL_GL_MakeCurrent(window, glContext);
    /* This makes our buffer swap syncronized with the monitor's vertical refresh */
    SDL_GL_SetSwapInterval(1);
  // now clear the screen and swap whilst NGL inits (which may take time)
  Vec4 red(1,0,0);
  Vec4 green(0,1,0);
  Vec4 blue(0,0,1);
  Vec4 white(1,1,1);
  Vec4 yellow(1,1,0);
  //std::cout<<yellow;
  glClear(GL_COLOR_BUFFER_BIT);

   World w("scene.txt");
  w.useCamera();

//  GLFunctions::perspective(45,float(1024/720),0.01,500);
//  GLFunctions::lookAt(Vec4(4,4,4),Vec4(0,0,0),Vec4(0,1,0));





  SDL_GL_SwapWindow(window);
  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
  glColor3f(1,1,0);
  glEnable(GL_COLOR_MATERIAL);
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_NORMALIZE);
  // flag to indicate if we need to exit
  bool quit=false;
  // sdl event processing data structure
  SDL_Event event;

  // now we create an instance of our ngl class, this will init NGL and setup basic
  // opengl stuff ext. When this falls out of scope the dtor will be called and cleanup
  // our gl stuff
  while(!quit)
  {

    while ( SDL_PollEvent(&event) )
    {
      switch (event.type)
      {
        // this is the window x being clicked.
        case SDL_QUIT : quit = true; break;
        // if the window is re-sized pass it to the ngl class to change gl viewport
        // note this is slow as the context is re-create by SDL each time

        // now we look for a keydown event
        case SDL_KEYDOWN:
        {
          switch( event.key.keysym.sym )
          {
            // if it's the escape key quit
            case SDLK_ESCAPE :  quit = true; break;
            case SDLK_w : glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); break;
            case SDLK_s : glPolygonMode(GL_FRONT_AND_BACK,GL_FILL); break;
            case SDLK_r :
              w.loadScene("scene.txt");
              w.useCamera();
            default : break;
          } // end of key process
        } // end of keydown

        default : break;
      } // end of event switch
    } // end of poll events

/*
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // now draw etc
    yellow.colourGL();
    glRotatef(1.0,1,1 ,1);
    GLFunctions::cube(1.0f,1.0f,1.0f);
    glPushMatrix();
      glTranslatef(0,1,0);
      red.colourGL();
      GLFunctions::sphere(0.5,30);
    glPopMatrix();
    glPushMatrix();
      glTranslatef(-1,1,0);
      blue.colourGL();
      GLFunctions::capsule(0.2,0.6,30);
    glPopMatrix();

    glPushMatrix();
      glTranslatef(1,1,0);
      white.colourGL();
      GLFunctions::cylinder(0.5,2.0,30,30);
    glPopMatrix();

    glPushMatrix();
      glColor3f(0,1,0);
      glTranslatef(1,-1,0);
      GLFunctions::cone(0.5,2.0,30,30);
    glPopMatrix();
    glPushMatrix();
      green.colourGL();
      glTranslatef(1,1,1);
      GLFunctions::disk(0.5,30);
    glPopMatrix();
*/
    // swap the buffers
    SDL_GL_SwapWindow(window);
    w.workDraw();

  }
  // now tidy up and exit SDL

 SDL_Quit();
}


SDL_GLContext createOpenGLContext(SDL_Window *window)
{
  // Request an opengl 3.2 context first we setup our attributes, if you need any
  // more just add them here before the call to create the context
  // SDL doesn't have the ability to choose which profile at this time of writing,
  // but it should default to the core profile
  // for some reason we need this for mac but linux crashes on the latest nvidia drivers
  // under centos
  #ifdef DARWIN
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);
  #endif
  // set multi sampling else we get really bad graphics that alias
  SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
  SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES,2);
  // Turn on double buffering with a 24bit Z buffer.
  // You may need to change this to 16 or 32 for your system
  // on mac up to 32 will work but under linux centos build only 16
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
  // enable double buffering (should be on by default)
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  //
  return SDL_GL_CreateContext(window);

}

void SDLErrorExit(const std::string &_msg)
{
  std::cerr<<_msg<<"\n";
  std::cerr<<SDL_GetError()<<"\n";
  SDL_Quit();
  exit(EXIT_FAILURE);
}
