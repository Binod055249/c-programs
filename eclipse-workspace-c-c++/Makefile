CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Helloworld.o

LIBS =

TARGET =	Helloworld.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
