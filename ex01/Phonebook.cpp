/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:36:26 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/28 04:33:55 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook()
{
    
}

Phonebook::~Phonebook()
{
    
}

Contact Phonebook::get_contact(int i)
{
    return (phonebook[i]);
}

std::string Phonebook::get_first(int i)
{
    return (phonebook[i].get_first_name());
}

std::string Phonebook::get_second(int i)
{
    return (phonebook[i].get_second_name());
}

std::string Phonebook::get_nick(int i)
{
    return (phonebook[i].get_nick());
}

std::string Phonebook::get_number(int i)
{
    return (phonebook[i].get_number());
}

std::string Phonebook::get_secret(int i)
{
    return (phonebook[i].get_secret());
}

void Phonebook::create_contact(int i, std::string first_name, std::string second_name, std::string nick, std::string number, 
        std::string secret)
{
    phonebook[i].ft_set_data(first_name, second_name, nick, number, secret);
}