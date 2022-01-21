// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector < int > & input) {
  int k = 0;
  for (int & i : input) {
    if (i < 0) {
      input.erase(input.begin() + k);
      break;
    }
    k++;
  }
}

void remove_last_even(std::vector < int > & input) {
  int k = 0;
  int d = 0;
  int tr = 0;
  for (int & i : input) {
    if (i % 2 == 0) {
      d = k;
      tr = 1;
    }
    k++;
  }

  if (tr == 1) {
    input.erase(input.begin() + d);
  }
}
