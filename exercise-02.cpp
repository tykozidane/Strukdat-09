/*
Nama	: tyko zidane badhawi
npm		: 140810180031
Praktikum Strukdat
*/
#include<iostream>
using namespace std;
struct Stack{
	char a;
	Stack* next;
};
typedef Stack* pointer;
typedef pointer List;
void createList (List& Top){
	Top=NULL;
}
void createElement(pointer& pBaru){
	pBaru=new Stack;
	cin>>pBaru->a;
	pBaru->next=NULL;
}
void pushStackL(List& Top,pointer pBaru){
	if(Top==NULL){
		Top=pBaru;
	}
	else {
		pBaru->next=Top;
		Top=pBaru;
	}
}
void popStackL(List& Top){
	pointer pHapus;
	cout << Top->a;
	if(Top->next==NULL){
		Top=NULL;
	}
	else {
		pHapus=Top;
		Top=Top->next;
		pHapus->next=NULL;
	}
}
int main(){
	int n;
	pointer pBaru;
	List Top;
	cout << "Berapa Huruf	: "; cin>>n;
	createList(Top);
	for (int i=0;i<n;i++){
		createElement(pBaru);
		pushStackL(Top,pBaru);
	}
	for (int i=0;i<n;i++){
		popStackL(Top);
	}
}
