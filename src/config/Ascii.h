// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt =
" _________ .__                       _________        .__         \n"
" \_   ___ \|  | _____    ______ _____\_   ___ \  ____ |__| ____   \n"
" /    \  \/|  | \__  \  /  ___//  ___/    \  \/ /  _ \|  |/    \  \n"
" \     \___|  |__/ __ \_\___ \ \___ \\     \___(  <_> )  |   |  \ \n"
"  \______  /____(____  /____  >____  >\______  /\____/|__|___|  / \n"
"         \/          \/     \/     \/        \/               \/  \n";

const std::string nonWindowsAsciiArt =
    "\n                                                                     \n"
    "  ██████╗██╗      █████╗ ███████╗███████╗ ██████╗ ██████╗ ██╗███╗   ██╗\n"
    " ██╔════╝██║     ██╔══██╗██╔════╝██╔════╝██╔════╝██╔═══██╗██║████╗  ██║\n"
    " ██║     ██║     ███████║███████╗███████╗██║     ██║   ██║██║██╔██╗ ██║\n"
    " ██║     ██║     ██╔══██║╚════██║╚════██║██║     ██║   ██║██║██║╚██╗██║\n"
    " ╚██████╗███████╗██║  ██║███████║███████║╚██████╗╚██████╔╝██║██║ ╚████║\n"
    "  ╚═════╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
