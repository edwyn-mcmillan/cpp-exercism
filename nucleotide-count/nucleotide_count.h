#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>

namespace nucleotide_count {
	class counter {
	private:
	    std::map<std::string, int>  reference;
		
	public:
		counter(std::string input);
		std::map<char, int> nucleotide_counts() const;
		int count(char c) const;

	};
}  

#endif // NUCLEOTIDE_COUNT_H