// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/28 14:11:46 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 15:49:53 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(LOW_GRADE){}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _grade(copy._grade), _name(copy._name) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &right)
{
	_grade = right._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return _name;
}

int					Bureaucrat::getGrade(void) const
{
	return _grade;
}

void				Bureaucrat::incGrade(void)
{
	if (_grade - 1 < HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decGrade(void)
{
	if (_grade + 1 > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}
