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
	for(auto i = p.as.begin();; i++){  //使用auto自动类型推导  推出i是vector<string>的迭代器
		cout<<*i;
		if(i+1 == p.as.end()){
			break;
		}
		else
			cout<<",";
	}
	cout<<endl;
}

