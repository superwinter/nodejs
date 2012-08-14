#include <v8.h>

using namespace v8;

extern "C" void init (Handle<Object> target)
{
  HandleScope scope;
  target->Set(String::NewSymbol("hello"), String::New("world"));
}
