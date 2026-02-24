CXX ?= g++


all:
	$(CXX) weather.cpp window.cpp -o weather `pkg-config --cflags gtk4` `pkg-config --libs gtk4`

debug: clean
	$(CXX) -g weather.cpp window.cpp -o weather `pkg-config --cflags gtk4` `pkg-config --libs gtk4`

clean:
	rm -f weather
	rm -rf weather.dSYM