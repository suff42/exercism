#include "scrabble_score.h"

using namespace std;

namespace scrabble_score {

	int score(string player_word) {

		//string word = player_word;
		//int word_size = sizeof('a') / sizeof(char);
		//int word_size = word.size();
		int word_value = 0;

		if (player_word[0] == NULL) {
			return 0;
		}

		for (int x = 0; x < player_word.size(); x++) {

			if (player_word[x] == 'A' || player_word[x] == 'a' || player_word[x] == 'E' || player_word[x] == 'e' || 
				player_word[x] == 'I' || player_word[x] == 'i' || player_word[x] == 'O' || player_word[x] == 'o' || 
				player_word[x] == 'U' || player_word[x] == 'u' || player_word[x] == 'L' || player_word[x] == 'l' ||
				player_word[x] == 'N' || player_word[x] == 'n' || player_word[x] == 'R' || player_word[x] == 'r' || 
				player_word[x] == 'S' || player_word[x] == 's' || player_word[x] == 'T' || player_word[x] == 't') {
				word_value += 1;
			}
			else if (player_word[x] == 'D' || player_word[x] == 'd' || player_word[x] == 'G' || player_word[x] == 'g') {
				word_value += 2;
			}
			else if (player_word[x] == 'B' || player_word[x] == 'b' || player_word[x] == 'C' || player_word[x] == 'c' ||
				player_word[x] == 'M' || player_word[x] == 'm' || player_word[x] == 'P' || player_word[x] == 'p') {
				word_value += 3;
			}
			else if (player_word[x] == 'F' || player_word[x] == 'f' || player_word[x] == 'H' || player_word[x] == 'h' ||
				player_word[x] == 'V' || player_word[x] == 'v' || player_word[x] == 'W' || player_word[x] == 'w' ||
				player_word[x] == 'Y' || player_word[x] == 'y') {
				word_value += 4;
			}
			else if (player_word[x] == 'K' || player_word[x] == 'k') {
				word_value += 5;
			}
			else if (player_word[x] == 'J' || player_word[x] == 'j' || player_word[x] == 'X' || player_word[x] == 'x') {
				word_value += 8;
			}
			else if (player_word[x] == 'Q' || player_word[x] == 'q' || player_word[x] == 'Z' || player_word[x] == 'z') {
				word_value += 10;
			}
		}

		return word_value;

	}

}