#include <iostream>
#include <fstream>
#include <string>


typedef struct message{

  string sn;//sender name
  string  rn;//recevier name
  string subject;//message subject
  string body;// the main body of text 
                      } message_t

void read_message()
{

}
int main ()
{
  message_t m;
  read_message (&m);
  store_message_to_file ($m,"message.txt");
  string reply = send_to_apache (“127.0.0.1”,”message.txt”);
  cout << reply << endl;
  remove_message("message.txt");
}
