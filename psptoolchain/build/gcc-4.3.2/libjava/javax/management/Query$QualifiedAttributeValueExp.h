
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_Query$QualifiedAttributeValueExp__
#define __javax_management_Query$QualifiedAttributeValueExp__

#pragma interface

#include <javax/management/AttributeValueExp.h>
extern "Java"
{
  namespace javax
  {
    namespace management
    {
        class ObjectName;
        class Query$QualifiedAttributeValueExp;
        class ValueExp;
    }
  }
}

class javax::management::Query$QualifiedAttributeValueExp : public ::javax::management::AttributeValueExp
{

public:
  Query$QualifiedAttributeValueExp(::java::lang::String *, ::java::lang::String *);
  ::javax::management::ValueExp * apply(::javax::management::ObjectName *);
private:
  static const jlong serialVersionUID = 8832517277410933254LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::javax::management::AttributeValueExp)))) className;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_Query$QualifiedAttributeValueExp__
