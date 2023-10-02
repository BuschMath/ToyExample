#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{
}

PhoneNumber::~PhoneNumber()
{
}

int PhoneNumber::getCountryCode()
{
	return countryCode;
}

int PhoneNumber::getAreaCode()
{
	return areaCode;
}

int PhoneNumber::getNumber()
{
	return number;
}

int PhoneNumber::getType()
{
	return type;
}

void PhoneNumber::setCountryCode(int countryCode)
{
	this->countryCode = countryCode;
}

void PhoneNumber::setAreaCode(int areaCode)
{
	this->areaCode = areaCode;
}

void PhoneNumber::setNumber(int number)
{
	this->number = number;
}

void PhoneNumber::setType(int type)
{
	this->type = type;
}
