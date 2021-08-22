#include "nucleotide_count.h"
#include <map>
#include <string>
#include <stdexcept>

namespace nucleotide_count {
	counter::counter(std::string input) {

	   reference = { {"A", 0}, {"C", 0}, {"G", 0}, {"T", 0} };

	   int n = input.length();
	   char char_array[n + 1];
	   strcpy(char_array, input.c_str());

		for (int i = 0; i < input.length(); i++) {
			char character = input[i];
			reference[character]++;
		}
	}

	std::map<char, int> counter::nucleotide_counts() const {
		return reference;
	}

	int counter::count(char c) const {
		if (!reference.count(c)) {
			throw std::invalid_argument("Invalid  nucleotide");
		}

		return reference.at(c);
	}

} 
