#pragma once
#ifndef STRING_UTILS_H
#define STRING_UTILS_H
#include <string>
#include <vector>

using namespace std;
using std::vector;

class StringUtils
{
public:
	StringUtils();
	~StringUtils();
	string strToUpper(string inputStr);
	string strToLower(string inputStr);
	string strToTrim(string inputStr);
	string strToLTrim(string inputStr);
	string strToRTrim(string inputStr);
    void reverseString(const string& input_string, string& output_string);
    void splitString(const string& input_string, const string& split_string, vector<string>& output_vector);
};

#endif // !STRING_UTILS_H

