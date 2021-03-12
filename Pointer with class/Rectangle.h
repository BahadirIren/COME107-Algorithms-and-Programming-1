using namespace std;
class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle(){};
	Rectangle(int l, int br)
	{
		length = l;
		breadth = br;
	}
	int getArea()
	{
		return length*breadth;
	}
};