#ifndef ARRAY_HPP
#define ARRAY_HPP

# define DEFAULT	"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"

template<class T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array &			operator=(const Array &other);
		T &				operator[](unsigned int index);
		const T &		operator[](unsigned int index) const;


		unsigned int	size() const;
	private:
		unsigned int	size_;
		T *				data_;

};

template<typename T>
Array<T>::Array()
{
	this->size_ = 0;
	this->data_ = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	if (n == 0)
		Array();
	else if (n > 0)
	{
		this->size_ = n;
		this->data_ = new T[this->size_];
		for (unsigned int i = 0; i < n; i++)
			this->data_[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &other): size_(other.size_), data_(new T[other.size_])
{
	for (unsigned int i = 0; i < other.size_; i++)
		this->data_[i] = other.data_[i];
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->data_;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		this->size_ = other.size_;
		this->data_ = new T[this->size_];
		for (unsigned int i = 0; i < this->size_; i++)
			this->data_[i] = other.data_[i];
	}
	return (*this);
}

template<typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->size_ || index < 0)
		throw std::out_of_range("index is out of range");
	else
		return (data_[index]);
}

template<typename T>
const T & Array<T>::operator[](unsigned int index) const
{
	if (index >= this->size_ || index < 0)
		throw std::out_of_range("index is out of range");
	else
		return (data_[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->size_);
}

#endif