/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aryan <aryan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 21:09:55 by aryan             #+#    #+#             */
/*   Updated: 2026/09/10 22:24:29 by aryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac < 2)
        std::cout<<"* LOUD AND UNBEARABLE BUZZER NOISE*";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            std::string result = std::string(av[i]);
            for (int j = 0; j < (int)result.size(); j++)
            {
                std::cout << (char)std::toupper(result[j]);
            }
            if (av[i + 1])
                std::cout << " ";   
        }
        std::cout << std::endl;
    }
    return(0);
}