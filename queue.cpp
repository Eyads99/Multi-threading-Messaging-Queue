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
