#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void print_vector(std::vector<int> vector) {
  std::cout << "It took you " << vector.size() << " tries to guess !"
            << std::endl;
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << "\t";
  }
  std::cout << std::endl;
}

void save_score(int guess_count, int best_score) {
  std::ofstream file("best_score.txt");
  if (file.is_open()) {
    if (guess_count < best_score) {
      std::cout << "New Best Score: " << guess_count << " !!" << std::endl;
      file << guess_count;
    } else {
      file << best_score;
    }
  } else {
    std::cout << "Unable to write to best_score.txt \n";
    return;
  }
  file.close();
}

int read_score() {
  int best_score;
  std::ifstream file("best_score.txt");
  if (file.is_open()) {
    file >> best_score;
  } else {
    std::cout << "Unable to read best_score.txt \n";
    return -1;
  }
  file.close();
  return best_score;
}

void play_game() {
  int random = rand() % 251;
  int best_score = read_score();
  std::vector<int> guesses;

  std::cout << "Guess a number between 0 and 250: ";

  while (true) {
    int guess;
    std::cin >> guess;
    guesses.push_back(guess);

    if (guess == random) {
      std::cout << "You win!\n";
      break;
    } else if (guess < random) {
      std::cout << "Too low, guess again: \n";
    } else {
      std::cout << "Too high, guess again: \n";
    }
  }

  save_score(guesses.size(), best_score);
  print_vector(guesses);
}

int main() {
  int choice;
  /* initialize random seed: pass the system clock as an argument */
  srand(time(NULL));

  do {
    std::cout << "0. Quit\n1. Play Game\n";
    std::cin >> choice;

    switch (choice) {
      case 0:
        std::cout << "Thanks for playing.\n";
        return 0;
      case 1:
        play_game();
        break;
    }
  } while (choice != 0);
}
