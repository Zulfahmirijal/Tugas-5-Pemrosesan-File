#include<iostream>
#include<fstream>
using namespace std;
 
void inputdata(ofstream &input){
	input << "Nama : Zul Fahmi Rijal"<<endl;
	input << "Stambuk : 13020190160"<<endl;
	input << "Kelas : A3"<<endl;
 
}
 
int main(){
	ofstream mhsfile;
	
	mhsfile.open("datamhs.txt",ios::app | ios::out);
	
	inputdata(mhsfile);
	
	mhsfile.close();
	
}
