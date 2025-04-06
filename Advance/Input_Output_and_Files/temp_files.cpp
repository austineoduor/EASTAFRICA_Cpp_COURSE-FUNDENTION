#include <iostream>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <cstdlib>
#include <stdexcept>
#include <string>

int main ()
{
	using namespace std;
	int n, fd;

	//cout << "This system can produce up to " << TMP_MAX
	  //     << " temporary file namesof up to " << L_tmpnam 
	    //   << " characters." 
	      // << endl;

	cout << "Here are 3 names for file" << endl;
	
	for (n = 0; 3 > n; n++)
	{	
	char pszName[] = "fileXXXXXX";
		try
		{
			fd = mkstemp(pszName);

			if (fd == -1)
			{
				throw runtime_error ("Fail to create temporary file");
			}
			else
			{
				cout << n << ": ";
				cout << pszName << ": ";
				string data = "Hello from loop:" + to_string(n);
				int len = data.length();
				char* data1 = new char[len + 1];
				strcpy(data1, data.c_str());
				
				cout << "data ->" << data << endl;
				write(fd, data1, len);
				close(fd);
				delete[] data1;
			}
		}
		catch(const exception &e) 
		{
			cerr <<"Caught error  " << e.what() << endl;
			exit(EXIT_FAILURE);
		}
	}


	/*fd= mkstemp(pszName);
	cout << "fd is " <<fd <<endl;
	if (fd == -1)
	{
		cerr << "Failed to create temporary file" << endl;
		return (1);
	}
	cout << "File name is: " << pszName << endl;

	const char* data = "Hello World";
	write(fd, data, strlen(data));
	close(fd);*/

	return (0);	
}
