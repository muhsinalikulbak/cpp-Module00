#include "Replace.hpp"


void	Replace::fileReplacer(const char* file, const char* oldStr, const char* newStr)
{
    const char* chrFile;
    std::string strFile(file);

    strFile += ".replace";
    chrFile = strFile.c_str();
    
    std::ifstream    sourceFile(file);
    std::ofstream    newFile(chrFile, std::ios::out | std::ios::trunc);

    // stringi char*'a dönüştür
    // char * ile string karşılaştırılabiliyor mu bak
    // Dosyayı yazmak üzere aç
    // getline'dan gelen verileri işle
    // abc'leri zabcz ile değiştir, test case olarak kullan örnek olarak abcabc = zabczzabcz olmalıdır
}
