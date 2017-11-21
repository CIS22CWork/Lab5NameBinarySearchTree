/*
Branden Lee and Alex Morfin
CIS 22C
Fall 2017
Lab 5

Used Microsoft Visual Studio 2017

CommandLineUI class
contains the presentational and interactive interface in the command line for the user.
KEEP ALL COUT<< AND CIN>> HERE
*/
#ifndef COMMAND_LINE_UI_H
#define COMMAND_LINE_UI_H

#include <iostream>
#include <sstream>
#include <limits>
#include "FileIO.h"
#include "List.h"
#include "NodeMain.h"
#include "BST.h"

class CommandLineUI
{
private:
public:
	/** menu entry point for the program
	@pre None
	@post menu
	@return None */
	static void enterLoop ();

	/** visits the data node and returns a string
	@pre None
	@post None
	@return data string */
	static std::string CommandLineUI::visit (NodeMain* node);

	/** visits the data node and returns the name
	@pre None
	@post None
	@return name string in form FIRST LAST */
	static std::string CommandLineUI::nameAccess (NodeMain* node);

	/** visits the data node and returns the birthday
	@pre None
	@post None
	@return birthday string in form YYYY-MM-DD */
	static std::string CommandLineUI::birthdayAccess (NodeMain* node);
};

#endif