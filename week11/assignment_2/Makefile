.SUFFIXES: .cpp .o

OBJECTS = Complex.o Float.o Integer.o test.o

CXX = g++

TARGET = test

$(TARGET) : $(OBJECTS)
			  $(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)

Complex.o : Complex.cpp
Float.o : Float.cpp
Integer.o : Integer.cpp
test.o : test.cpp
