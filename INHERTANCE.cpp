#include<iostream>
using namespace std;
class point
{
	protected:
		int a,b;
	point(int x, int y)
	{
		a=x;y=b;
		cout<<" POINT CONSTRUCTOR CALLED "<<endl;
	}
	void print()
	{
		cout<<" x and y is :: "<<a<< " "<<b;
	}
	~point()
	{
		cout<<"\n point destructor called ";
	}
};
class circle:public point
{
	private :
		int radius ;
	public:
		circle(int a,int b,int r):point(a,b)
		{
			radius=r;
			cout<<" CIRCLE CONSTRUCTOR CALLED "<<endl;
			}	
		void print()
		{
			point::print();
			cout<<"\n radius == "<<radius<<endl;
		}
	~circle()
	{
		cout<<" CIRCLE DESTRUCTOR CALLED "<<endl;
	}
};
class cylinder:public circle
{
	private:
		int heigth;
	public:
		cylinder(int a,int b,int c,int d):circle(a,b,c)
		{
			
			heigth=d;cout<<" CYLINDER CONSTRUCTOR CALLED "<<endl;
		}
		void print()
		{
			circle::print();
			cout<<" HEIGTH :: "<<heigth<<endl;
		}
	~cylinder()
	{
		cout<<" CYLINDER DESTRUCTOR CALLED "<<endl;
	}
};
int main()
{
	cylinder c1(2,3,4,5);
	return 0;
}