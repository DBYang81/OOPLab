// Exercise 2A

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string find_field(const string &xml, string tag_name);

int main() {
	string page, line, location, temperature;
    ifstream inputFile("../weather.xml");
    if(inputFile.is_open()){
        while (getline (inputFile, line)) {
            page.append(line);
            line.erase();
        }
    }else{
        cout << "File can not be opened!";
        return 1;
    }

    location = find_field(page,"location");
    temperature = find_field(page, "temp_c");

	// Now page is a string that contains the whole xml page
	// Here you need to write something that finds and 
	// extracts location and temperature from the XML
	// data in the string page and stores them in 
	// the strings location and temperature respectively
	
	cout << "Location: " << location << endl;
	cout << "Temperature: " << temperature << endl;

    inputFile.close();
}

string find_field(const string &xml, string tag_name){

	// construct start and end tags from the tag name
	// add angle brackets to both tags and also slash to end tag
	// then search for tags 
	// if both are found then return the substring between the tags

    string start_tag ("<" + tag_name + ">");
    string end_tag ("</" + tag_name + ">");

    int start_pos;
    start_pos = xml.find(start_tag);

    int end_of_start_tag;
    end_of_start_tag = start_pos + start_tag.length();

    int end_pos;
    end_pos = xml.find(end_tag);

    if(start_pos != string::npos && end_pos != string::npos){
        return xml.substr(end_of_start_tag, end_pos - end_of_start_tag);
    }else{
        return "not found"; // return this if tag is not found
    }
}

