#include <iostream>
#include <fstream>
#include <string>


typedef struct message {

	string sn;//sender name
	string  rn;//recevier name
	string subject;//message subject
	string body;// the main body of text 

} message_t;

using namespace std;

void read_message(message_t)
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
}

int main()
{
	message_t m;
	read_message(&m);
	store_message_to_file($m, "message.txt");
	string reply = send_to_apache(“127.0.0.1”, ”message.txt”);
	cout << reply << endl;
	remove_message("message.txt");
}
