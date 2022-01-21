// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

#include <cmath>


// Task 1.
void multi_2(std::vector < int > & input) {
  for (int & i: input) {
    i *= 2;
  }

}

void reduce_a(std::vector < int > & input, int a) {
  for (int & i: input) {
    i -= abs(a);
  }
}

void div_on_first(std::vector < int > & input) {
  int k = 0;
  k = input[0];
  for (int & i: input) {
    i /= k;
  }
}
