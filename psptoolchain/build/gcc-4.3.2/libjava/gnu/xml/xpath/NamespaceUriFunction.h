
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_xpath_NamespaceUriFunction__
#define __gnu_xml_xpath_NamespaceUriFunction__

#pragma interface

#include <gnu/xml/xpath/Expr.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace xpath
      {
          class Expr;
          class NamespaceUriFunction;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::xpath::NamespaceUriFunction : public ::gnu::xml::xpath::Expr
{

public: // actually package-private
  NamespaceUriFunction(::java::util::List *);
  NamespaceUriFunction(::gnu::xml::xpath::Expr *);
public:
  ::java::lang::Object * evaluate(::org::w3c::dom::Node *, jint, jint);
  ::gnu::xml::xpath::Expr * clone(::java::lang::Object *);
  jboolean references(::javax::xml::namespace::QName *);
  ::java::lang::String * toString();
public: // actually package-private
  ::gnu::xml::xpath::Expr * __attribute__((aligned(__alignof__( ::gnu::xml::xpath::Expr)))) arg;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_xpath_NamespaceUriFunction__
