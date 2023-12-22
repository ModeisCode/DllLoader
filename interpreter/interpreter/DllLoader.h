#pragma once
#ifndef DllLoader
#include <iostream>
#include <Windows.h>
#include <vector>

bool runFunctionFromDll(HMODULE dll, LPCSTR func_name, void* ret)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)())GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add();
}


bool runFunctionFromDll1(HMODULE dll, LPCSTR func_name, void* ret, void* a1)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)(decltype(a1)))GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add(*(decltype(a1)*)a1);
}

bool runFunctionFromDll2(HMODULE dll, LPCSTR func_name, void* ret, void* a1, void* a2)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)(decltype(a1), decltype(a2)))GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add(*(decltype(a1)*)a1, *(decltype(a2)*)a2);
}

bool runFunctionFromDll3(HMODULE dll, LPCSTR func_name, void* ret, void* a1, void* a2 , void *a3)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)(decltype(a1), decltype(a2), decltype(a3)))GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add(*(decltype(a1)*)a1, *(decltype(a2)*)a2, *(decltype(a3)*)a3);
}

bool runFunctionFromDll4(HMODULE dll, LPCSTR func_name, void* ret, void* a1, void* a2, void* a3, void* a4)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)(decltype(a1), decltype(a2), decltype(a3), decltype(a4)))GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add(*(decltype(a1)*)a1, *(decltype(a2)*)a2, *(decltype(a3)*)a3, *(decltype(a4)*)a4);
}

bool runFunctionFromDll5(HMODULE dll, LPCSTR func_name, void* ret, void* a1, void* a2, void* a3, void* a4, void* a5)
{
    if (dll == NULL) {
        std::cerr << "DLL yüklenemedi." << std::endl;
        return false;
    }

    auto add = (decltype(ret) (*)(decltype(a1), decltype(a2), decltype(a3) , decltype(a4) , decltype(a5)))GetProcAddress(dll, func_name);
    if (add == NULL) {
        std::cerr << "Fonksiyon adresi alınamadı." << std::endl;
        return 1;
    }

    add(*(decltype(a1)*)a1, *(decltype(a2)*)a2, *(decltype(a3)*)a3, *(decltype(a4)*)a4, *(decltype(a5)*)a5);
}





#endif // !DllLoader
