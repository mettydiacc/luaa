#include "../top/includes.cc"

inline void _index(int argc, char *argv[])
{
      std::string filee = "lua ";
      filee.append(argv[1]);
      const char *file = filee.c_str();
      int res = system(file);
      std::cout << res << std::endl;
      // i don't remember what i wanted to do lmao
}