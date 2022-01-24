#include "../tests/lab05.hpp"

std::vector<std::string> split(const std::string& str, char sep){
  std::vector<std::string> res;
  std::string temp;
  int k;
  k = 0;



  for (int i = 0; i < (static_cast<int> (str.length())); i++){
    if (str[i] == sep){
      k++;
    }

  }
  if (str.length() == 0 || k == static_cast<int> (str.length())){
    res = {};
    return res;
  }

  for (int i = 0; i < (static_cast<int> (str.length())); i++){
    if (str[i] == sep){
      res.push_back(temp);
      i++;
      temp = "";
    }

    temp+=str[i];
  }
  res.push_back(temp);
  return res;
}
