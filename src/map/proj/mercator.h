#ifndef MERCATOR_H
#define MERCATOR_H

#include "map/ct.h"

class Ellipsoid;

class Mercator : public CT
{
public:
	Mercator(const Ellipsoid &ellipsoid, double latitudeOrigin,
	  double longitudeOrigin, double falseEasting, double falseNorthing);

	virtual CT *clone() const {return new Mercator(*this);}
	virtual bool operator==(const CT &ct) const;

	virtual PointD ll2xy(const Coordinates &c) const;
	virtual Coordinates xy2ll(const PointD &p) const;

private:
	double _a, _e;
	double _latitudeOrigin;
	double _longitudeOrigin;
	double _falseNorthing;
	double _falseEasting;
	double _scaleFactor;
	double _ab, _bb, _cb, _db;
};

#endif // MERCATOR_H
