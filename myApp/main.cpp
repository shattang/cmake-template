#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/regex.hpp>
#include <vector>

#include <myStaticLib/myStaticLib.h>
#include <myDynamicLib/myDynamicLib.h>

int main(int argc, char **argv)
{
    boost::filesystem::path full_path(boost::filesystem::current_path());
    std::cout << "Current directory: " << full_path << std::endl;

    auto o1 = MyProject::MyStaticClass();
    auto o2 = MyProject::MyDynamicClass();
    std::cout << o1.getMessage() << std::endl;
    std::cout << o2.getMessage() << std::endl;

    boost::regex pat("^Subject: (Re: |Aw: )*(.*)");

    std::vector<int> values;
    for (int i = 1; i < argc; ++i)
    {
        const std::string line(argv[i]);
        std::cout << line << std::endl;
        boost::smatch matches;
        if (boost::regex_match(line, matches, pat))
            std::cout << "Regarding : " << matches[2] << std::endl;
    }

    return 0;
}
