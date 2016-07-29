# Neural Network.
net: network.o
	g++ -std=c++14 src/main.cpp network.o -o net -larmadillo


# Network class utilizing Armadillo linear algebra library.
network.o: src/network/network.cpp
	g++ -std=c++14 -c src/network/network.cpp -larmadillo


# Cleanup.
clean:
	rm -rf *.o net
