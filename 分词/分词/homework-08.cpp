#include<iostream>
#include<string>
#include<vector>
#include "parse.h"
using namespace std;

int main(){
	std::string x;
	std::cout<< "please input a url:";
	std::cin>>x;
	Parse p;
	p.start(x);
	for(auto i = p.as.begin();; i++){  //ʹ��auto�Զ������Ƶ�  �Ƴ�i��vector<string>�ĵ�����
		cout<<*i;
		if(i+1 == p.as.end()){
			break;
		}
		else
			cout<<",";
	}
	cout<<endl;
}

