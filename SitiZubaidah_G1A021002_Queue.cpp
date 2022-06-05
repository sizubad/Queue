//Siti Zubaidah
//G1A021002
//Queue

#include <iostream>
#define MAX 5
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;

bool isFull() {
	return Q.tail == MAX;
}

bool isEmpty() {
	return Q.tail == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Queue kosong"<<endl;
	}
	else {
		cout << "Queue : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

void addqueue() {
	if (isFull())
	{
		cout << "Queue penuh!"<<endl;
	}
	else {
		int data;
		cout << "Input Data : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data telah ditambahkan\n";
		printQueue();
	}
}

void deletequeue() {
	if (isEmpty())
	{
		cout << "Queue kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "<<<<<<<<Menu untuk Queue>>>>>>>>\n"
			<< " 1. Menambahkan Data ke dalam Queue\n"
			<< " 2. Mengambil Data ke dalam Queue\n"
			<< " 3. Keluar \n\n"
			<< "----------------------------------\n"
			<< "Masukkan pilihan menu : "; cin >> choose;
		switch (choose)
		{
		case 1:
			addqueue();
			break;
		case 2:
			deletequeue();
			break;
		default:
			cout << "Invalid Pilihan";
			break;
		}
	} while (choose !=3);
	return 0;
}