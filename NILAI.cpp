#include<iostream>

using namespace std;

int main(){
	string nama;
	int nilai_tugas,nilai_uts,nilai_uas,total;
	cout<<"masukkan nama anda : ";cin>>nama;
	cout<<"masukkan nilai tugas :";cin>>nilai_tugas;
	cout<<"masukkan nilai uts :";cin>>nilai_uts;
	cout<<"masukkan nilai uas :";cin>>nilai_uas;
	
	total=(nilai_tugas*30/100)+(nilai_uts*30/100)+(nilai_uas*40/100);
	
	if(total>=80){
		cout<<"NAMA :"<<nama<<" NILAI : "<<total<<" A";
	}
	else if(total >=70){
		cout<<"NAMA :"<<nama<<" NILAI : "<<total<<" B";
	}
	else if(total >=60){
		cout<<"NAMA :"<<nama<<" NILAI : "<<total<<" C";
		
	}
	else if(total >=50){
		cout<<"NAMA :"<<nama<<" NILAI : "<<total<<" D";
		
	}
	else
	{
		cout<<"NAMA :"<<nama<<" NILAI : "<<total<<" E";
		
	}
	
	return 0;
		
}
