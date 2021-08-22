#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {

	int square_of_sum(int input) {
		int sum = input * (input + 1) / 2;
		int result = pow(sum, 2);
		return result;
	}

	int sum_of_squares(int input) {
		return (input * (input + 1) * (2 * input + 1)) / 6;
	}

	int difference(int input) {
		return square_of_sum(input) - sum_of_squares(input);
	}

}  // namespace difference_of_squares
