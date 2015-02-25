#include "World.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <GLFunctions.h>
#include <boost/lexical_cast.hpp>
#include <boost/format.hpp>


//defined the tokeniser so all that has to be called later is tokenizer



World::World(const std::string &_fname)
{
  loadScene(_fname);
}

void World::loadScene(const std::string &_fname)
{
  std::fstream fileIn;
  fileIn.open(_fname.c_str(),std::ios::in);
  if (!fileIn.is_open())
  {
    std::cerr<<"could not open "<<_fname<<"/n";
    exit(EXIT_FAILURE);

  }

  //boost parser separtor
  boost::char_separator<char> sep(" \t\r\n");


  std::string lineBuffer;
  while(!fileIn.eof())
  {
    getline(fileIn,lineBuffer,'\n');
    if(lineBuffer.size() !=0)
    {
      tokenizer tokens(lineBuffer,sep);
      tokenizer::iterator firstWord=tokens.begin();
      if(*firstWord =="#")
      {
        std::cerr<<"Found Comment \n";
      }
      else if (*firstWord=="Camera")
      {
        parseCamera(firstWord);
      }
      else if (*firstWord=="Cube")
      {
        parseCube(firstWord);
      }
      //std::cout<<lineBuffer<<"\n";
    }
  }
}

void World::parseCamera(tokenizer::iterator &_firstWord)
{
  ++_firstWord;
  m_cam.ex=boost::lexical_cast<float>(*_firstWord++);
  m_cam.ey=boost::lexical_cast<float>(*_firstWord++);
  m_cam.ez=boost::lexical_cast<float>(*_firstWord++);

  m_cam.lx=boost::lexical_cast<float>(*_firstWord++);
  m_cam.ly=boost::lexical_cast<float>(*_firstWord++);
  m_cam.lz=boost::lexical_cast<float>(*_firstWord++);

  m_cam.ux=boost::lexical_cast<float>(*_firstWord++);
  m_cam.uy=boost::lexical_cast<float>(*_firstWord++);
  m_cam.uz=boost::lexical_cast<float>(*_firstWord++);

  m_cam.fov=boost::lexical_cast<float>(*_firstWord++);

  m_cam.n=boost::lexical_cast<float>(*_firstWord++);

  m_cam.f=boost::lexical_cast<float>(*_firstWord++);
}


void World::useCamera() const
{
  GLFunctions::perspective(m_cam.fov,1.0,m_cam.n,m_cam.f);
  GLFunctions::lookAt(Vec4(m_cam.ex,m_cam.ey,m_cam.ez),
                      Vec4(m_cam.lx,m_cam.ly,m_cam.lz),
                      Vec4(m_cam.ux,m_cam.uy,m_cam.uz));
}


void World::workDraw() const
{
  glCallLists(m_displayList.size(),GL_UNSIGNED_INT,&m_displayList[0]);
}

void World::parseCube(tokenizer::iterator &_firstWord)
{
  ++_firstWord;
  float w =boost::lexical_cast<float>(*_firstWord++);
  float h =boost::lexical_cast<float>(*_firstWord++);
  float d=boost::lexical_cast<float>(*_firstWord++);

  float r=boost::lexical_cast<float>(*_firstWord++);
  float g=boost::lexical_cast<float>(*_firstWord++);
  float b=boost::lexical_cast<float>(*_firstWord++);

  float tx=boost::lexical_cast<float>(*_firstWord++);
  float ty=boost::lexical_cast<float>(*_firstWord++);
  float tz=boost::lexical_cast<float>(*_firstWord++);

  float sx=boost::lexical_cast<float>(*_firstWord++);
  float sy=boost::lexical_cast<float>(*_firstWord++);
  float sz=boost::lexical_cast<float>(*_firstWord++);

  float angle=boost::lexical_cast<float>(*_firstWord++);
  float rx=boost::lexical_cast<float>(*_firstWord++);
  float ry=boost::lexical_cast<float>(*_firstWord++);
  float rz=boost::lexical_cast<float>(*_firstWord++);




  //create display list
  GLuint id=glGenLists(1);
  glNewList(id,GL_COMPILE);
  glPushMatrix();
    glRotatef(angle,rx,ry,rz);
    glTranslatef(tx,ty,tz);
    glScalef(sx,sy,sz);
    glColor3f(r,g,b);
    GLFunctions::cube(w,h,d);
  glPopMatrix();
  glEndList();


  m_displayList.push_back(id);
}
