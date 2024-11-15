//
// test code snippet given by professor: 
//

#include "a4.h"
#include <iostream>       
#include <fstream>        
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <chrono>
#include <ctime>     
#include <cassert> 

using namespace std;   

// converse is a helper function that you can use if you like. You are free to
// modify it in any way.
void converse(Chatbot* a, Chatbot* b, int max_turns = 50) 
{
  for(int turn = 1; turn <= max_turns; turn++) {
    string a_msg = a->get_msg();
    cout << "(" << turn << ") " << a->get_name() << ": " << a_msg << "\n";
    
    turn++;
    if (turn > max_turns) return;

    b->give_msg(a_msg);
    string b_msg = b->get_msg();

    cout << "(" << turn << ") " << b->get_name() << ": " << b_msg << "\n";
    a->give_msg(b_msg);
  } // for
}
 
//
// my test code from now on: 
//
 
void chatbotTest1(int a)
{
	if(a == 1)
	{
		Moo_bot moo{"moo!"}; 
		User_bot user{"user"};
		converse(&user, &moo, 6);
	} 
}

void chatbotTest2(int a)
{
	if(a == 1)
	{
		Single_reply_bot taco{"tacobot", "I love tacos!"};
		User_bot user{"user"};
		converse(&user, &taco, 6);
	} 
}

void chatbotTest3(int a)
{
	if(a == 1) 
	{
		Name_bot mega{"megabot"};
		User_bot user{"user"};
		converse(&user, &mega, 6);
	} 
}
 
void chatbotTest4(int a)  
{  
	if(a == 1)
	{
		Echo_bot echo{"repeato", "repeato is ready to go!"}; 
		User_bot user{"user"};
		converse(&user, &echo, 6);
	} 
}

void chatbotTest5(int a)
{
	if(a == 1)
	{
		Random_reply_bot random{"Mittens", {"purr", "meeeow", "hiss"}}; 
		User_bot user{"user"};
		converse(&user, &random, 6);
	} 
}

void chatbotTest6(int a)   
{
	if(a == 1)
	{
		Datetime_bot dt{"dt", {"Ask me about the date or time!", "I know the date and time!"}};
		User_bot user{"user"};
		converse(&user, &dt, 6);
	}  
}

void chatbotTest7(int a)
{
	if(a == 1)
	{
		Smart_bot smartBoi{"smartBoi"};
		User_bot user{"user"};
		converse(&user, &smartBoi, 6);
	}   
}
int main() 
{ 
	chatbotTest1(1);
	chatbotTest2(1);
	chatbotTest3(1);
	chatbotTest4(1);
	chatbotTest5(1);
	chatbotTest6(1); 
	chatbotTest7(1);
	return 0;
}
