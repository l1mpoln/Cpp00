/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 04:43:10 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/07/27 05:01:35 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string stroka = "";

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    
    for (int i = 1; i < argc; i++)
    {
        stroka = argv[i];
        int len = stroka.length();
        for (int j = 0; j < len; j++)
        {
            std::cout << (char)toupper(stroka[j]);
        }
        std::cout << " ";
    }

    std::cout << std::endl;
    return (0);
}