
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_AbstractListModel__
#define __javax_swing_AbstractListModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class AbstractListModel;
      namespace event
      {
          class EventListenerList;
          class ListDataListener;
      }
    }
  }
}

class javax::swing::AbstractListModel : public ::java::lang::Object
{

public:
  AbstractListModel();
  virtual void addListDataListener(::javax::swing::event::ListDataListener *);
  virtual void removeListDataListener(::javax::swing::event::ListDataListener *);
public: // actually protected
  virtual void fireContentsChanged(::java::lang::Object *, jint, jint);
  virtual void fireIntervalAdded(::java::lang::Object *, jint, jint);
  virtual void fireIntervalRemoved(::java::lang::Object *, jint, jint);
public:
  virtual JArray< ::java::util::EventListener * > * getListeners(::java::lang::Class *);
  virtual JArray< ::javax::swing::event::ListDataListener * > * getListDataListeners();
  virtual jint getSize() = 0;
  virtual ::java::lang::Object * getElementAt(jint) = 0;
private:
  static const jlong serialVersionUID = -3285184064379168730LL;
public: // actually protected
  ::javax::swing::event::EventListenerList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) listenerList;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_AbstractListModel__
