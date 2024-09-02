#include <iostream>
#include <new>
#include <string>

using namespace std;

const int BUF = 512;

class Test
{
	private:
		string words;
		int num;
	public:
		Test(const string& s= "Just Testing", int n = 0)
		{
			words = s;
			num = n;
			cout << words <<  " constructed\n";
		}
		~Test()
		{
			cout << words << " destroyed!\n";
		}
		void show() const 
		{
			cout << words << " , " << num << endl;
		}
};

int main()
{
	char *buffer = new char[BUF];
	Test *pc1, *pc2;
	
	pc1 = new (buffer) Test;  // place object in buffer
	pc2 = new Test("Heap1", 20);

	cout << "Memory block addresses:\n" 
		<< "buffer: " 
		<< (void *) buffer 
		<< "  heap: " 
		<< pc2 
		<< endl;
	cout << "Memory contents;\n";
	cout << pc1 << ": ";
	pc1 -> show();
	cout << pc2 << ": ";
	pc2 -> show();

	Test *pc3, *pc4;

	pc3 = new (buffer) Test("Bad Idea", 6);
	pc4 = new Test("Heap2", 10);
	
	cout << "Memory contents\n";
	cout << pc3 << ": ";
	pc3 -> show();
	cout << pc4 << ": ";
	pc4 -> show();

	delete pc2;
	delete pc4;
	delete []  buffer;

	cout << "Done\n";
	
	
	return (0);
}
