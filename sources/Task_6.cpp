#include "../tests/lab05.hpp"

std::string replace(const std::string& str,
                    const std::string& old, const std::string& new_string){
  int sdvig;
  std::string res;
  res = str;
  sdvig = old.length();
  while (res.find(old) != std::string::npos){
    res.replace(res.find(old), sdvig, new_string);
  }
  return res;
}
