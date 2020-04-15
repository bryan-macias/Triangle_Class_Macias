//Bryan Macias Quiz 3 4/14/2020
//Dr.T COSC 1437
//this program demonstrates a simple class
#include <iostream>
using namespace std;

//declaring the rectangle class. this will allow us to eventually make a whole bunch of different rectangles
class Triangle
{
	private:
		double base;
		double height;
	public:
		void setBase(double);
		void setHeight(double);
		double getBase() const;
		double getHeight() const;
		double getArea() const;
};
//a function that allows us to set the width of a given rectangle
void Triangle::setBase(double b)
{
	base = b;
}
//a function that allows us to set the length of a given rectangle
void Triangle::setHeight(double h)
{
	height = h;
}

//a function that returns the width of a given rectangle
double Triangle::getBase() const
{
	return base;
}
//a function that returns the length of a given rectangle
double Triangle::getHeight() const
{
	return height;
}
//a function that calculates and returns the area of a given rectangle
double Triangle::getArea() const
{
	return (base * height) / 2 ;
}

int main()
{
	double number; //declare local variables for temporary storage of numbers
	double totalArea;
	Triangle copper; //three different instances of the rectangles with different properties
	Triangle steel;
	Triangle alum;

	cout << "Welcome to the custon triangle metal cutter program." << endl;
	cout << "What is the Copper sheet base?\t"; //ask user for input about kitchen
	cin >> number;
	copper.setBase(number); //set the length of kitchen
	cout << "What is the Copper sheet height?\t"; //ask user for input about kitchen
	cin >> number;
	copper.setHeight(number); //set the width of kitchen
	
	cout << "What is the Steel sheet base?\t"; //ask user for input about bedroom
	cin >> number;
	steel.setBase(number); //set the length of bedroom
	cout << "What is the Steel sheet height?\t"; //ask user for input about bedroom
	cin >> number;
	steel.setHeight(number); //set the width of bedroom
	
	cout << "What is the Aluminium sheet base?\t"; //ask user for input about den
	cin >> number;
	alum.setBase(number); //set the length of den
	cout << "What is the Aluminium sheet height?\t"; //ask user for input about den
	cin >> number;
	alum.setHeight(number); //set the width of den
	
  cout << "\nThe area for the copper trangle is: " << copper.getArea() << endl;
  cout << "The area for the steel trangle is: " << steel.getArea() << endl;
  cout << "The area for the aluminium trangle is: " << alum.getArea() << endl;

	totalArea = copper.getArea() + steel.getArea() + alum.getArea(); //get individual areas of each and add
	
	cout << "\nThe total area of the three triangles is: " << totalArea << endl; //output total area to user
	
	return 0; //done
}