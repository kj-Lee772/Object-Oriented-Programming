#include "student.h"

student::student() {
	// TODO: Fill it
	// this�� name�� default���� nullptr���� ����
	// this�� student_id�� default���� -1 ���� ����
	this->name = nullptr;
	this->student_id = -1;
}

student::student(char* name) {
	// TODO: Fill it
	// this�� name�� name������ ����
	// this�� student_id�� default���� -1 ���� ����
	this->name = name;
	this->student_id = -1;
}

student::student(int student_id) {
	// TODO: Fill it
	// this�� name�� default���� nullptr���� ����
	// this�� student_id�� student_id ������ ����
	this->name = nullptr;
	this->student_id = student_id;
}

student::student(char* name, int student_id) {
	// TODO: Fill it
	// this�� name�� name ������ ����
	// this�� student_id�� student_id ������ ����
	this->name = name;
	this->student_id = student_id;
}

int student::get_student_id() {
	// TODO: Fill it
	// student_id �� ���� ��ȯ�ϰ� ����
	return this->student_id;
}

int student::get_id() {
	// TODO: Fill it
	// 1�� �����ϵ��� ����
	return 1;
}
