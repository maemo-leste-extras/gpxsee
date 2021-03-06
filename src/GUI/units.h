#ifndef UNITS_H
#define UNITS_H

enum Units {
	Metric,
	Imperial,
	Nautical
};

#define M2KM     0.001000000000  // m -> km
#define M2MI     0.000621371192  // m -> mi
#define M2NMI    0.000539956803  // m -> nmi
#define M2FT     3.280839900000  // m -> ft
#define MS2KMH   3.600000000000  // m/s -> km/h
#define MS2MIH   2.236936290000  // m/s -> mi/h
#define MS2KN    1.943844490000  // m/s -> kn
#define MS2FTMIN 196.8503937008  // m/s -> ft/min
#define MS2MMIN  60.00000000000  // m/s -> m/min
#define FT2MI    0.000189393939  // ft -> mi
#define MM2IN    0.039370100000  // mm -> in
#define MM2CM    0.100000000000  // mm -> cm
#define H2S      0.000277777778  // h -> s
#define MIN2S    0.016666666667  // min -> s

#define KMINM    1000.0      // 1 km in m
#define MIINFT   5280.0      // 1 mi in ft
#define NMIINFT  6076.11549  // 1 nm in ft
#define MIINM    1609.344    // 1 mi in m
#define NMIINM   1852.0      // 1 nmi in m
#define MININS   60.0        // 1 min in s
#define HINS     3600.0      // 1 hins

#define C2FS    1.8  // Celsius to Farenheit - scale
#define C2FO    32.0 // Celsius to Farenheit - offset

#define UNIT_SPACE     QString::fromUtf8("\xE2\x80\x89")

#endif // UNITS_H
