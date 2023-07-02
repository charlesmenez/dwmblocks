// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-memory", 10, 1},
    {"", "sb-gpu", 2, 10},
    {"", "sb-cpu", 2, 10},
    {"", "sb-clock", 60, 1},
    {"", "sb-battery", 10, 0},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }
