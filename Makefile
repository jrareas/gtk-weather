CXX ?= g++


all:
	$(CXX) -D'SHARE_ICON="./icons/"' *.cpp -o weather `pkg-config --cflags gtk4` `pkg-config --libs gtk4`

debug: clean
	$(CXX) -g -D'SHARE_ICON="./icons/"' *.cpp -o weather `pkg-config --cflags gtk4` `pkg-config --libs gtk4`

clean:
	rm -f weather
	rm -rf weather.dSYM