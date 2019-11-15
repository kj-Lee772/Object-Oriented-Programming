.SUFFIXES: .cpp .o

OBJECTS = print.o student_id.o main.o

CXX = g++
CPPFLAGS = -c

TARGET = HW01

$(TARGET) : $(OBJECTS)
			  $(CXX) -o $(TARGET) $(OBJECTS)

clean :
		rm -rf $(OBJECTS) $(TARGET)

