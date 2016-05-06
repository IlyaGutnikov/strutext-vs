# strutext-vs
Переношу библиотеку strutext под Windows и Visual Studio

Форк библиотеки с инструкцией по установке под Ubuntu Linux: https://github.com/IlyaGutnikov/strutext

Инструкция по установке boostlibs:

Build the 32-bit libraries

This installs the Boost header files under C:\Boost\include\boost-(version), and the 32-bit libraries under C:\Boost\lib\i386. Note that the default location for the libraries is C:\Boost\lib but you’ll want to put them under an i386 directory if you plan to build for multiple architectures.

    Unzip Boost into a new directory.
    Start a 32-bit MSVC command prompt and change to the directory where Boost was unzipped.
    Run: bootstrap
    Run: b2 toolset=msvc-12.0 --build-type=complete --libdir=C:\Boost\lib\i386 install
        For Visual Studio 2012, use toolset=msvc-11.0
        For Visual Studio 2010, use toolset=msvc-10.0
    Add C:\Boost\include\boost-(version) to your include path.
    Add C:\Boost\lib\i386 to your libs path.

Build the 64-bit libraries

This installs the Boost header files under C:\Boost\include\boost-(version), and the 64-bit libraries under C:\Boost\lib\x64. Note that the default location for the libraries is C:\Boost\lib but you’ll want to put them under an x64 directory if you plan to build for multiple architectures.

    Unzip Boost into a new directory.
    Start a 64-bit MSVC command prompt and change to the directory where Boost was unzipped.
    Run: bootstrap
    Run: b2 toolset=msvc-12.0 --build-type=complete --libdir=C:\Boost\lib\x64 architecture=x86 address-model=64 install
        For Visual Studio 2012, use toolset=msvc-11.0
        For Visual Studio 2010, use toolset=msvc-10.0
    Add C:\Boost\include\boost-(version) to your include path.
    Add C:\Boost\lib\x64 to your libs path.

