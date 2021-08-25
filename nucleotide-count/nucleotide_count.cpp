#include "nucleotide_count.h"
#include <map>
#include <string>
#include <stdexcept>

namespace nucleotide_count {

	counter::counter(std::string input) {
		for (char& nucleotide : input) {
			if (nucleotide == 'A' || nucleotide == 'C' || nucleotide == 'G' || nucleotide == 'T')
				this->nucleotide_count_reference[nucleotide]++;
			else
				throw std::invalid_argument("not a valid nucleotide.");
		}
	}

	std::map<char, int> counter::nucleotide_counts() const {
		return this->nucleotide_count_reference;
	}

	int counter::count(char nucleotide) const {
		if (nucleotide == 'A' || nucleotide == 'C' || nucleotide == 'G' || nucleotide == 'T')
			return this->nucleotide_count_reference.at(nucleotide);
		else
			throw std::invalid_argument("not a valid nucleotide.");
	}
}
