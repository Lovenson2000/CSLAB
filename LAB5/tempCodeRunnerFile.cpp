#include <iostream> // Online C++ compiler to run C++ program online
#include <iomanip>
using namespace std;

// A sample function whose time taken to
// be measured
void fun()
{
	cout << "Hello World" << endl;
}

int main()
{

	clock_t start, end;

	/* Recording the starting clock tick.*/
	start = clock();

	fun();

	// Recording the end clock tick.
	end = clock();

	// Calculating total time taken by the program.
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by program is : " << fixed 
		<< time_taken << setprecision(5);
	cout << " sec " << endl;
	return 0;
}
