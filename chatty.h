#include "cmpt_error.h"    
#include "Chatbot.h"       
#include <iostream>        
#include <fstream>         
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <chrono>
#include <ctime>     
#include <cassert>

class User_bot : public Chatbot
{
public:
	//constructor
	User_bot(const string& name): Chatbot(name)
	{ }
	//give_msg function
	void give_msg(const string& message)
	{
		string j = message;
	}
	//get_msg function
	string get_msg()
	{
		string message;
		getline(cin, message);
		return message;
	}
};

class Single_reply_bot : public Chatbot
{
	string reply;
public:
	//constructor
	Single_reply_bot(const string& name, const string& message) :Chatbot(name), reply(message)
	{ }
	//give_msg function
	void give_msg(const string& message)
	{
		string b = message;
	}
	//get_msg function
	string get_msg()
	{
		return reply;
	}
};

class Moo_bot : public Single_reply_bot
{
public:
	//constructor
	Moo_bot(const string& name)
		:Single_reply_bot(name, "moo!")
	{ }
};

class Name_bot : public Single_reply_bot
{
public:
	//constructor
	Name_bot(const string& name)
		:Single_reply_bot(name, "I am " + name + "!")
	{ }
};

class Echo_bot : public Chatbot
{
private:
	string input;
public:
	//constructor
	Echo_bot(const string& name, const string& firstMessage) :Chatbot(name)
	{
		cout << firstMessage << endl;
	}
	//give_msg function
	void give_msg(const string& message)
	{
		input = message;
	}
	//get_msg function
	string get_msg()
	{
		return input;
	}
};

class Random_reply_bot : public Chatbot
{
private:
	vector<string> vec;
	string input;
public:
	//constructor
	Random_reply_bot(const string& name, vector<string> vec) :Chatbot(name), vec(vec)
	{
		int count;
		srand(time(NULL));
		count = rand() % vec.size();
		input = vec[count];
	}
	//give_msg function
	void give_msg(const string& msg)
	{
		string junkString = msg;
	}
	//get_msg function
	string get_msg()
	{
		return vec[rand() % vec.size()];
	}
};

class Datetime_bot : public Chatbot
{
private:
	vector<string> s;
public:
	//constructor
	Datetime_bot(const string& name, const vector<string> vec): Chatbot(name), s(vec)
	{ }
	//give_msg function
	void give_msg(const string& message)
	{
		string junkString = message;
	}
	//get_msg function
	string get_msg()
	{
		string message = "My programmer did not have enough time to finish me :(";
		return message;
	}
};

class Smart_bot : public Chatbot
{
public:
	//constructor
	Smart_bot(const string& name): Chatbot(name)
	{ }
	//give_msg function
	void give_msg(const string& message)
	{
		string junkString = message;
	}
	//get_msg function
	string get_msg()
	{
		string message = "My programmer did not have enough time to finish me :(";
		return message;
	}
};
