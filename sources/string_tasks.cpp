// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string & name) {
  if (name.size() % 2 == 0) {
    return true;
  }

  return false;
}

// Task 6.
bool first_is_longer(const std::string & name_one,
  const std::string & name_two) {
  if (name_one.size() > name_two.size()) {
    return true;
  }
  return false;
}

// Task 7.
void longest_shortest(const std::string & name_one,
  const std::string & name_two,
    const std::string & name_three, std::string & the_longest,
      std::string & the_shortest) {
  if ((name_one > name_two) &&(name_two > name_three)) {
    the_longest = name_one;
    the_shortest = name_three;
  } else if ((name_one > name_two) &&(name_two < name_three)) {
    the_longest = name_one;
    the_shortest = name_two;
  } else if ((name_one < name_two) &&(name_two < name_three)) {
    the_longest = name_three;
    the_shortest = name_one;
  } else if ((name_one > name_two) &&(name_one < name_three)) {
    the_longest = name_three;
    the_shortest = name_two;
  } else if ((name_one < name_two) &&(name_one > name_three)) {
    the_longest = name_two;
    the_shortest = name_three;
  } else if ((name_three < name_two) &&(name_one < name_three)) {
    the_longest = name_two;
    the_shortest = name_one;
  }
}

// Task 8.
std::string sub_str(const std::string & word, int m, int n) {
std::string res;
  for (int i = m; i <= n && i < word.size(); i++) {
    res += word[i];
  }
  if (n - m >= 0) {
    return res;
  } else {
    return "";
  }
}

// Task 9.
void add_stars(std::string & word) {
  int k;
  k = word.size();
  std::string res;
  for (int i = 0; i < k; i++) {
    res += "*";
  }
  res += word;
  for (int i = 0; i < k; i++) {
    res += "*";
  }
  word = res;
}

// Task 10.
int percent_of_a(const std::string & word) {
  double co;
  co = 0;

  for (char i : word) {
    if (i == 'a') {
      co++;
    }
  }
  return co / (word.size()) * 100;
}

// Task 11.
std::string replace_can(const std::string & new_word) {
  std::string can;
  std::string temp;
  temp = "Can you can a can as a canner can can a can?";
  can = "can";
  int pos = 0;
  while (temp.find(can) != std::string::npos) {
    temp.replace(temp.find(can), 3, new_word);
  }
  return temp;
}
