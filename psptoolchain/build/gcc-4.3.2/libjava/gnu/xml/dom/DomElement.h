
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_DomElement__
#define __gnu_xml_dom_DomElement__

#pragma interface

#include <gnu/xml/dom/DomNsNode.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class DomDocument;
          class DomElement;
          class DomNamedNodeMap;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Attr;
          class NamedNodeMap;
          class Node;
          class TypeInfo;
      }
    }
  }
}

class gnu::xml::dom::DomElement : public ::gnu::xml::dom::DomNsNode
{

public: // actually protected
  DomElement(::gnu::xml::dom::DomDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::org::w3c::dom::NamedNodeMap * getAttributes();
  virtual jboolean hasAttributes();
  virtual ::java::lang::Object * clone();
public: // actually package-private
  virtual void setOwner(::gnu::xml::dom::DomDocument *);
public:
  virtual void makeReadonly();
  virtual ::java::lang::String * getTagName();
  virtual ::java::lang::String * getAttribute(::java::lang::String *);
  virtual jboolean hasAttribute(::java::lang::String *);
  virtual jboolean hasAttributeNS(::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String * getAttributeNS(::java::lang::String *, ::java::lang::String *);
  virtual ::org::w3c::dom::Attr * getAttributeNode(::java::lang::String *);
  virtual ::org::w3c::dom::Attr * getAttributeNodeNS(::java::lang::String *, ::java::lang::String *);
  virtual void setAttribute(::java::lang::String *, ::java::lang::String *);
  virtual void setAttributeNS(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::org::w3c::dom::Attr * setAttributeNode(::org::w3c::dom::Attr *);
  virtual ::org::w3c::dom::Attr * setAttributeNodeNS(::org::w3c::dom::Attr *);
  virtual void removeAttribute(::java::lang::String *);
  virtual ::org::w3c::dom::Attr * removeAttributeNode(::org::w3c::dom::Attr *);
  virtual void removeAttributeNS(::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String * lookupPrefix(::java::lang::String *);
  virtual jboolean isDefaultNamespace(::java::lang::String *);
  virtual ::java::lang::String * lookupNamespaceURI(::java::lang::String *);
  virtual ::java::lang::String * getBaseURI();
  virtual ::org::w3c::dom::TypeInfo * getSchemaTypeInfo();
  virtual void setIdAttribute(::java::lang::String *, jboolean);
  virtual void setIdAttributeNode(::org::w3c::dom::Attr *, jboolean);
  virtual void setIdAttributeNS(::java::lang::String *, ::java::lang::String *, jboolean);
  virtual jboolean isEqualNode(::org::w3c::dom::Node *);
public: // actually package-private
  ::java::util::Set * __attribute__((aligned(__alignof__( ::gnu::xml::dom::DomNsNode)))) userIdAttrs;
private:
  ::gnu::xml::dom::DomNamedNodeMap * attributes;
public: // actually package-private
  ::java::lang::String * xmlSpace;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_DomElement__
