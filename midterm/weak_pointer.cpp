//
// Created by ������ on 2019/10/28.
//

#include "weak_pointer.h"

namespace ptr {
	ptr::weak_pointer::weak_pointer() {
		// TODO: Fill it
		// ptr�� default������ nullptr�� ����
		this->ptr = nullptr;
	}

	weak_pointer::weak_pointer(shared_ref& shared) {
		// TODO: Fill it
		// shared�� get���� student* ���� ptr�� ������ ����
		this->ptr = shared.get();
	}

	weak_pointer::weak_pointer(const weak_pointer& weak) {
		// TODO: Fill it
		// weak�� ptr�� ptr������ ����
		this->ptr = weak.ptr;
	}

	int weak_pointer::is_expired() {
		// TODO: Fill it
		// ptr_map�� �ڽ��� ptr ���� �ִ��� Ȯ���ϰ�
		// ptr_map�� value�� mgr�� �����Ǿ����� Ȯ��
		// ptr_map���� ptr�� �����ϴ� mgr�� ������(nullptr�� �ƴϸ�) 1 ����
		// �ƴ� ��� 0 ����

		if(this->ptr_map[ptr] != nullptr){
			return 0;
		}
		else{
			return 1;
		}

	}

	student* weak_pointer::get() {
		// TODO: Fill it
		// ptr_map���� ptr�� �����ϴ� mgr�� ������(nullptr�� �ƴϸ�) ptr�� ����
		// �ƴ� ��� nullptr ����
		if(this->ptr_map[ptr] == nullptr){
			return nullptr;
		}
		else{
			return this->ptr;
		}
	}

}
