/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:49:51 by villemuston       #+#    #+#             */
/*   Updated: 2023/10/09 20:38:20 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    
    public:
    void	complain(std::string level);
};
typedef void	(Harl::*t_func) (void);
#endif