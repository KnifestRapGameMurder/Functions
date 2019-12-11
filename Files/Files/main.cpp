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
	//							
	std::ifstream fin;
	const int t = 256;
	char src_f_name[t] = {};
	std::cout << "Введите имя исхожного файла: ";
	std::cin.getline(src_f_name, t);
	if (!strstr(src_f_name, ".txt"))	strcat_s(src_f_name, ".txt");
	std::cout << std::endl;
	fin.open(src_f_name);

	std::streampos begin, end;
	std::ifstream src_file(src_f_name, std::ios::binary);
	begin = src_file.tellg();
	src_file.seekg(0, std::ios::end);
	end = src_file.tellg();
	src_file.close();
	std::cout << "\n\t\t{size is: " << (end - begin) << " bytes.}\n\n";
	
	const int n = 256;
	char sz_buffer[n] = {};
	std::ofstream fout;

	const int e = 256;
	char fnl_f_name[t] = {};
	std::cout << "Введите имя файла: ";
	std::cin.getline(fnl_f_name, t);
	if (!strstr(fnl_f_name, ".txt"))	strcat_s(fnl_f_name, ".txt");	std::cout << std::endl;
	fout.open(fnl_f_name, std::ios::app);

	int p = 1;
	while (!fin.eof()&&fin.is_open())
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

	std::ifstream fnl_file(fnl_f_name, std::ios::binary);
	begin = fnl_file.tellg();
	fnl_file.seekg(0, std::ios::end);
	end = fnl_file.tellg();
	fnl_file.close();
	std::cout << "\n\t\t{size is: " << (end - begin) << " bytes.}\n\n";
	
	char command[n] = "notepad ";
	strcat_s(command, fnl_f_name);
	system(command);
}