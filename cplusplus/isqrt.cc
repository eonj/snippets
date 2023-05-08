#include <concepts>
using ::std::integral;

template<integral T>
T isqrt(T n) {
	// floor of sqrt without rounding
	if (n < 0) return 0;
	if (n <= 1) return n;
	T x0 = n / 2;
	T x1 = (x0 + n / x0) / 2;
	while (x1 < x0) {
		x0 = x1;
		x1 = (x0 + n / x0) / 2;
	}
	return x0;
}
