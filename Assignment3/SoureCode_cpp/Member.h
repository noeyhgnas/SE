// Member.h
#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {
protected:
    string id;
    string password;

public:
    Member(const string& id, const string& password);
    string getId() const;
    string getPassword() const;
    virtual ~Member() {}
};

#endif
