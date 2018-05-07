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
