# Neural Network.
net: Network.o
	g++ -std=c++11 src/Main.cpp Network.o -o net


# Network class.
Network.o: src/Network/Network.cpp
	g++ -std=c++11 -c src/Network/Network.cpp


# Cleanup.
clean:
	rm -rf *.o net
