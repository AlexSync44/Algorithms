#include "Compression_RLE.h"

//you need think out of the box

inline bool checkOpenFile(const std::fstream& file)
{
	if (file.is_open())
	{
		std::cout << "\nFile is open" << std::endl;
		return true;
	}

	std::cout << "\nERROR: File is not open!" << std::endl;
	return false;
}

void switchFile(std::fstream& file, std::string& nameFile)
{
	do
	{
		std::cout << "Enter a name file: ";
		std::getline(std::cin, nameFile);

		file.open(nameFile + ".txt", std::fstream::in | std::fstream::out);
	} while (!checkOpenFile(file));
}

void getText(std::fstream& file, std::string& str)
{
	str.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

	file.clear();
	file.seekg(0, std::ios::beg);
}

inline void clearFile(std::fstream& file, const std::string& fileName)
{
	file.close();
	file.open(fileName + ".txt", std::fstream::trunc | std::fstream::out | std::fstream::in);
}

void compression(std::fstream& file, const std::string& nameFile)
{
	std::string text, res = "";
	getText(file, text);

	if (text.empty())
	{
		std::cout << "\nERROR: File is empty\n";
		return;
	}

	int count = 1;
	for (size_t i = 0; i < text.size(); ++i)
	{
		if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
		{
			if (i < text.size() - 1 && text[i] == text[i + 1])
			{
				++count;
			}
			else
			{
				if (count > 1)
				{
					res += std::to_string(count);
				}
				res += text[i];
				count = 1;
			}
		}
		else
		{
			res += text[i];
		}
	}

	clearFile(file, nameFile);

	file << res;
}

void decompression(std::fstream& file, std::string nameFile)
{
	std::string text, buf, res = "";
	getText(file, text);

	if (text.empty())
	{
		std::cout << "\nERROR: File is empty\n";
		return;
	}

	int count;
	for (int i = 0; i < text.size(); ++i)
	{
		if (std::isdigit(text[i]))
		{
			for (int j = i + 1; j < text.size(); ++j)
			{
				if (text[j] < '0' || text[j] > '9')
				{
					buf = text.substr(i, i + j);
					count = std::stoi(buf);

					while (count)
					{
						res += text[j];
						--count;
					}

					i = j;
					break;
				}
			}
		}
		else
		{
			res += text[i];
		}
	}

	clearFile(file, nameFile);

	file << res;
}

void writeTextInConsole(const std::fstream& file)
{
	std::stringstream sstream;
	sstream << file.rdbuf();

	std::string line;
	while (std::getline(sstream, line))
	{
		std::cout << line << std::endl;
	}
}

void menu_RLE()
{
	std::cout << "\n\n1 - Switch file\n" << "2 - Compression\n"
		<< "3 - Decompression\n" << "4 - Get text from a file in console\n"
		<< "0 - Exit\n\n";
}

void testComp_RLE()
{
	std::fstream ffile;
	std::string nameFile;
	char choice;
	bool start = true;

	switchFile(ffile, nameFile);
	menu_RLE();

	while (start)
	{
		std::cout << "Select an action: ";
		while (!(std::cin >> choice))
		{
			std::cin.ignore();
			std::cin.clear();
		}

		switch (choice)
		{
		case '1':
		{
			switchFile(ffile, nameFile);

			break;
		}
		case '2':
		{
			compression(ffile, nameFile);

			break;
		}
		case '3':
		{
			decompression(ffile, nameFile);

			break;
		}
		case '4':
		{
			writeTextInConsole(ffile);

			break;
		}
		case '0':
		{
			start = false;

			break;
		}
		default:
			std::cout << "Not finding this nubmer menu";
			break;
		}
	}


	ffile.close();
	std::cout << "\nFile is close" << std::endl;
}