#include <string>

int main(int argc, char *argv[]) {
    std::string options;

    for (size_t i = 1; i < argc; i++)
    {
        options += " ";
        options += argv[i];
    }

    std::string exec = "wsl whois" + options;
    system(exec.c_str());

    return 0;
}
