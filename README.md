# Chatty-Bot

This project implements a chatbot interaction system in C++ using Object-Oriented Programming (OOP) principles. It demonstrates various chatbot behaviors such as single-response, echo response, random replies, and more! The system utilizes inheritance, polymorphism, and encapsulation to simulate different chatbot personalities and behaviors.

Key Features

Multiple Chatbot Types: 

The project defines several types of chatbots, each with unique behaviors:
* User_bot: A chatbot that reads user input.
* Single_reply_bot: Responds with a fixed message.
* Moo_bot: A variant of the Single_reply_bot that always replies with "moo!".
* Name_bot: A variant of the Single_reply_bot that replies with "I am [name]!".
* Echo_bot: Repeats the last message it received.
* Random_reply_bot: Selects a random response from a predefined list.
* Datetime_bot: Responds with a default message stating it wasn’t finished.
* Smart_bot: A chatbot that responds with a default "not enough time" message.
* Polymorphism and Inheritance: All chatbots inherit from the Chatbot base class, enabling polymorphic behavior. This allows chatbots to be treated interchangeably while maintaining distinct behaviors.

Conversational Interaction: The converse() function allows two chatbots to interact in a loop, passing messages back and forth up to a maximum number of turns.

Test Code: Multiple tests are written in the a4_test.cpp file to test the interactions between various chatbot types.
