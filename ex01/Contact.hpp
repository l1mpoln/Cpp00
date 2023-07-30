/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:41:26 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/28 04:51:23 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact
{
private:
    std::string first_name;
    std::string second;
    std::string nick;
    std::string number;
    std::string secret;
public:
    Contact();
    ~Contact();
    
    void ft_set_data(std::string fi, std::string se, std::string ni, std::string num, std::string sec);
    void ft_print(void) const;
    
    std::string get_first_name();
    std::string get_second_name();
    std::string get_nick();
    std::string get_number();
    std::string get_secret();
};

#endif