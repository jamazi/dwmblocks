//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define BLOCK(icon, bgcolor, fgcolor, cmd, interval, signal) { "printf '%s%s%s%s^d^\n' \"" fgcolor "\" \"" bgcolor "\" \"" icon "\" \"$(" cmd ")\"", interval, signal }

static const Block blocks[] = {
    /*Icon*/        /*Bg Color*/    /*Fg Color*/    /*Command*/                 /*Update Interval*/     /*Update Signal*/
    BLOCK("",       "",             "^C1^",         "sb-volume",                5,                      1),
    BLOCK(" ",     "",             "^C2^",         "sb-ram-usage -p",          2,                      2),
    BLOCK(" ",     "",             "^C3^",         "sb-cpu-usage 2",           2,                      3),
    BLOCK("",       "",             "^C4^",         "sb-battery-status",        60,                     4),
    BLOCK("",       "",             "^C5^",         "sb-nettraffic 1",          1,                      5),
    BLOCK("",       "",             "^C6^",         "sb-prayers",               60,                     6),
    BLOCK("",       "",             "^C7^",         "sb-datetime",              5,                      7),
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "︱";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
