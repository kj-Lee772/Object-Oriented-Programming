.SUFFIXES: .cpp .o

OBJECTS = bike.o car.o vehicle.o
MAIN = main.o $(OBJECTS)

CXX = g++

TARGET = test
TEST = test

$(TEST) : $(MAIN)
			$(CXX) -o $(TEST) $(MAIN)

clean :
	rm -rf $(TEST) $(MAIN)

bike.o : bike.cpp
car.o : car.cpp
main.o : main.cpp
vehicle.o : vehicle.cpp
