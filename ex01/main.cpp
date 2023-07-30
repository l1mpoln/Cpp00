/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:34:19 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/30 19:54:26 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    ft_add(Phonebook *phonebook, int i)
{
    std::string first;
    std::string second;
    std::string nick;
    std::string number;
    std::string secret;

    std::cout << "Please enter the contact's first name:\n> ";
    if (!std::getline(std::cin, first) || first.empty())
        return;

    std::cout << "Please enter the contact's last name:\n> ";
    if (!std::getline(std::cin, second) || second.empty())
        return;

    std::cout << "Please enter the contact's nickname:\n> ";
    if (!std::getline(std::cin, nick) || nick.empty())
        return;

    std::cout << "Please enter the contact's phone number:\n> ";
    if (!std::getline(std::cin, number) || number.empty())
        return;

    std::cout << "Please enter the contact's darkest secret:\n> ";
    if (!std::getline(std::cin, secret) || secret.empty())
        return;
    
    phonebook->create_contact(i, first, second, nick, number, secret);
}

void ft_search(Phonebook *phonebook)
{
    std::string user_index;
    int index;

    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First name" << " | "
              << std::setw(10) << "Last name" << " | "
              << std::setw(10) << "Nickname" << std::endl;

    for (int index = 0; index < 8; index++) 
    {
        std::string first = phonebook->get_first(index);
        std::string second = phonebook->get_second(index);
        std::string nick = phonebook->get_nick(index);

        if (first.size() >= 10)
            first = first.substr(0, 9) + ".";

        if (second.size() >= 10)
            second = second.substr(0, 9) + ".";

        if (nick.size() >= 10)
            nick = nick.substr(0, 9) + ".";

        std::cout << std::right << std::setw(10) << index << " | "
                  << std::setw(10) << first << " | "
                  << std::setw(10) << second << " | "
                  << std::setw(10) << nick << std::endl;
    }
    std::cout << "Enter the contact index" << std::endl;\
    std::getline(std::cin, user_index);
    if (std::cin.eof())
        return ;
}

int main(void)
{
    std::string command;
    Phonebook   phonebook;
    int i = 0;

    while (!std::cin.eof())
    {
        std::cout << "Enter a command like: SEARCH/ADD/EXIT" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            ft_add(&phonebook, i);
            i++;
        }
        else if (command == "SEARCH")
        {
            ft_search(&phonebook);
        }
        else if (command == "EXIT")
        {
            return (0);
        }
    }
    
}