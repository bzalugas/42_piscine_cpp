// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/04/28 14:05:41 by bazaluga          #+#    #+#             //
//   Updated: 2025/04/28 14:53:33 by bazaluga         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include <exception>
# include <string>

class	Bureaucrat {
public:
	class GradeTooHighException : public std::exception{
	public:
		virtual const char	*what() const throw()
		{
			return "Grade too high.";
		}
	};

	class GradeTooLowException : public std::exception{
	public:
		virtual const char	*what() const throw()
		{
			return "Grade too low.";
		}
	};

	static const int	HIGH_GRADE = 1;
	static const int	LOW_GRADE = 150;

	Bureaucrat(void);
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const &right);

	const std::string	&getName(void) const;
	int					getGrade(void) const;
	void				incGrade(void);
	void				decGrade(void);

private:
	const std::string	_name;
	int					_grade;
};

#endif // BUREAUCRAT_H
