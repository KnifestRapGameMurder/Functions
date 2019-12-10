//cout  - (ostream)
//cin   - (istream)
//------------------------
//fout	- (ofstream)
//fin   - (ifstream)

#include<iostream>
#include<fstream>

#define WRITE_TO_FILE
#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef READ_FROM_FILE
	std::ifstream fin;
	const int t = 256;
	char source_file_name[t] = {};
	std::cout << "Введите имя файла: ";
	std::cin.getline(source_file_name, t);	std::cout << std::endl;
	fin.open(source_file_name);

	const int n = 256;
	char sz_buffer[n] = {};

	while (!fin.eof())
	{
		//fin >> sz_buffer;
		fin.getline(sz_buffer, n);
		std::cout << sz_buffer << std::endl;
	}

	fin.close();
#endif // READ_FROM_FILE

#ifdef WRITE_TO_FILE
	/*std::cout << "Hello World";*/
	std::ofstream fout;	//Ñîçäàíèå ïîòîêà
	const int e = 256;
	char final_file_name[t] = {};
	std::cout << "Введите имя файла: ";
	std::cin.getline(final_file_name, t);	std::cout << std::endl;
	fout.open(final_file_name, std::ios::app);

	fout << sz_buffer << std::endl;
	
	/*fout.open("AnotherFile.txt");
	fout << "Sam privet";*/

	fout.close();

	/*system("notepad");*/
#endif // WRITE_TO_FILE

}