#include <iostream>

using namespace std;

string send_to_apache(const string ip_address,const string file_name)
{
	string command = "/usr/bin/curl -s --data-binary \"@";
	command += file_name;
	command += "\" -H \"Content-Type: application/x-www-form-urlencoded\" -X POST http://";
	command += ip_address;
	command += "/echo.php";
	FILE *pf = popen(command.c_str(),"r");

       if(pf){
		char data[10240];
       		fread(data,1, 10240 , pf);
       		pclose(pf);
		command = data;
	} else command = "error";
	return command;
//curl -d "@/Users/kmsobh/work/AUC/AUC_Adjunct/Courses/Spring_2018/CSCE-110/code/files/test.txt" -H "Content-Type: application/x-www-form-urlencoded" -X POST http://192.168.56.102/echo.php

}

int main ()
{
	cout << send_to_apache("192.168.56.101","C:\Users\eyads\source\repos\Multithreading messaging queue\Multithreading messaging queue\text.txt") << endl;
//C:\Users\eyads\Desktop\curl
}
