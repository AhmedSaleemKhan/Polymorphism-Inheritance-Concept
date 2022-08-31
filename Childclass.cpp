//NAME:: AHMED SALLEM 
// CLASS :: COMPUTER SCCIENCE
//SUMBITTEEDD TO :: SIR KHURAM ENGINIER 
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		int year,mileage;
		string  model,color;
	
		Vehicle()
		{
			color=nullptr;
			model=nullptr;
			year=mileage=0;
		}
		Vehicle(string m,int y,int mi,string c)
		{
			model=m;
			year=y;
			if(mi>0)
				mileage=mi;
			else
				mileage=0;
			color=c;
			
		}
		void set_model(string m)
		{
			model=m;
		}
		void set_year(int y)
		{
			year=y;
		}
		void set_mileage(int mi)
		{
			mileage=mi;
		}
		void set_color(string c)
		{
			color=c;
		}
		string get_model()
		{
			return model;
		}
		int get_year()
		{
			return year;
		}
		int get_mileage()
		{
			return mileage;
		}
		string get_color()
		{
			return color;
		}
		virtual void details()
		{
			cout<<" WILL BE NOT CALLED "<<endl;
		}
};
class Car:public Vehicle
{
	public:
		Car(string m,int y,int mi,string c):Vehicle(m,y,mi,c)
		{
			
		}
		void change_model(string m)
		{
			model=m;
		}
		void change_year(int y)
		{
			year=y;
		}
		void details()
		{
			cout<<"\n THE CURRENT CAR IS "<<year<<" "<<color<<" "<<model<<" WITH "<<mileage<<" miles "<<endl;
		}
};
class Truck:public Vehicle
{
	int bed_size;
	public:
		Truck(string m,int y,int mi,string c, int s):Vehicle(m,y,mi,c)
		{
			bed_size=s;
		}
		void set_bed_size(int s)
		{
			bed_size=s;
		}
		int get_bed_size()
		{
			return bed_size;
		}
		void change_size(int s)
		{
			bed_size=s;
		}
		void details()
		{
			cout<<"\n THE CURRENT TRUCK IS "<<year<<" "<<color<<" "<<model<<" WITH "<<mileage<<" MILES AND  "<<bed_size<<" -FOOT BED SIZE "<<endl;
		}
};
class Motorcycle:public Vehicle
{
	private:
		string bike_type;
	public:
		Motorcycle(string m,int y,int mi,string c,string b_type):Vehicle(m,y,mi,c)
		{
			bike_type=b_type;
		}
		void set_bed_size(string b_type)
		{
			bike_type=b_type;
		}
		string get_bed_size()
		{
			return bike_type;
		}
		void change_type(string type)
		{
			bike_type=type;
		}
		void details()
		{
			cout<<"\n THE CURRENT BIKE IS "<<year<<" "<<color<<" "<<model<<" "<<bike_type<<" WITH "<<mileage<<" MILES AND  "<<bike_type<<" -FOOT BED SIZE "<<endl;
		}
		
};
int main()
{
	Car c1(" PORSCHE 911 ",2005,20000," SILVER ");
	Car c2(" FORD MUSTANG ",2007,45000," RED ");
	Car c3(" VOLTZ-WAGON JEETA ",2006,350000," BLACK ");
	Truck t1(" FORD F150 ",2007,230000," WHITE ",10);
	Truck t2(" TOYOTA TACOMA ",2002,76000," BLUE ",12);
	Motorcycle m1(" KAWASAKI ",2004,4300," BLACK "," NINJA ");
	Motorcycle m2(" HARLEY ",2002,1200," SILVER "," CHEROKEE ");
	Motorcycle m3(" HONDA CBR ",2008,9800," RED "," 1500CC ");
	
	cout<<"\n\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<WELCOME TO VEHICLES CHORME >>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	Vehicle *v1[8];
	v1[0]=&c1;v1[1]=&c2;v1[2]=&c3;v1[3]=&t1;v1[4]=&t2;v1[5]=&m1;v1[6]=&m2;v1[7]=&m3;
	for(int i=0;i<8;i++)
	{
		v1[i]->details();
	}
	cout<<"\n\t\t_____________________________________________________________________________________"<<endl;
	cout<<"\n\n\n\t IF YOU WANNA CHANGE MODEL OF CAR :: ENTER 1 FOR CHANGING & NO ENTER 0 ::  ";
	int choice;
	cin>>choice;
	string model;
	if(choice==1)
	{
		cout<<"\nENTER NEW MODEL OF CAR 1 :: ";
		cin>>model;
		c1.change_model(model);
	}
	cout<<"\n AFTER CHANGING MODEL  :: "<<endl;
	v1[0]->details();
	cout<<"\n\t\t__________________________________________________";
	cout<<"\n\n\n\t IF YOU WANNA CHANGE bedsize OF TRUCK :: ENTER 1 FOR CHANGING & NO ENTER 0 :: ";
	int choice1;
	cin>>choice1;
	
	int size;
	if(choice1==1)
	{
		cout<<" \nENTER NEW BEDSIZE OF TRUCK 1 :: ";
		cin>>size;
		t1.change_size(size);
	}
	cout<<"\n AFTER CHANGING BEDSIZE OF TRUCK   :: "<<endl;
	v1[3]->details();
	cout<<"\n\t\t__________________________________________________";
	cout<<"\n\n\n\t IF YOU WANNA CHANGE TYPE OF BIKE :: ENTER 1 FOR CHANGING & NO ENTER 0 :: ";
	int choice2;
	cin>>choice2;
	
	string type;
	if(choice2==1)
	{
		cout<<" \nENTER NEW TYPE OF BIKE 1 :: ";
		getline(cin,type);
		cin.ignore();
		m1.change_type(type);
	}
	cout<<"\n AFTER CHANGING TYPE OF BIKE   :: "<<endl;
	v1[5]->details();
	
	
	cout<<"\n\t\t__________________________________________________";
	cout<<"\n\n\n\t IF YOU WANNA CHANGE YEAR OF CAR :: ENTER 1 FOR CHANGING & NO ENTER 0 :: ";
	int choice12;
	cin>>choice12;
	
	cin.ignore();
	int year;
	if(choice12==1)
	{
		cout<<" \nENTER NEW YEAR FOR CAR 1 :: ";
		cin>>year;
		c1.change_year(year);
	}
	cout<<"\n AFTER CHANGING YEAR OF CAR   :: "<<endl;
	v1[0]->details();
	cout<<"\n\n\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<PROGRAM ENDS>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

	return 0;
}
