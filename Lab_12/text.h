#ifndef text_hpp
#define text_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//Class declare
class Text {
	string text;
public :
	Text(string _t);
	string get() const;
	void append(string _extra);
};

class FancyText : public Text {
	string left_brac;
	string right_brac;
	string connector;
public :
	FancyText(string _t, string _lb, string _rb, string _con);
	string get() const override;
	void append(string _extra) override;
};
#endif /* text_hpp */
