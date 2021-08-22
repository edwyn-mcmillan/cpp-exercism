#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>

namespace nucleotide_count {
	std::map<std::string, int>  reference;

	int counter(std::string input);
}  

#endif // NUCLEOTIDE_COUNT_H