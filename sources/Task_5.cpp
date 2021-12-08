#include "../tests/lab05.hpp"

bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element){
  std::vector<int> res;
  res = vec;
  removed_element =0;
  for (int i= 0; i<(int)vec.size();i++){
    if (res[i]<0){
      removed_element = vec[i];
      res.erase(res.begin() +i);
      return true;
    }
  }
  return false;
}