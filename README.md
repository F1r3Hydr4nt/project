# gcc
mkdir build && cd build
CFLAGS="-g -fgnu89-inline" CXXFLAGS="-g -std=c++11" ../configure --disable-docs --disable-werror --disable-multilib --disable-bootstrap --with-gmp=../gmp-4.3.2 --with-mpfr=../mpfr-2.4.2 --with-mpc=../mpc-0.8.1 MAKEINFO=missing
