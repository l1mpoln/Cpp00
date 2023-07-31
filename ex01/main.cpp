/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:34:19 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/31 03:38:21 by vkuzmin          ###   ########.fr       */
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

    if (i >= 8)
    {
        std::cout << "-> The phonebook is full. Deleting the oldest contact..." << std::endl;
        phonebook->remove_oldest_contact();
        i = 7;
    }

    std::cout << "-> Please enter the contact's first name:\n-> ";
    if (!std::getline(std::cin, first) || first.empty())
    {
        std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
        return ;
    }

    std::cout << "-> Please enter the contact's last name:\n-> ";
    if (!std::getline(std::cin, second) || second.empty())
    {
        std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
        return ;
    }

    std::cout << "-> Please enter the contact's nickname:\n-> ";
    if (!std::getline(std::cin, nick) || nick.empty())
    {
        std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
        return ;
    }

    std::cout << "-> Please enter the contact's phone number:\n-> ";
    if (!std::getline(std::cin, number) || number.empty())
    {
        std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
        return ;
    }

    std::cout << "-> Please enter the contact's darkest secret:\n-> ";
    if (!std::getline(std::cin, secret) || secret.empty())
    {
        std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
        return ;
    }
    
    phonebook->create_contact(i, first, second, nick, number, secret);
    std::cout << "Contact added" << std::endl;
    std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
}

void ft_search(Phonebook *phonebook)
{
    std::string user_index;
    int index = 0;

    std::cout << std::setw(10) << "Index" << "| "
              << std::setw(10) << "First name" << "| "
              << std::setw(10) << "Last name" << "| "
              << std::setw(10) << "Nickname" << "|" << std::endl;

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

        std::cout << std::right << std::setw(10) << index << "| "
                  << std::setw(10) << first << "| "
                  << std::setw(10) << second << "| "
                  << std::setw(10) << nick << "| " << std::endl;
    }
    std::cout << "-> Enter the contact index" << std::endl << "-> ";
    std::getline(std::cin, user_index);
    if (std::cin.eof())
        return ;
    index = user_index[0] - 48;
    if (user_index[1] || index < 0 || index > 7)
    {
        std::cout << "-> Invalid index, how could u fuck up this?" << std::endl << "-> ";
        return ;
    }
    phonebook->get_contact(index).ft_print();
    std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
}

int main(void)
{
    std::string command;
    Phonebook   phonebook;
    int i = 0;

    std::cout << "-> Enter a command like: SEARCH/ADD/EXIT" << std::endl << "-> ";
    while (!std::cin.eof())
    {
        std::getline(std::cin, command);
        if (command == "ADD" || command == "add")
        {
            ft_add(&phonebook, i);
            i++;
        }
        else if (command == "SEARCH" || command == "search")
        {
            ft_search(&phonebook);
        }
        else if (command == "EXIT" || command == "exit")
        {
            return (0);
        }
        else if (command != "ADD" && command != "SEARCH" && command != "EXIT")
        {
            std::cout << "-> God, enter a valid command, how do u use computer?" << std::endl << "-> ";
        }
    }
}
