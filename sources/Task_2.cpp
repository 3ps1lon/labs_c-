#include "../tests/lab05.hpp"

std::pair<float, float> minMax(const std::vector<float>& vec)
{
  int max_val;
  int min_val;

  if (vec.size() != 0){
    max_val = vec[0];
    min_val = vec[0];
    for (int i = 0; i<(int)vec.size();i++) {
      if (max_val < vec[i]){
        max_val = vec[i];
      }
      if (min_val > vec[i]){
        min_val = vec[i];
      }
  }
    return std::pair(min_val,max_val);
  }
  else{
    return std::pair(std::numeric_limits<float>::min(),std::numeric_limits<float>::max());
  }
}