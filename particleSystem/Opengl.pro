TARGET=OpenGL
cache()
SOURCES+=src/*.cpp
HEADERS+=src/*.h

QMAKE_CXXFLAGS+=$$system(sdl2-config --cflags)
LIBS+=$$system(sdl2-config --libs)
LIBS += -lGL -lGLU -lglut -lngl
