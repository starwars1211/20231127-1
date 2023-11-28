#include "SimpleEngin.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	SimpleEngin* MyEngine = SimpleEngin::GetInstance();

	MyEngine->LoadLevel("Data/level01.smap");
	MyEngine->Run();

	delete MyEngine;
    
    /*
    string line;
    ifstream file("level01.smap");
    if (file.is_open())
    {
        while (getline(file, line))///getline ���� �о��
        {
            cout << line << endl;
        }
        file.close();
    }
    */





	return 0;
}