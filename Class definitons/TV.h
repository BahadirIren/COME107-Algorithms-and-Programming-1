#include<string>
using namespace std;
class TV
{
private:
	string brand;
	int size;
	int price;
public:
	TV();
	void setBrand(string br);
	string getBrand();
	void setSize(int siz);
	int getSize();
	void setPrice(int pr);
	int getPrice();
	void print();
};