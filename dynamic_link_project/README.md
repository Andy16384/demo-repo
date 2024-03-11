1. Directly Compile

## Abstract:

g++ -g -fPIC -c library.cc
g++ -shared library.o -o libtest.so
g++ -g -o main main.cc -ltest -L.
LD_LIBRARY_PATH=. ./main

## Total message:
g++ -g -fPIC -c library.cc
g++ -shared library.o -o libtest.so
g++ -g -o main main.cc libtest.so (or g++ -g -o main main.cc -ltest -L.)
./main
./main: error while loading shared libraries: libtest.so: cannot open shared object file: No such file or directory
LD_LIBRARY_PATH=. ./main
Hello, World!

2. 

## Abstract:

g++ -fPIC -g -shared -o libtest.so library.cc
cp libtest.so /usr/local/lib
g++ -g -o main main.cc -ltest
ldconfig
./main
Hello, World!

## Total message:
g++ -fPIC -g -shared -o libtest.so library.cc
cp libtest.so /usr/local/lib
g++ -g -o main main.cc -ltest
./main
./main: error while loading shared libraries: libtest.so: cannot open shared object file: No such file or directory
ldconfig
ldd main
        linux-vdso.so.1 (0x00007ffe0a18a000)
        libtest.so => /usr/local/lib/libtest.so (0x00007f7daa210000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f7da9fe7000)
        libstdc++.so.6 => /lib/x86_64-linux-gnu/libstdc++.so.6 (0x00007f7da9dbb000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f7daa21f000)
        libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f7da9cd4000)
        libgcc_s.so.1 => /lib/x86_64-linux-gnu/libgcc_s.so.1 (0x00007f7da9cb4000)
./main
Hello, World!

3. Using Cmake

CMakeLists.txt:
==============================================================================
# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(dynanmic_project)

set(CMAKE_CXX_STANDARD 11)

add_library(dynamic_lib SHARED library.cc)
add_executable(main main.cc)

target_link_libraries(main dynamic_lib)
==============================================================================

mkdir build
cd build
cmake ..
make


Ref: https://medium.com/fcamels-notes/linux-%E7%B7%A8%E8%AD%AF-shared-library-%E7%9A%84%E6%96%B9%E6%B3%95%E5%92%8C%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A0%85-cb35844ef331