#include<iostream>
#include<vector>

using namespace std;
//myVector.push_back ------ to insert elements at back
//myVector.at(iterator)------ get the elements at specified location
//myVector[location]---------get the element at the specified location
//myVector.insert(myVector.begin()+location,value)------insert the location at the specified location
//myVector.erase(myVector.begin()+location to remove)
//myVector.empty() ------ boolean check whether vector is empty or not
//myVector.clear()----------clear all the elements from the vector

int main(){

	vector<int>myVector;

	myVector.push_back(8);
	myVector.push_back(4);
	myVector.push_back(12);
	myVector.push_back(7);
	myVector.push_back(2);

	for (unsigned int i=0;i< myVector.size();i++){

		cout<<myVector[i]<<endl;

	}

	for (unsigned int i=0;i< myVector.size();i++){

		cout<<myVector.at(i)<<endl;
	}
	myVector.insert(myVector.begin()+1,10);

	for (unsigned int i=0;i< myVector.size();i++){
		cout<<myVector.at(i)<<endl;

	}
	myVector.erase(myVector.begin()+4);

	for (unsigned int i=0;i< myVector.size();i++){

		cout<<myVector.at(i)<<endl;

	}
	if(myVector.empty()){
		cout<<"vector is empty"<<endl;
	}
	else 
	{
		cout<<"vector is not empty"<<endl;
	}
	myVector.clear();

	if(myVector.empty()){
		cout<<"vector is empty"<<endl;
	}
	else 
	{
		cout<<"vector is not empty"<<endl;
	}
}

