#include <iostream>
#include <fstream> // for file input/output
using namespace std;

int main()
{
    std::ofstream outfile;                                       // create an output file stream
    outfile.open("../../Desktop/loveletter.txt", std::ios::app); // open the file in append mode
    outfile << "This is a letter to You." << endl;
    outfile << "My dear Adekyensroma" << endl;
    outfile << "Today has been a strange day because I haven't heard from you the whole day" << endl;
    outfile << "Only for your Mom to call in the evening and you refused to talk to me. I think I should come over so we fight about this" << endl;
    outfile << "I miss you babe girl!" << endl;

    // outfile.close(); // close the file

    std::ifstream new_file;
    new_file.open("../../Desktop/loveletter.txt");
    std::string line;
    if (new_file.is_open())
    {
        while (getline(new_file, line))
        {
            std::cout << line << std::endl;
        }
        new_file.close();
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
    return 0;
}
