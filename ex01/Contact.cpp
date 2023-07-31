/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:40:31 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 03:26:31 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
{
    
};

Contact::~Contact()
{
    
};

void Contact::ft_print() const
{
    if (this->first_name.empty())
    {
        std::cout << "-> There is no info, fuck off" << std::endl;
        return ;
    }
    std::cout << "First Name -> " << this->first_name << std::endl;
    std::cout << "Second Name -> " << this->second << std::endl;
    std::cout << "Nickname -> " << this->nick << std::endl;
    std::cout << "Number -> " << this->number << std::endl;
    std::cout << "Secret -> " << this->secret << std::endl;
}

void Contact::ft_set_data(std::string fi, std::string se, std::string ni, std::string num, std::string sec)
{
    first_name = fi;
    second = se;
    nick = ni;
    number = num;
    secret = sec;
}

std::string Contact::get_first_name()
{
    return (first_name);
}

std::string Contact::get_second_name()
{
    return (second);
}

std::string Contact::get_nick()
{
    return (nick);
}

std::string Contact::get_number()
{
    return (number);
}

std::string Contact::get_secret()
{
    return (secret);
}