#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

/**
 * @brief Abstract base class representing a member (admin or general).
 */
class Member {
protected:
	string id;
	string password;

public:
	/**
	 * @brief Constructor to initialize member credentials.
	 * @param id Member ID
	 * @param password Member password
	 */
	Member(const string& id, const string& password);

	/**
	 * @brief Gets the member ID.
	 * @return ID string
	 */
	string getId() const;

	/**
	 * @brief Gets the member password.
	 * @return Password string
	 */
	string getPassword() const;

	/**
	 * @brief Virtual destructor.
	 */
	virtual ~Member() {}
};

#endif
