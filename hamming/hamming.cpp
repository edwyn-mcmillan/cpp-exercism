#include "hamming.h"
#include <stdexcept>

namespace hamming {

    int compute (std::string dna1, std::string dna2) {
		if (dna1.length() != dna2.length()) {
			throw std::domain_error("DNA Strands must be equal length.");
		}

	    int hammingCount = 0;
		for (int i = 0; i < dna1.length(); i++) {
			dna1[i] == dna2[i] ? NULL : hammingCount++;
		}   
		return hammingCount;
	}
}
