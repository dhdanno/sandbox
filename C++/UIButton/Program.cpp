// delegate demonstration


#include "MainClass.cpp"

string* getArgs(int argc, const char* argv[])
{
  string* Args = new string[argc];
  for(int i = 0; i < argc; i++) Args[i] = argv[i];
  return Args;
}

int main(int argc, const char* argv[])
{
  MainClass *mainInstance = new MainClass();
  mainInstance->Main(argc, getArgs(argc, argv));
  delete mainInstance;
  return 0;
}

