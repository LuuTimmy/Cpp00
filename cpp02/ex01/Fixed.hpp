#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int nb);
        Fixed(const float nb);
        ~Fixed(void);



        int     getRawBits(void) const;
        void    setRawBits(int const newValue);
        Fixed(Fixed const & src);
        Fixed &	operator=(Fixed const & rhs);
    private:
        int					value;
        const static int	const_static_value = 8;
};

#endif