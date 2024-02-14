#include <iostream>
#include <Windows.h>
#include <DllLoader.h>

int main() {

    std::string code = "DLL_LOAD standart mydll ShowMessageBox : ret nptr val NO_VAL";

    HMODULE dll_ = LoadLibrary(L"C:\\Users\\jh\\OneDrive\\Masaüstü\\DEVLAB\\CSHARP\\interpreter\\interpreter\\mydll.dll");
    int a = 0;
    int b = 10;
    int c = 50;
    runFunctionFromDll(dll_,"ShowMessageBox",nullptr);
    return 0;
}

