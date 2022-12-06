#include <iostream>
#define _USE_MATH_DEFINES // M_PI
#include <cmath>

int count = 0;

struct RegularPolygon {
	
private:
	int n;
	double angle;

public:
	RegularPolygon(int n){
		this->n = n;
		angle = 2 * M_PI/n;
		count++;
	}
	
	~RegularPolygon(){
		count--;
	}
	
	int getCount(){
		return count;
	}
	
	double area(double length){
		std::cout << "tan: " << tan(angle/2) << std::endl;
		return n * length * length / tan(angle/2) / 4;
	}
	
	double length(double area){
		return sqrt(4 * area * tan(angle / 2) / n);
	}
};

int main(){
	RegularPolygon square(4);
	RegularPolygon hexagon(6);
	std::cout << square.area(1) << std::endl;
	std::cout << square.length(25) << std::endl;
	std::cout << square.getCount();
}
