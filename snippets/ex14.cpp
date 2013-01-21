// UDL operator for length dimensions in meters:

#include <iostream>

namespace distance_in_meters {
	constexpr double operator"" _m(long double x){
		return x;
	}
	constexpr double operator"" _m(unsigned long long x){
		return x;
	}
	constexpr double operator"" _km(long double x){
		return x*1000_m;
	}
	constexpr double operator"" _km(unsigned long long x){
		return x*1000_m;
	}
	constexpr double operator"" _mm(long double x){
		return x*0.001_m;
	}
	constexpr double operator"" _mm(unsigned long long x){
		return x*0.001_m;
	}
	constexpr double operator"" _nm(long double x){
		return x*0.001_mm;
	}
	constexpr double operator"" _nm(unsigned long long x){
		return x*0.001_mm;
	}
	constexpr double operator"" _mi(long double x){
		return x*1.609_km;
	}
	constexpr double operator"" _mi(unsigned long long x){
		return x*1.609_km;
	}
	constexpr double operator"" _ft(long double x){
		return x*304.8_mm;
	}
	constexpr double operator"" _ft(unsigned long long x){
		return x*304.8_mm;
	}
	constexpr double operator"" _yd(long double x){
		return x*3_ft;
	}
	constexpr double operator"" _yd(unsigned long long x){
		return x*3_ft;
	}
}

int main() {
	using namespace distance_in_meters;
	auto base=5_m;
	auto height=0.5_m;
	std::cout << "triangle area: " << base/2*height << " square meters\n";
}

