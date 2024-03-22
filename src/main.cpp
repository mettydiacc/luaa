#include "top/includes.cc"

int main(int argc, char *argv[])
{
      if (check_values(argc, argv) == false)
            return 1;

      try
      {
            _index(argc, argv);
      }
      catch (const LuaFileRequiredException &e)
      {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
      }
      return 0;
}