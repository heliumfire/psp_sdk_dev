
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_rmi_CORBA_ValueHandlerMultiFormat__
#define __javax_rmi_CORBA_ValueHandlerMultiFormat__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
          class ValueHandlerMultiFormat;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace SendingContext
      {
          class RunTime;
      }
    }
  }
}

class javax::rmi::CORBA::ValueHandlerMultiFormat : public ::java::lang::Object
{

public:
  virtual jbyte getMaximumStreamFormatVersion() = 0;
  virtual void writeValue(::org::omg::CORBA::portable::OutputStream *, ::java::io::Serializable *, jbyte) = 0;
  virtual ::java::lang::String * getRMIRepositoryID(::java::lang::Class *) = 0;
  virtual ::org::omg::SendingContext::RunTime * getRunTimeCodeBase() = 0;
  virtual jboolean isCustomMarshaled(::java::lang::Class *) = 0;
  virtual ::java::io::Serializable * readValue(::org::omg::CORBA::portable::InputStream *, jint, ::java::lang::Class *, ::java::lang::String *, ::org::omg::SendingContext::RunTime *) = 0;
  virtual ::java::io::Serializable * writeReplace(::java::io::Serializable *) = 0;
  virtual void writeValue(::org::omg::CORBA::portable::OutputStream *, ::java::io::Serializable *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_rmi_CORBA_ValueHandlerMultiFormat__
