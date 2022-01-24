#include "../tests/lab05.hpp"
float argmax(const std::vector<float>& vec){
  int max_i;
  int max_val;
  int n;
  n = vec.size();
  if (vec.size() == 0){
    return -1;
  } else {
    max_i = 0;
    max_val = vec[0];
    for(int i = 0;i < n; i++){
      if (vec[i] > max_val){
        max_val = vec[i];
        max_i = i;
      }
    }
    return max_i;
  }
}
