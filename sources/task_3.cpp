// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector < int > & input) {

  for (int i = 0; i < 3; i++) {
    int buf = input[17 + i];
    input[17 + i] = input[i];
    input[i] = buf;

  }
}
