//cout  - (ostream)
//cin   - (istream)
//------------------------
//fout	- (ofstream)
//fin   - (ifstream)

#include<iostream>
#include<fstream>



void main()
{
	setlocale(LC_ALL, "");

	int p = 0;
	bool txt = 0;
	std::ifstream fin;
	const int t = 256;
	char src_f_name[t] = {};
	std::cout << "Введите имя файла: ";
	std::cin.getline(src_f_name, t);
	while (p < t||!txt)
	{
		p++;
		if (src_f_name[p] == '.'&&src_f_name[p + 1] == 't'&&src_f_name[p + 2] == 'x'&&src_f_name[p + 3] == 't') txt = 1;
	};
	p = 0;
	while (p < t&&!txt)
	{
		p++;
		if (src_f_name[p] == 0)
		{
			src_f_name[p] = '.';
			src_f_name[p + 1] = 't';
			src_f_name[p + 2] = 'x';
			src_f_name[p + 3] = 't';
		}
		txt = 1;
	};
	std::cout << std::endl;
	fin.open(src_f_name);

	const int n = 256;
	char sz_buffer[n] = {};

	std::ofstream fout;	
	const int e = 256;
	char fnl_f_name[t] = {};
	std::cout << "Введите имя файла: ";
	std::cin.getline(fnl_f_name, t);	std::cout << std::endl;
	fout.open(fnl_f_name, std::ios::app);
	p = 1;
	while (!fin.eof())
	{
		fin.getline(sz_buffer, n);
		int i = 0;
		fout << "host 404-"<< p++ <<"\n{\n\t\t hardware ethernet \t\t";
		do{
			fout << sz_buffer[i]; i++;
		} while (sz_buffer[i] != '\t');
		fout << ";\n\t\t fixed-address \t\t\t";
		while (sz_buffer[i] == '\t') { i++; };
		do { fout << sz_buffer[i]; i++; } while (sz_buffer[i] != 0);
		fout << ";\n}\n\n";
	}
	
	fin.close();
	fout.close();

	char command[n] = "notepad ";
	strcat_s(command, fnl_f_name);
	system(command);
}