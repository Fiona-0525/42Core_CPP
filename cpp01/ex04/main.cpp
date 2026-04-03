#include "replaceall.hpp"

int main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename(av[1]);
    std::ifstream ifs(filename);
    if (!ifs) 
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
    ifs.close();

    std::string result = replaceall(content, av[2], av[3]);

    std::ofstream ofs(filename + ".replace");
    if (ofs) 
    {
        ofs << result;
        ofs.close();
    }
    else
    {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }
    return 0;
}