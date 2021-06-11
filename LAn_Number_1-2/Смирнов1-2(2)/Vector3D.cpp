#include "Vector3D.h"
Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(const double x, const double y, const double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
ostream& operator<<(ostream& out, Vector3D& vec)
{
	out << "( " << vec.x << "; ";
	out << vec.y << "; ";
	out << vec.z << ") " << endl;
	out << "Length = " << vec.get_vector_length() << endl;
	return out;
}
Vector3D Vector3D::operator+(const Vector3D& other)
{
	return Vector3D(this->x + other.x, this->y + other.y, this->z + other.z);
}
Vector3D Vector3D::operator-(const Vector3D& other)
{
	return Vector3D(this->x - other.x, this->y - other.y, this->z - other.z);
}
Vector3D Vector3D::operator*(const double a)
{
	return Vector3D(this->x * a, this->y * a, this->z * a);
}
double Vector3D::operator*(const Vector3D& other)
{
	return this->x * other.x, this->y * other.y, this->z * other.z;
}
double Vector3D::get_vector_length() const
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
double Vector3D::get_x()const
{
	return x;
}
double Vector3D::get_y()const
{
	return y;
}
double Vector3D::get_z()const
{
	return z;
}
bool Vector3D::operator==(const Vector3D& other)
{
	if (fabs(this->get_vector_length() - other.get_vector_length()) < numeric_limits<double>::epsilon())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Vector3D::operator>(const Vector3D& other)
{
	if (this->get_vector_length() > other.get_vector_length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Vector3D::operator<(const Vector3D& other)
{
	if (this->get_vector_length() < other.get_vector_length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
