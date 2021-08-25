#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <string>
#include <map>

namespace space_age {

	class space_age {
	public:
		space_age(double input);
		double secondsInput;
		double seconds() const;

		double orbitalPeriodInEarthYears(double period) const;

		double on_earth() const;
		double on_mercury() const;
		double on_venus() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;
	};
}

#endif // SPACE_AGE_H