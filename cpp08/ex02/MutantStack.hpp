#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

        MutantStack() : std::stack<T>() {};
        virtual ~MutantStack() {};

        iterator begin() {
            return (std::stack<T>::c.begin());
        }

        iterator end() {
            return (std::stack<T>::c.end());
        }

        reverse_iterator rbegin() {
            return (std::stack<T>::c.rbegin());
        }

        reverse_iterator rend() {
            return (std::stack<T>::c.rend());
        }


        const_iterator cbegin() const {
            return (std::stack<T>::c.begin());
        }

        const_iterator cend() const {
            return (std::stack<T>::c.end());
        }

        const_reverse_iterator crbegin() const {
            return (std::stack<T>::c.rbegin());
        }

        const_reverse_iterator crend() const {
            return (std::stack<T>::c.rend());
        }

        MutantStack(MutantStack const & src) : std::stack<T>(src) {};
        MutantStack & operator=(MutantStack const & rhs) {
            std::stack<T>::operator=(rhs);
            return (*this);
        };
    private:

};

#endif