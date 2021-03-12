using namespace std;
class Calculations
{
private:
	static const int arraySize = 10;
	int numbers[arraySize];
public:
	Calculations(int n[]);
	int largest();
	int smallest();
	int findKLargest(int k);
	int mostOccuringElement();
	void separateEvenOdd();
};