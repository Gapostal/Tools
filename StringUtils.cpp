#include "stdafx.h"
#include "StringUtils.h"

StringUtils::StringUtils()
{
}


StringUtils::~StringUtils()
{
}

string StringUtils::strToUpper(string inputStr)
{
	string outputStr = inputStr;
	if (!outputStr.empty())
	{
		for (auto &c : outputStr)
		{
			if (islower(c))
			{
				c = toupper(c);
			}
		}
	}
	return outputStr;
}

string StringUtils::strToLower(string inputStr)
{
	string outputStr = inputStr;
	if (!outputStr.empty())
	{
		for (auto &c : outputStr)
		{
			if (isupper(c))
			{
				c = tolower(c);
			}
		}
	}
	return outputStr;
}

string StringUtils::strToLTrim(string inputStr)
{
	string outputStr = inputStr;
	if (!outputStr.empty())
	{
		outputStr = outputStr.substr(outputStr.find_first_not_of(" \n\r\t"));
	}
	return outputStr;
}

string StringUtils::strToRTrim(string inputStr)
{
	string outputStr = inputStr;
	if (!outputStr.empty())
	{
		outputStr = outputStr.substr(0, outputStr.find_last_not_of(" \n\r\t") + 1);
	}
	return outputStr;
}

string StringUtils::strToTrim(string inputStr)
{
	string outputStr = inputStr;
	if (!outputStr.empty())
	{
		outputStr = outputStr.substr(outputStr.find_first_not_of(" \n\r\t"));
		outputStr = outputStr.substr(0, outputStr.find_last_not_of(" \n\r\t") + 1);
	}
	return outputStr;
}

void StringUtils::reverseString(const string& input_string, string& output_string)
{
    if (0 == input_string.size())
    {
        return;
    }

    output_string = input_string;

    for (unsigned int i = 0; i < output_string.size() / 2; ++i)
    {
        char char_tmp = output_string[i];
        output_string[i] = output_string[output_string.size() - i - 1];
        output_string[output_string.size() - i - 1] = char_tmp;
    }

    return;
}

void StringUtils::splitString(const string& input_string, const string& split_string, vector<string>& output_vector)
{
    if (0 == input_string.size())
    {
        return;
    }

    size_t front = 0;
    size_t back = input_string.find_first_of(split_string, front);
    while (back != string::npos)
    {
        output_vector.push_back(input_string.substr(front, back - front));
        front = back + 1;
        back = input_string.find_first_of(split_string, front);
    }
    if (back - front > 0)
    {
        output_vector.push_back(input_string.substr(front, back - front));
    }

    return;
}