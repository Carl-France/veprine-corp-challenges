#include <iostream>
#include <vector>

int main (){
  
  //get a string to test from the user
  std::string word;
  std::cout << "\n"
  			<< "**************************" << "\n"
            << "**    Palindrome Time   **" << "\n"
            << "**************************" << "\n\n"
            << "Type a word to test it: ";
  std::cin >> word;

  //create the reversed string
  std::string reversed_word;

  for (int i = word.length() - 1; i >= 0; i--){
      reversed_word.push_back(word[i]);
  }

  if (word == reversed_word){
  	std::cout << word << " IS a palindrome." << "\n";
  }

  else {std::cout << word << " IS NOT a palindrome." << "\n";}

	return 0;
}