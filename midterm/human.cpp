//
// Created by ������ on 2019/10/28.
//

#include "human.h"

human::human() {
	// TODO: Fill it
	// name �� default ���� nullptr�� ����'
	this->name = nullptr;
}

human::human(char* name) {
	// TODO: Fill it
	// name �� ���� ����
	this->name = name;
}

char* human::get_name() {
	// TODO: Fill it
	// name �� ���� ��ȯ�ϰ� ����
	return this->name;
}

int human::get_id() {
	// TODO: Fill it
	// 0�� �����ϵ��� ����
	return 0;
}
