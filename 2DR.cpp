#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
void display(int num[][6]);
void graph(int num[][6]);
int main()
{
	int num[5][6];
	display(num);
	graph(num);
	system("pause");
	return(0);
}

void display(int num[][6])
{
	srand(time(NULL));
	for(int i=0;i<5;i++){
		cout <<"\t";
		for(int j=0;j<6;j++){
		num[i][j]=rand()%10;
		cout <<num[i][j]<<"\t";
		}
		cout << endl;
	}
}

void graph(int num[][6])
{
	cout << setfill('-')<< setw(30) <<"display graph" <<setw(21)<<"\n\t";
	for(int j=0;j<6;j++)cout<<j<<"\t";
	cout << "\n";
	cout << setw(50)<<"\n";
	for(int i=0;i<5;i++){
		cout <<i<<"|\t";
		for(int j=0;j<6;j++){
			if(num[i][j]!=0)cout <<"*\t";
			else cout <<" \t";
		}
		cout << endl;
	}
	cout << setw(50)<<"\n";
}