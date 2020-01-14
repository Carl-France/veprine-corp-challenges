  std::string word;
  std::cout << "\n"
  	    << "**************************" << "\n"
            << "**    Palindrome Time   **" << "\n"
            << "**************************" << "\n\n"
            << "Type a word to test it: ";
  std::cin >> word;

  //create the reversed word
  std::string reversed_word;

  for (int i = word.length() - 1; i >= 0; i--){
      reversed_word.push_back(word[i]);
  }

  //test if word matches reversed word
  if (word == reversed_word){
  	std::cout << word << " IS a palindrome." << "\n";
  }

  else {std::cout << word << " IS NOT a palindrome." << "\n\n";}

	return 0;
}
