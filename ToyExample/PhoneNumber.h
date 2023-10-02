#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H

class PhoneNumber
{
public:
	PhoneNumber();
	~PhoneNumber();

	int getCountryCode();
	int getAreaCode();
	int getNumber();
	int getType();

	void setCountryCode(int countryCode);
	void setAreaCode(int areaCode);
	void setNumber(int number);
	void setType(int type);

private:
	int countryCode;
	int areaCode;
	int number;
	// type code: HOME=0, OFFICE=1, FAX=2, CELL=3, and PAGER=4.
	int type;
};

#endif // !PHONE_NUMBER_H

