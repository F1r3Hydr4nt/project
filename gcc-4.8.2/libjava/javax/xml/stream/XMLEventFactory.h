
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_stream_XMLEventFactory__
#define __javax_xml_stream_XMLEventFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class NamespaceContext;
          class QName;
      }
      namespace stream
      {
          class Location;
          class XMLEventFactory;
        namespace events
        {
            class Attribute;
            class Characters;
            class Comment;
            class DTD;
            class EndDocument;
            class EndElement;
            class EntityDeclaration;
            class EntityReference;
            class Namespace;
            class ProcessingInstruction;
            class StartDocument;
            class StartElement;
        }
      }
    }
  }
}

class javax::xml::stream::XMLEventFactory : public ::java::lang::Object
{

public: // actually protected
  XMLEventFactory();
public:
  static ::javax::xml::stream::XMLEventFactory * newInstance();
  static ::javax::xml::stream::XMLEventFactory * newInstance(::java::lang::String *, ::java::lang::ClassLoader *);
private:
  static ::java::lang::String * getFactoryClassName(::java::lang::ClassLoader *, jint);
public:
  virtual void setLocation(::javax::xml::stream::Location *) = 0;
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::javax::xml::namespace$::QName *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Namespace * createNamespace(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Namespace * createNamespace(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::javax::xml::namespace$::QName *, ::java::util::Iterator *, ::java::util::Iterator *) = 0;
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *, ::java::util::Iterator *) = 0;
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *, ::java::util::Iterator *, ::javax::xml::namespace$::NamespaceContext *) = 0;
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::javax::xml::namespace$::QName *, ::java::util::Iterator *) = 0;
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *) = 0;
  virtual ::javax::xml::stream::events::Characters * createCharacters(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Characters * createCData(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Characters * createSpace(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::Characters * createIgnorableSpace(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument() = 0;
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *, ::java::lang::String *, jboolean) = 0;
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::EndDocument * createEndDocument() = 0;
  virtual ::javax::xml::stream::events::EntityReference * createEntityReference(::java::lang::String *, ::javax::xml::stream::events::EntityDeclaration *) = 0;
  virtual ::javax::xml::stream::events::Comment * createComment(::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::ProcessingInstruction * createProcessingInstruction(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::xml::stream::events::DTD * createDTD(::java::lang::String *) = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_xml_stream_XMLEventFactory__
