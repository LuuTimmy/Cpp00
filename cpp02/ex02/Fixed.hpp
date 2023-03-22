#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int nb);
        Fixed(const float nb);
        ~Fixed(void);


        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const newValue);
        
        Fixed(Fixed const & src);

        Fixed & operator=(Fixed const & rhs);

        bool    operator>(Fixed const & rhs) const;
        bool    operator<(Fixed const & rhs) const;
        bool    operator>=(Fixed const & rhs) const;
        bool    operator<=(Fixed const & rhs) const;
        bool    operator==(Fixed const & rhs) const;
        bool    operator!=(Fixed const & rhs) const;

        Fixed   operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const & rhs);
        Fixed   operator/(Fixed const & rhs);

        Fixed   operator++(int);
        Fixed   operator--(int);
        Fixed   operator++();
        Fixed   operator--();

        static Fixed & min(Fixed & a, Fixed & b);
        static Fixed & max(Fixed & a, Fixed & b);

        static const Fixed & min(const Fixed & a, const Fixed & b);
        static const Fixed & max(const Fixed & a, const Fixed & b);
    private:
        int					value;
        const static int	const_static_value = 8;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);

#endif