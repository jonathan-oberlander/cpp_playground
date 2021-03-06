#include <iostream>
#include <string>

/*
  the string class in C++ is superior to classic C strings
  C strings are string literals
  char name[] = "Jonathan"; // c string == array of character
  name = "tacobell"; // char array can't be mofied
*/

using std::string;

// declarations -------------------------------------------------------
string censor_string(string, string);

// main ---------------------------------------------------------------
int main()
{
  string greeting = "hello";
  std::cout << greeting << std::endl;
  std::cout << greeting[0] << std::endl;
  std::cout << greeting + " there" << std::endl;

  string complete_greeting = greeting + " world";
  complete_greeting += "!";
  std::cout << complete_greeting << std::endl;

  // string class has plenty of methods too
  std::cout << complete_greeting.length() << std::endl;
  std::cout << complete_greeting.size() << std::endl; // the same as length()

  // some methods are modifiers
  string some_string = "Waddup";
  some_string.append(" Dawg!");
  std::cout << some_string << std::endl;

  some_string.insert(3, "||");
  std::cout << some_string << std::endl;

  some_string.erase(some_string.length() - 4, 3);
  std::cout << some_string << std::endl;

  some_string.pop_back();
  some_string.replace(0, 3, "Dope -> ");
  std::cout << some_string << std::endl;

  string sentence = "The bad word to censor.";
  string word = "bad";
  string censored_sentence = censor_string(sentence, word);
  std::cout << censored_sentence << std::endl;

  // its also possible to use substrings
  string grab_a_word = sentence.substr(4, 3);
  std::cout << grab_a_word << std::endl;

  int get_index = sentence.find_first_of("aeiou");
  char first_vowel_in_sentence = sentence[get_index];
  std::cout << first_vowel_in_sentence << std::endl;

  // find methods use npos
  std::cout << sentence.find_first_of("!") << std::endl; // -> huge number !!
  // that is because the unfound npos returns -1
  // and because the npos is unsigned long, it wraps around the max value
  unsigned long x = -1; // its an npos
  std::cout << x << std::endl;

  if (sentence.find_first_of("!") == -1)
  {
    std::cout << "NOT FOUND !!" << std::endl;
  }

  // dont use that one but it exists...
  if (grab_a_word.compare("bad") == 0)
  {
    std::cout << "Equals" << std::endl;
  }
}

// definitions -------------------------------------------------------

// function to censor a specific words in a sentence
string censor_string(string sentence, string word)
{
  int word_index = sentence.find(word);
  int word_length = word.length();
  return sentence.replace(word_index, word_length, "****");
}
