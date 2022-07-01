#include <bits/stdc++.h>

using namespace std;


	int main()
	{ 
		//  Write the file
		ofstream of("Test.txt", ios::trunc); //open the file 
	    of << "Prashun" << endl; //info
		of << 25 << endl;
	    of << "CS" << endl;
		of.close();  //close the fileits very important

		//   Reading file
		ifstream ifs("Test.txt");  //open the file
		string name;
		int roll;
		string branch;
		ifs >> name >> roll >> branch;  //read the files
		cout << name << endl << roll << endl << branch << endl;
		ifs.close();
	}




	class Student
	{
	private:
		string name;
		int roll;
		string branch;
	public:
		Student() {}
		Student(string n, int r, string b)
		{
			name = n;
			roll = r;
			branch = b;
		}
		friend ofstream& operator<<(ofstream& ofs, Student s);
		friend ifstream& operator>>(ifstream& ifs, Student& s);
		friend ostream& operator<<(ostream& os, Student& s);
	};
	ofstream& operator<<(ofstream& ofs, Student s)  //oparetor overloading for store the data in file
	{
		ofs << s.name << endl;
		ofs << s.roll << endl;
		ofs << s.branch << endl;
		return ofs;
	}
	ifstream& operator>>(ifstream& ifs, Student& s)  //oparetor overloading for show/use the data from file
	{
		ifs >> s.name;
		ifs >> s.roll;
		ifs >> s.branch;
		return ifs;
	}
	ostream& operator<<(ostream& os, Student& s) //function for Cout
	{
		os << "Name " << s.name << endl;
		os << "Roll " << s.roll << endl;
		os << "Branch " << s.branch << endl;
		return os;
	}
	int main()
	{
		ofstream ofs("Test.txt");
		Student s1("John", 10, "CS");
		ofs << s1;
		ofs.close();


		Student s2;
		ifstream ifs("Test.txt");
		ifs >> s1;


		cout << s1; //ostream
	}

	//        Storing the information of input in a file 

	class Item
	{
	private:
		string name;
		float price;
		int qty;
	public:
		Item() {}
		Item(string n, float p, int q);
		friend ifstream& operator>>(ifstream& fis, Item& i);
		friend ofstream& operator<<(ofstream& fos, Item& i);
		friend ostream& operator<<(ostream& os, Item& i);
	};
	int main()
	{
		int n;
		string name;
		float price;
		int qty;
		cout << "Enter number of Item:";
		cin >> n;
		Item* list[n];
		cout << "Enter All Item " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter " << i + 1 << " Item Name , price and quantity";
			cin >> name;
			cin >> price;
			cin >> qty;
			list[i] = new Item(name, price, qty);
		}
		ofstream fos("Items.txt");
		for (int i = 0; i < n; i++)
		{
			fos << *list[i];
		}
		Item item;
		ifstream fis("Items.txt");
		for (int i = 0; i < 3; i++)
		{
			fis >> item;
			cout << "Item " << i << item << endl;
		}
	}
	Item::Item(string n, float p, int q)
	{
		name = n;
		price = p;
		qty = q;
	}
	ofstream& operator<<(ofstream& fos, Item& i)
	{
		fos << i.name << endl << i.price << endl << i.qty << endl;
		return fos;
	}
	ifstream& operator>>(ifstream& fis, Item& i)
	{
		fis >> i.name >> i.price >> i.qty;
		return fis;
	}
	ostream& operator<<(ostream& os, Item& i)
	{
		os << i.name << endl << i.price << endl << i.qty << endl;
		return os;
	}