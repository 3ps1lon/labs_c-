#include <vector>
#include <string>
#include <numeric>
//Task 1
float mean(const std::vector<float> vec);

//Task 2
std::pair<float, float> minMax(const std::vector<float>& vec);

//Task 3
float argmax(const std::vector<float>& vec);

//Task 4
void sort(std::vector<float>& vec);

//Task 5
bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element);

//Task 6
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);

//Task 7
std::vector<std::string> split(const std::string& str, char sep);

//Task 8
std::string join(const std::vector<std::string>& str, const std::string& sep);
