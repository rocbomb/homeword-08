#include "parse.h"


Parse::Parse()
{
}
void Parse::start(std::string s)
{
	int i=0,n=s.size();
	while(true){
		if(s[i]== '.' || s[i]== '/' || s[i]==':'){   //Óöµ½'.' '/' ¾ÍÌø¹ı
			i++;
			continue;
		}
		std::string word = "";
		while(true){
			if(s[i]== '.' || s[i]== '/' || s[i]==':')
				break;
			word = word+s[i];
			i++;
			if(i == n)
				break;
		}
		as.push_back(word);
		if(i == n)
			break;
	}
}

Parse::~Parse(void)
{
}
