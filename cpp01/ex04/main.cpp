#include "replaceall.hpp"

int main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    std::string fullContent;
    std::ifstream ifs(filename);
    if (!ifs.is_open()) 
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(ifs, line)){
        fullContent += line;
        if (!ifs.eof())
            fullContent += "\n";
    }

    std::string result = replaceall(fullContent, s1, s2);
    
    std::ofstream ofs(filename + ".replace");
    if (ofs) 
        ofs << result;
    else
    {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }
    return 0;
}