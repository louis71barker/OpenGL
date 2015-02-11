TARGET=OpenGL
cache()
SOURCES+=src/*.cpp

QMAKE_CXXFLAGS+=$$system(sdl2-config --cflags)
LIBS+=$$system(sdl2-config --libs)
LIBS += -lGL -lGLU -lglut
