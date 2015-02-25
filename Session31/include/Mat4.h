#ifndef MAT4_H__
#define MAT4_H__

class Mat4{

public:
  //stuct Mat4 as scale matix _s
  Mat4(float _s=1.0f);
  //copy ctor
  Mat4(const Mat4 &_rhs);
  //set to identity
  void identiy();
  // load gl model view
  void loadModelView() const;
  // load gl projection
  void loadProjection() const;

  union
  {
    float m_m[4][4];
    float m_openGL[16];
    struct
    {
      float m_00;
      float m_01;
      float m_02;
      float m_03;
      float m_10;
      float m_11;
      float m_12;
      float m_13;
      float m_20;
      float m_21;
      float m_22;
      float m_23;
      float m_30;
      float m_31;
      float m_32;
      float m_33;

    };

  };


private:


};


#endif
