
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DragGestureRecognizer__
#define __java_awt_dnd_DragGestureRecognizer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Point;
      namespace dnd
      {
          class DragGestureListener;
          class DragGestureRecognizer;
          class DragSource;
      }
      namespace event
      {
          class InputEvent;
      }
    }
  }
}

class java::awt::dnd::DragGestureRecognizer : public ::java::lang::Object
{

public: // actually protected
  DragGestureRecognizer(::java::awt::dnd::DragSource *, ::java::awt::Component *, jint, ::java::awt::dnd::DragGestureListener *);
  DragGestureRecognizer(::java::awt::dnd::DragSource *, ::java::awt::Component *, jint);
  DragGestureRecognizer(::java::awt::dnd::DragSource *, ::java::awt::Component *);
  DragGestureRecognizer(::java::awt::dnd::DragSource *);
  virtual void registerListeners() = 0;
  virtual void unregisterListeners() = 0;
public:
  virtual ::java::awt::dnd::DragSource * getDragSource();
  virtual ::java::awt::Component * getComponent();
  virtual void setComponent(::java::awt::Component *);
  virtual jint getSourceActions();
  virtual void setSourceActions(jint);
  virtual ::java::awt::event::InputEvent * getTriggerEvent();
  virtual void resetRecognizer();
  virtual void addDragGestureListener(::java::awt::dnd::DragGestureListener *);
  virtual void removeDragGestureListener(::java::awt::dnd::DragGestureListener *);
public: // actually protected
  virtual void fireDragGestureRecognized(jint, ::java::awt::Point *);
  virtual void appendEvent(::java::awt::event::InputEvent *);
private:
  void readObject(::java::io::ObjectInputStream *);
  void writeObject(::java::io::ObjectOutputStream *);
  static const jlong serialVersionUID = 8996673345831063337LL;
public: // actually protected
  ::java::awt::dnd::DragSource * __attribute__((aligned(__alignof__( ::java::lang::Object)))) dragSource;
  ::java::awt::Component * component;
  ::java::awt::dnd::DragGestureListener * dragGestureListener;
  jint sourceActions;
  ::java::util::ArrayList * events;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_dnd_DragGestureRecognizer__
