#include "../tests/lab05.hpp"

void sort(std::vector<float>& vec){
  for (int i = 0; i < (static_cast<int> (vec.size())); i++){
    for (int j = i+1; j < (static_cast<int> (vec.size())); j++){
      if (vec[i] > vec[j]){
        int buf;
        buf = vec[i];
        vec[i] = vec[j];
        vec[j] = buf;
      }
    }
  }
}
