#include<iostream>
using namespace std;

class A
{
	 
		protected:	int x;
	protected:  
				int y;
	public: A()
	{
		x=5;
		y=6;
	}
};

class B : public A
{
	private:
		int z;
		
	public:		
		void setx(int d)
		{
		
		 x=d;
		 
	}
	int getx()
	{
		return x;
	}
};

int main()
{
	B obj;
	obj.setx(10);
	cout<<obj.getx()<<endl;
	A obj1;
	//cout<<obj1.x<<endl;
}

