# Neural Network.
net: Network.o
	g++ Main.cpp Network.o -o net


# Network.
Network.o: Network.cpp
	g++ -c Network.cpp


# Clean.
clean:
	rm -rf *.o net
