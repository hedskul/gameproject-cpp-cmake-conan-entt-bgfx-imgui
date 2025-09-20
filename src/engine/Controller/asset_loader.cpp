
#include <iostream>
#include <fstream>
#include <string>

std::string load_asset(const std::string& path) {
    std::ifstream file(path, std::ios::in | std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open asset: " << path << std::endl;
        return "";
    }

    std::string contents((std::istreambuf_iterator<char>(file)),
                         std::istreambuf_iterator<char>());
    file.close();
    return contents;
}
