#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct message {

	string sn;//sender name
	string rn;//recevier name
	string subject;//message subject
	string body;// the main body of text 

} message_t;


void store_message_to_file(message_t m)
{	
	ofstream omessage;
	omessage.open("text.txt");
	//omessage.open("thefile.txt");
	omessage << m.sn << endl << m.rn << endl << m.subject << endl << m.body << endl;
	omessage.close("text.txt");
}

message_t read_message()
{
	message_t m;
	cout << "please input your name" << endl;
	cin >> m.sn;
	cout << "please input the recevier's name" << endl;
	cin >> m.rn;
	cout << "please input your subject title" << endl;
	cin>> m.subject;// subject
	cout << "Please give the body of your message"<<endl;
	cin >> m.body;
	cout << "success" << endl;
	return m;
}


int main()
{
	message_t m;
	m=read_message();
	store_message_to_file(m);
//	store_message_to_file($m, "message.txt");
	//string reply = send_to_apache(“127.0.0.1”, ”message.txt”);
	//cout << reply << endl;
	//remove_message("message.txt");
	system("pause");
}
/*

The below code is the code that reads a file and copies it into another file while deleting the orginal	

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	ifstream infile("input.txt");
	ofstream outfile("output.txt");
	string str = " ";

	while (!infile.eof())
	{
		str += infile.get();
	}

	infile.close();
	remove("input.txt");
	outfile << str;
	outfile.close();
}
*/
