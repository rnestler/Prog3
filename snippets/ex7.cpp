// timer.h

#ifndef TIMER_H_
#define TIMER_H_
#include <chrono>
std::chrono::microseconds time_func(void  (f)());
#endif /* TIMER_H_ */

//timer.cpp

#include "timer.h"

std::chrono::microseconds time_func(void  (f)()){
	std::chrono::high_resolution_clock clock{};
	auto start=clock.now();
		f();
	auto end = clock.now();
	return end - start;
}

//example for main.cpp

#include "timer.h"
#include <iostream>
#include <forward_list>
#include <list>
#include <deque>
#include <vector>

size_t const SZ{100000};
void fill_vector(){
    size_t size{SZ};
    std::vector<int> v{};
    while (size--) {
        v.push_back(size);
    }
}

int main(){
    std::cout << time_func(fill_vector).count() << "us - vector push_back\n";
}

