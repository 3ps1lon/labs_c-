// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
    int su = 0;

    for (int i : input){
      su +=i;
    }

    return su;
}

int square_sum(const std::vector<int>& input) {
    int su = 0;

    for(int i: input){
      su += i*i;
    }

    return su;
}

int sum_six(const std::vector<int>& input) {
    int su = 0;

    for (int i = 0; i<6;i++){
      su += input[i];
    }
    return su;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int su = 0;

  for (int i = k1; i<=k2 ;i++){
    su += input[i];
  }
  return su;
}

int mean(const std::vector<int>& input) {

  int k = 0;
  int su = 0;

  for (int i : input){
    su +=i;
    k++;
  }
  su /=k;

  return su;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  int k = 0;
  int su = 0;

  for (int i = s1; i<=s2;i++) {
    su += input[i];
    k++;
  }
  su/=k;
    return su;
}
