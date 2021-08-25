#include "space_age.h"



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

	// Construct space_age to get seconds input.
	space_age::space_age(double input) {
		secondsInput = input;
	};

	// Assign seconds to input.
	double space_age::seconds() const {
		return secondsInput;
	}

	double space_age::orbitalPeriodInEarthYears(double period) const {
		return ((secondsInput / planet["Earth"]) / period);
	};


	double space_age::on_earth() const {
		return orbitalPeriodInEarthYears(1);
	}
	double space_age::on_mercury() const {
		return orbitalPeriodInEarthYears(planet["Mercury"]);
	}
	double space_age::on_venus() const {
		return orbitalPeriodInEarthYears(planet["Venus"]);
	}
	double space_age::on_mars() const {
		return orbitalPeriodInEarthYears(planet["Mars"]);
	}
	double space_age::on_jupiter() const {
		return orbitalPeriodInEarthYears(planet["Jupiter"]);
	}
	double space_age::on_saturn() const {
		return orbitalPeriodInEarthYears(planet["Saturn"]);
	}
	double space_age::on_uranus() const {
		return orbitalPeriodInEarthYears(planet["Uranus"]);
	}
	double space_age::on_neptune() const {
		return orbitalPeriodInEarthYears(planet["Neptune"]);
	}
}
