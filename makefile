# Neural Network.
net:
	g++ Main.cpp Network.o -o net


# Network.
Network.o:
	g++ -c Network.cpp


# Clean.
clean:
	rm -rf *.o net
