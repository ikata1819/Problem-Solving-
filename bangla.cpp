#include <iostream>
#include <locale>
#include <codecvt>
#include <io.h>
#include <fcntl.h>

int main() {
    // Set the console to UTF-8 mode
   _setmode(_fileno(stdout), _O_U16TEXT);  // Set output mode to Unicode (16-bit)

    // Print Bengali text
    std::wcout << "বাংলা টেক্সট প্রিন্ট করুন।" << std::endl;

    return 0;
}
