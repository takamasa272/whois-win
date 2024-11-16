#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string options;

    for (size_t i = 1; i < argc; i++)
    {
        options += argv[i];
        options += " ";
    }

    string exec = "wsl whois " + options;
    system(exec.c_str());

    return 0;
}
