// Member.cpp
#include "Member.h"

Member::Member(const string& id, const string& password) {
    this->id = id;
    this->password = password;
}

string Member::getId() const {
    return id;
}

string Member::getPassword() const {
    return password;
}
