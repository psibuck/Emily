//
//  Application.h
//  Emily
//
//  Created by Archie Buck on 11/02/2019.
//  Copyright © 2019 Archie Buck. All rights reserved.
//

#ifndef Application_h
#define Application_h

#include "Emily/Code/Window.h"
#include <memory>
#include <stdio.h>

// Forward Declares
namespace EMILY
{
    class Window;
}

namespace EMILY
{
    class Application
    {
    public:
        void initialise( void );
        bool run( void );
        void update( void ) {};
        void process_events( void ) {};
        void display( void );
        void shutdown( void ) {};
        
    private:
        std::unique_ptr<Window> m_game_window{ nullptr };
        bool m_is_running{ false };
    };
}


#endif /* Application_h */
