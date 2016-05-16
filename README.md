# strutext-vs
Переношу библиотеку strutext под Windows и Visual Studio

Форк библиотеки с инструкцией по установке под Ubuntu Linux: https://github.com/IlyaGutnikov/strutext

Инструкция по установке boostlibs:

Build the 32-bit libraries

This installs the Boost header files under C:\Boost\include\boost-(version), and the 32-bit libraries under C:\Boost\lib\i386. Note that the default location for the libraries is C:\Boost\lib but you’ll want to put them under an i386 directory if you plan to build for multiple architectures.

1. Unzip Boost into a new directory.
2. Start a 32-bit MSVC command prompt and change to the directory where Boost was unzipped.
3. Run: `bootstrap`
4. Run: `b2 toolset=msvc-12.0 --build-type=complete --libdir=C:\Boost\lib\i386 install`

        For Visual Studio 2012, use toolset=msvc-11.0
        
        For Visual Studio 2010, use toolset=msvc-10.0
        
        For Visual Studio 2015, use toolset=msvc-14.0
        
5. Add C:\Boost\include\boost-(version) to your include path.
6. Add C:\Boost\lib\i386 to your libs path.

Build the 64-bit libraries

This installs the Boost header files under C:\Boost\include\boost-(version), and the 64-bit libraries under C:\Boost\lib\x64. Note that the default location for the libraries is C:\Boost\lib but you’ll want to put them under an x64 directory if you plan to build for multiple architectures.

1. Unzip Boost into a new directory.
2. Start a 64-bit MSVC command prompt and change to the directory where Boost was unzipped.
3. Run: `bootstrap`
4. Run: `b2 toolset=msvc-12.0 --build-type=complete --libdir=C:\Boost\lib\x64 architecture=x86 address-model=64 install`

        For Visual Studio 2012, use toolset=msvc-11.0
        
        For Visual Studio 2010, use toolset=msvc-10.0
        
        For Visual Studio 2015, use toolset=msvc-14.0
        
5. Add C:\Boost\include\boost-(version) to your include path.
6. Add C:\Boost\lib\x64 to your libs path.

Link to lib path:

1. Right-click example in the Solution Explorer pane and select Properties from the resulting pop-up menu
2. In Configuration Properties > Linker > Additional Library Directories, enter the path to the Boost binaries, e.g. C:\Program Files\boost\boost_1_60_0\lib\.
3. From the Build menu, select Build Solution.

##Генерация словаря
Последовательность комманд:

1. Скачать strutext (https://github.com/IlyaGutnikov/strutext) в папку strutext123
2. Выполнить `cmake strutext-master` внутри strutext123
3. Выполнить `cmake --build strutext123/`
4. Выполнить аналог комманды с вашими путями `./Debug/bin/aot-parser -t /home/ilyagutnikov/git/strutext123/strutext-master/morpho/aot/rus_tabs.txt -d /home/ilyagutnikov/git/strutext123/strutext-master/morpho/aot/rus_morphs.txt -m rus -b aot-rus.bin`
