#ifndef BOUNDEDBUFFER_H_
#define BOUNDEDBUFFER_H_

#include <array>
template <typename T, unsigned MAX>
struct Bounded_queue{
	using bounded_queueType = std::array<T,MAX>;
	using size_type=typename bounded_queueType::size_type;
	using const_reference=typename bounded_queueType::const_reference;
	bounded_queueType que{};
public:
	Bounded_queue()=default;
	T operator[] (int pos) {return que[pos];}
	const_reference front() const{return que.front();}

	bool empty() const{return que.empty();}
	size_type size() const;

	void push(const T& value) {
		if(numberOfElements<MAX)
		{
			que[nextpushposition]=value;
			nextpushposition++;
			nextpushposition = nextpushposition%MAX;
			numberOfElements++;
		}
		else
		{
			throw std::logic_error("Geht nicht!");
		}
	}
	T pop() {
			if(numberOfElements>0)
			{
				T popIt=que[nextpopposition];
				nextpopposition++;
				nextpopposition=nextpopposition%MAX;
				numberOfElements--;
				return popIt;
			}
			else
			{
				throw std::logic_error("Geht nicht!");
			}
		}
	bool full(){
		return numberOfElements==MAX;
	}
private:
	unsigned nextpushposition=0;
	unsigned nextpopposition=0;
	unsigned numberOfElements=0;


};

#endif


