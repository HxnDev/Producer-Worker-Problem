#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc > 2 or argc <= 1)		//Terminates process if arguments not provided
	{
		exit(0);
	}
	
	else
	{
		int num = stoi(argv[1]);	//Stores argument after converting it into integer
		
		for (int i=0; i<num; i++)
		{
			char* x = new char;
			char* y = new char;
			
			cout<< "Enter the value for x = ";
			cin>> *x;
			cout<< "Enter the value for y = ";
			cin>> *y;
			
			pid_t pid = fork();
			
			if (pid >0)
			{
							// Parent process
				wait(NULL);
			}
			
			else if (pid ==0)
			{
							//Child Process
				if (!execl("worker", "worker", x, y,NULL))
					cout << "Exec failed" << endl;
			}
		}
	}
}
