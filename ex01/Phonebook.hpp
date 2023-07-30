/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:36:40 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/28 04:55:54 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class Phonebook
{
private:
    Contact phonebook[8];
public:
    Phonebook();
    ~Phonebook();
    void create_contact(int i, std::string first_name, std::string second_name, std::string nick, std::string number, 
        std::string secret);
    Contact get_contact(int i);
    std::string get_first(int i);
    std::string get_second(int i);
    std::string get_nick(int i);
    std::string get_number(int i);
    std::string get_secret(int i);
};

#endif