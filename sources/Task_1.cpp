#include "../tests/lab05.hpp"

float mean(const std::vector<float>vec){
  float sred;
  if (vec.size() != 0) {
    for (int i = 0; i < (int) vec.size(); i++) {
      sred += vec[i];
    }
    return sred/vec.size();
  }
  else
  {
    return 0;
  }
}