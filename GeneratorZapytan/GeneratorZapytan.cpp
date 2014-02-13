// GeneratorZapytan.cpp : Defines the entry point for the console application.
//
#include <vector>
#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	vector<long long> id;
	id.push_back(3600224457); //dolnoœl¹skie
	id.push_back(3600223407); //kujawsko-pomorskie
	id.push_back(3600130969); //lubuskie
	id.push_back(3600224461); //podlaskie
	id.push_back(3600130975); //pomorskie
	id.push_back(3600223408); //warmiñsko-mazurskie
	id.push_back(3600130971); //wielkopolskie
	id.push_back(3600104401); //zachodnio-pomorskie

	cout<<"	[timeout:500]"<<endl;
	cout<<";"<<endl;
	cout<<"("<<endl;
	//begin loop
	for (int i=0; i<id.size();i++){
		cout<<"  node"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"denomination\"!~\".\"]"<<endl;
		cout<<"   (area:"<<id[i]<<");"<<endl;
		cout<<"  node"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"name\"!~\".\"]"<<endl;
		cout<<"   (area:"<<id[i]<<");"<<endl;
		cout<<"  way"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"denomination\"!~\".\"]"<<endl;
		cout<<"    (area:"<<id[i]<<");"<<endl;
		cout<<"  way"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"name\"!~\".\"]"<<endl;
		cout<<"    (area:"<<id[i]<<");"<<endl;
		cout<<"  relation"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"denomination\"!~\".\"]"<<endl;
		cout<<"    (area:"<<id[i]<<");"<<endl;
		cout<<"  relation"<<endl;
		cout<<"    [\"amenity\"=\"place_of_worship\"]"<<endl;
		cout<<"    [\"name\"!~\".\"]"<<endl;
		cout<<"    (area:"<<id[i]<<");"<<endl;
	}
	cout<<");"<<endl;
	cout<<"("<<endl;
	cout<<"  ._;"<<endl;
	cout<<"  >;"<<endl;
	cout<<");"<<endl;
	cout<<"out meta;"<<endl;
	return 0;
}

