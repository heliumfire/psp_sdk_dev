
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtCanvasPeer__
#define __gnu_java_awt_peer_qt_QtCanvasPeer__

#pragma interface

#include <gnu/java/awt/peer/qt/QtComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtCanvasPeer;
              class QtToolkit;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Canvas;
        class Dimension;
    }
  }
}

class gnu::java::awt::peer::qt::QtCanvasPeer : public ::gnu::java::awt::peer::qt::QtComponentPeer
{

public:
  QtCanvasPeer(::gnu::java::awt::peer::qt::QtToolkit *, ::java::awt::Canvas *);
  virtual void init();
public: // actually protected
  virtual void setup();
public:
  virtual ::java::awt::Dimension * getPreferredSize();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtCanvasPeer__
