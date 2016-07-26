# Neural Network.
net: network.o
	g++ -std=c++14 src/main.cpp network.o -o net -larmadillo


# Network class utilizing Armadillo linear algebra library.
# Armadillo can be downloaded at http://arma.sourceforge.net/download.html and installed following the instruction in README.txt.
network.o: src/network/network.cpp
	g++ -std=c++14 -c src/network/network.cpp -larmadillo


# Cleanup.
clean:
	rm -rf *.o net
