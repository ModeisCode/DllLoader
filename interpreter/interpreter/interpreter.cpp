#include <iostream>
#include <Windows.h>
#include <DllLoader.h>

int main() {

    std::string code = "DLL_LOAD standart mydll ShowMessageBox : ret nptr val NO_VAL";

    HMODULE dll_ = LoadLibrary(L"C:\\Users\\doguk\\OneDrive\\Masaüstü\\DEVLAB\\CSHARP\\interpreter\\interpreter\\mydll.dll");
    int a = 0;
    int b = 10;
    int c = 50;
    runFunctionFromDll(dll_,"ShowMessageBox",nullptr);
    return 0;
}

/*    
    // DLL'yi yükle

    HMODULE dll = LoadLibrary(L"C:\\Users\\doguk\\OneDrive\\Masaüstü\\DEVLAB\\CSHARP\\interpreter\\interpreter\\mydll.dll");
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return 1;
    }

    // Fonksiyon adresini al
    int (*add)(int, int) = (int (*)(int, int))GetProcAddress(dll, "add");
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    // Fonksiyonu çağır
    int result = add(10, 20);

    // Sonucu yazdır
    std::cout << "Sonuç: " << result << std::endl;


    // DLL'yi kaldır
    FreeLibrary(dll);
*/
