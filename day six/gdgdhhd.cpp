#include <iostream>
#include <set>
#include <string>

int main() {
  std::string s = "abbbcdeabcdeabcde";
  std::set<char> unique_chars;  // Set to store the unique characters
int poz;
  // Iterate through the string
  for (size_t i = 0; i < s.size(); i++) {
    char c = s[i];
    // Insert the character into the set. If the character is already in the set,
    // it will not be inserted again.
    unique_chars.insert(c);

    // If the set contains four unique characters, break out of the loop
    if (unique_chars.size() == 4) {
     poz=i;
      break;
    }
  }

  std::cout << "Number of positions iterated: " << poz+1 << std::endl;
  std::cout << "Unique characters: ";
  for (char c : unique_chars) {
    std::cout << c << " ";
  }
  std::cout << std::endl;
}