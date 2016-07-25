# Neural Network.
net: Network.o
	g++ -std=c++14 src/Main.cpp Network.o -o net -larmadillo


# Network class utilizing Armadillo linear algebra library.
# Armadillo can be downloaded at http://arma.sourceforge.net/download.html and installed following the instruction in README.txt.
Network.o: src/Network/Network.cpp
	g++ -std=c++14 -c src/Network/Network.cpp -larmadillo


# Cleanup.
clean:
	rm -rf *.o net
