#include <iostream>
#include <fstream>
#include <string>

using namespace std;
enum command {send, fetch};
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
void message_info();
{
    char info[20]; 
    cout<<"Please enter the name of the sender to the message you want to fetch"<<endl; 
    cin>>info; 
    //function call to the function to store that info and send to appache 
}
void ask_user()
{
    int result=0; 
    char operation[10];
    char send[4]; 
    char fetch[5]; 
    memset(send,0,4); 
    memset(fetch,0,5); 
    strcpy(send,"Send"); 
    strcpy(fetch, "fetch"); 
    cout<<"Would you like to send or fetch your message"<<endl;
    cin>>operation;
    result =strcmp(operation, fetch); 
    if (result==0)
    {
        //function call to the function to store the info in a file then return sucess or fail 
    }
     else 
     {
         message_info();
     }
    
}

int main()
{
	message_t m;
	m=read_message();
	store_message_to_file(m);
   	ask_user();
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
