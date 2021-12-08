#include "../tests/lab05.hpp"

void sort(std::vector<float>& vec){

  for(int i =0;i<(int)vec.size();i++){
    for (int j = i+1; j<(int)vec.size();j++){
      if (vec[i]>vec[j]){
        int buf;
        buf = vec[i];
        vec[i] = vec[j];
        vec[j] = buf;
      }
    }

  }
}