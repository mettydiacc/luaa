#include "../top/includes.cc"

inline bool ends_with(std::string const &value, std::string const &ending)
{
      if (ending.size() > value.size())
            return false;
      return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

inline bool check_values(int argc, char *argv[])
{
      if (argc != 2)
      {
            std::cerr << "Usage: " << argv[0] << " <lua_file>" << std::endl;
            return false;
      }
      if (ends_with(argv[1], ".lua") == false)
      {
            std::cerr << "Error checking file extension" << std::endl;
            return false;
      }
      if (!std::filesystem::exists(argv[1])) {
            std::cerr << "Error, the given file does not exists" << std::endl;
            return false;
      }
      return true;
}

class LuaFileRequiredException : public std::runtime_error
{
public:
      LuaFileRequiredException(const std::string &message) : std::runtime_error(message) {}
};