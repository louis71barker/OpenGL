#ifndef WORLD_H__
#define WORLD_H__
#include <string>
#include <boost/tokenizer.hpp>
#include <vector>
#include <GL/gl.h>


class World
{
public:
  World(const std::string &_fname);
  void loadScene(const std::string &_fname);
  void useCamera() const;
  void workDraw() const;
private:
  typedef boost::tokenizer<boost::char_separator<char> >tokenizer;
  void parseCamera(tokenizer::iterator &);
  void parseCube(tokenizer::iterator &);
  void parseSphere(tokenizer::iterator &);
  void parseCone(tokenizer::iterator &);
  void parseTorus(tokenizer::iterator &);
  void parseDisk(tokenizer::iterator &);
  void parseCylinder(tokenizer::iterator &);
  typedef struct
  {
    float ex,ey,ez;
    float lx,ly,lz;
    float ux,uy,uz;
    float fov;
    float n,f;
  }Camera;
  Camera m_cam;


  std::vector<GLuint> m_displayList;
};





#endif
