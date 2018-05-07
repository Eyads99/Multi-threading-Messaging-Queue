//the below is just psuedo code 

#include <iostream>
#include <fstream>
#include <io.h>
#include <stdio.h>

using namespace std;
int x;

system("mkdir/tmp/spool");

void client_thread(string folder, int timeout)
{
	while (true)
	{
		if (newfile(folder))
		{
			string new_file = get_newfile(folder);
			String reply = process_file(new_file);
			write_reply(new_file, reply);
		}
		sleep(timeout);
	}
}
void main()
{
	int timeout = 10;
	while (true)
	{
		if (newfolder(“ / tmp / spool”))
		{
			string new_folder = get_newfolder(“ / tmp / spool”);
			std::thread t(client_thread, new_folder, timeout);
		}
		sleep(timeout);
	}
	return 0;
}

void searchLinkedList(node* head, string fileName)
{
	string receiverField;
	node* ptr = head;
	bool flag = true;
	fstream fetchedMessage;

	FILE* f = fopen("fileName", "r");	
	fetchedMessage.open("fetchedMessage.in");

	getline(f,receiverField); 
	transform(receiverField.begin(), receiverField.end(), receiverField.beign(), ::tolower);

	if (head == NULL)
		fetchedMessage << "There are no messages to retrieve" << endl;
		fetchedMessage.close();
		break;

	while (flag)
	{
		if (ptr->next == NULL)
			fetchedMessage << "There are no messages for " << receiverField << endl;
			fetchedMessage.close();
			flag = false;
		if (transform(ptr->receiver.begin(), ptr->receiver.end(), ptr->receiver.begin(), ::tolower) == receiverField)
			fetchedMessage << "To:" << ptr->receiver << endl; 
			fetchedMessage << "From:" << ptr->sender << endl; 
			fetchedMessage << "Subject:" << ptr->subject << endl; 
			fetchedMessage << "Message:" << ptr->message << endl;
		else
		{
			ptr = ptr->next;
		} 	
	}
	fclose(f);
}

typedef struct messsage
{
	string receiver;
	string sender;
	string subject;
	string message;

}Message;

typedef struct linked
{ 
	string receiver;
	string sender;
	string subject;
	string message;
	link* mes; 
	node* next; 
	
}*link; 

Message parsing(string, Message);
bool resultMessage(char**);
void linkedList(string, Message);


int main(int argc, char** argv)
{
	Message m;

	if (resultmessage(argv[1])
	{	
		m = parsing(argv[1]);
		linkedlist(argc,m);
	}
	else 
		cout << “Error” << endl;

	return 0;
}

bool resultMessage(char** argv[1])
{
	FILE* infile = fopen(argv[1], “r”);
	ofstream outfile("output.in”);
	ofstream content(“message.txt”);
	
	string str = "";

	if(infile == NULL)
		outfile << “Failure” << endl;
		outfile.close();
		return false;

	while (!infile.eof())
	{
		str += infile.get();
	}

	fclose(“input.out”);
	remove("input.out”);
	content << str;
	content.close();
	outfile << “Success” << endl;
	outfile.close();
	return true;
	


}

Message parsing(string fileName, Message m)
{
	FILE* message = fopen("filename","r"); 
	string line[4];

	fseek(message,0,SEEK_END);
	long size = ftell(message);
	fseek(message,0,SEEK_SET);

	for(int i=0; i<3; i++)
	{
		getline(filename, line[i]);
		fseek(message,sizeof(line[i]),SEEK_CUR);
	}


	parsedMessage.receiver = line[0];
	parsedMessage.sender = line[1];
	parsedMessage.subject = line[2];
	strncpy(parsedMessage.message, ftell(message), size); 
	
	return m;
}

void linkedList(int argc, Message m)
{
	link* head = NULL; 
	link* cur = NULL; 

	while(i<argc) 
	{
		if(i==0)
		{
			head = new node;
			head.receiver = m.receiver;
			head.sender = m.sender;
			head.subject = m.subject;
			head.message = m.message;
			head->next = NULL;
			cur = head;	
		}

		else
		{	
			int x = 1; 
			cur->next = new node();
			cur.receiver = m.receiver;
			cur.sender = m.sender;
			cur.subject = m.subject;
			cur.message = m.message; 
			cur = cur->next; 
			cur->next = NULL; 
			x++; 
		
		}
		i++
	}

}
