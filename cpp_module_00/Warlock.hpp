/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:43:57 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 16:28:23 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef WARLOCK_HPP
#define  WARLOCK_HPP
#include <string>

class Warlock {
	private :
		std::string name; 
		std::string title;

		Warlock(Warlock const &to_copy);
		Warlock();
		Warlock &operator=(Warlock const &to_copy);

	public : 
		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &given_title);

		void introduce() const;

		Warlock(std::string const &name, std::string const &title);
		~Warlock();


};

#endif //WARLOCK_HPP
