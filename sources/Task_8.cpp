#include "../tests/lab05.hpp"

std::string join(const std::vector<std::string>& str, const std::string& sep){
  std::string res;
  res = "";

  for (int i =0;i<(int)str.size()-1;i++){
    if (str[str.size()] != str[i]){
      res+=str[i];
      res+=sep;
    }
  }
  res += str[str.size()-1];
  return res;
}
