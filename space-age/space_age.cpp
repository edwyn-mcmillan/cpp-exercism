#include "space_age.h"
#include <string>
#include <map>

namespace space_age {

	std::map<std::string, double> planet{
  { "Mercury", 0.2408467 },
  { "Venus", 0.61519726 },
  { "Earth", 31557600 },
  { "Mars", 1.8808158 },
  { "Jupiter", 11.862615 },
  { "Saturn", 29.447498 },
  { "Uranus", 84.016846 },
  { "Neptune", 164.79132 },
	};

	class space_age {
	public:
		space_age(int input) {
			int seconds = input;
		}
	};

	int orbitalPeriodInEarthYears(int period) {
		return ((space_age.seconds / planet["Earth"]) / period).toFixed(2);
	};



}
