#include <iostream>
#include <string>
#include <windows.h>

bool endsWith(const std::string &mainStr, const std::string &toMatch)
{
    if(mainStr.size() >= toMatch.size() &&
            mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
            return true;
        else
            return false;
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        std::cout << "Not enough arguments" << std::endl;
        return -1;
    }

    // if(!endsWith(std::string(argv[1]), ".exe")) {
    //     std::cout << "Invalid path" << std::endl;
    //     return -1;
    // }

    ShellExecute(NULL, "open", argv[1], NULL, NULL, SW_SHOWDEFAULT);

    return 0;
}
