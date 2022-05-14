#include <iostream>
using namespace std;

const  double pi{3.1415926};
//Function prototypes

double calc_area_circle(double radius);
double calc_volume(double radius, double height);
void area_circle();
void area_cylinder();
//
//Calling the function
int main(){
	area_circle();
	area_cylinder();
	return 0;}
	
	
double calc_area_circle(double radius){
	
	return radius*radius*pi ;
}
double calc_volume(double radius, double height){
	return pi*radius*radius*height;
}

void area_circle(){
	double radius{0};
	cout<<"Enter radius of the circle"<<endl;
	cin>>radius;
	cout<<"the area of a circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
	
}
void area_cylinder(){
	double radius{0};
	double height{0};
	cout<<"Enter the height of the circle"<<endl;
	cin>>height;
	cout<<"the radius of the cylinder is "<<endl;
	cin>>radius;
	
	
	cout<<"the area of the cylinder with height and radius is "<<height<<radius<<" is "<<calc_volume(radius,height);
}

	
	

