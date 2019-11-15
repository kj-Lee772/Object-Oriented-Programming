//
// Created by ������ on 14/10/2019.
//

#include "shared_ref.h"

namespace ptr {
	shared_ref::shared_ref() {
		// TODO: Fill it
		// _mgr�� default ���� �� mgr���� ����
		this->_mgr = empty_mgr;
	}

	shared_ref::shared_ref(student* student) {
		// TODO: Fill it
		// ptr_map�� student�� �ּҰ� ������ _mgr�� �� mgr���� ����
		// ptr_map�� student�� �ּҰ� ������ _mgr�� student�� �޸𸮸� �����ϴ� mgr���� �����ϰ�
		// ptr_map�� key�� student�� �ּҷ� �ϰ� value�� mgr�� ��� ==> student�� �ּҰ� shared_ref�� mgr�� �����Ǵ��� Ȯ�� ����
		
		if(this->ptr_map[student] == nullptr){
			this->_mgr = new mgr(student);
			this->ptr_map[student] = this->_mgr;
			this->ptr_map.insert(std::make_pair(student, this->_mgr));
		}
		else{
			this->_mgr = empty_mgr;
		}
	}

	shared_ref::shared_ref(const shared_ref& shared) {
		// TODO: Fill it
		// shared_ref �� _mgr�� �ڽ��� _mgr�� ����
		// reference�� �����Ͽ����Ƿ� increase ȣ��
		this->_mgr = shared._mgr;
		this->increase();
	}

	shared_ref::~shared_ref() {
		// TODO: Fill it
		// mgr�� ��ȯ�ϴ� release�� ȣ���ϰ� ����
		this->release();
	}

	void shared_ref::release() {
		// TODO: Fill it
		// _mgr�� nullptr�� ��� �ƹ� �۾��� ���� ����
		// _mgr�� nullptr�� �ƴ� ��� _mgr�� count�� ���ҽ�Ű��
		// count�� 0�� ��� ptr_map���� _mgr�� ptr�� key�� value�� nullptr�� �����ϰ� _mgr�� delete��
		// ==> student �����Ϳ� ���� mgr ������ �������� �˷���
		
		if(this->_mgr != nullptr){
			this->_mgr->count--;
		}
		if(this->_mgr->count == 0){
			this->ptr_map[this->_mgr->ptr] = nullptr;
			this->_mgr->~mgr();
		}
		this->_mgr = new mgr();
	}

	student* shared_ref::get() const {		//�ϼ�?
		// TODO: Fill it
		// _mgr�� nullptr�� ��� nullptr ��ȯ�ϰ�
		// _mgr�� nullptr�� �ƴ� ��� _mgr�� ptr�� return �ϵ��� ����
		if (this->_mgr == nullptr)
			return nullptr;
		else
			return this->_mgr->ptr;
	}

	void shared_ref::increase() {	//�ϼ�?
		// TODO: Fill it
		// _mgr�� nullptr�� ��� �ƹ��� �۾��� ���� ����
		// _mgr�� nullptr�� �ƴ� ��� _mgr�� count�� ������Ŵ
		if (this->_mgr != nullptr) {
			this->_mgr->count++;
		}
	}

	shared_ref& shared_ref::operator=(const shared_ref& r) {	//�ϼ�?
		// TODO: Fill it
		// r�� �ּҰ� this�� ���� ��� �ƹ��� �۾��� ���� �ʰ� *this�� ����
		// ex: a = a;
		// r�� �ּҰ� this�� �ٸ� ��� ���� _mgr�� release�ϰ� r�� _mgr�� this�� _mgr�� ����. �� �� increase
		// ex: b = a; -> a�� ���� ����Ű�� ���� a�� b �� ���� ��
		if (this != &r) {
			this->release();
			this->_mgr = r._mgr;
			this->increase();
			return *this;
		}
		return *this;
	}

	student* shared_ref::operator->() {		//�ϼ�?
		// TODO: Fill it
		// _mgr�� nullptr�� ��� nullptr ��ȯ
		// _mgr�� nullptr�� �ƴ� ��� _mgr�� ptr�� ��ȯ
		if (this->_mgr == nullptr) {
			return nullptr;
		}
		else {
			return this->_mgr->ptr;
		}

	}

	int shared_ref::count() {		//�ϼ�?
		// TODO: Fill it
		// _mgr�� nullptr�� ��� 0�� ��ȯ
		// _mgr�� nullptr�� �ƴ� ��� _mgr�� count�� ��ȯ
		if (this->_mgr == nullptr) {
			return 0;
		}
		else {
			return this->_mgr->count;
		}
	}

}
