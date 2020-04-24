/*
       /##                                            
      | ##                                            
  /####### /######/####   /######  /#######  /##   /##
 /##__  ##| ##_  ##_  ## /##__  ##| ##__  ##| ##  | ##
| ##  | ##| ## \ ## \ ##| ########| ##  \ ##| ##  | ##
| ##  | ##| ## | ## | ##| ##_____/| ##  | ##| ##  | ##
|  #######| ## | ## | ##|  #######| ##  | ##|  ######/
 \_______/|__/ |__/ |__/ \_______/|__/  |__/ \______/ 
*/
/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant                 = 0;    /* automatically selects the last remaining option */
static int topbar                  = 1;    /* -b  option; if 0, dmenu appears at bottom */
static int centered                = 0;    /* -c option; centers dmenu on screen */
static int min_width               = 500;  /* minimum width when centered */
static unsigned int lines          = 0;    /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lineheight     = 0;    /* -h option; minimum height of a menu line */
static const char *prompt          = "";   /* -p  option; prompt to the left of input field */
static unsigned int border_width   = 2;    /* Size of the window border */
static int fuzzy                   = 1;    /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static const char worddelimiters[] = " ";  /* Characters not considered part of a word while deleting words for example: " /?\"&[]" */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "monospace:size=14",
        "Font Awesome 5 Free:size=14:antialias=true:autohint=true",
        "JoyPixels:size=14:antialias=true:autohint=true",
};

/* xresources colors */
static char color0[]  = "#090a0d";
static char color1[]  = "#265957";
static char color2[]  = "#367f6d";
static char color3[]  = "#92443e";
static char color4[]  = "#46a557";
static char color5[]  = "#99ac4a";
static char color6[]  = "#4fb3a3";
static char color7[]  = "#c5c9c3";
static char color8[]  = "#898c88";
static char color9[]  = "#265957";
static char color10[] = "#367f6d";
static char color11[] = "#92443e";
static char color12[] = "#46a557";
static char color13[] = "#99ac4a";
static char color14[] = "#4fb3a3";
static char color15[] = "#c5c9c3";
static const char *colors[][2] = {
	/*                        fg      bg     */
	[SchemeNorm]          = { color7, color0 },
	[SchemeSel]           = { color1, color0 },
	[SchemeSelHighlight]  = { color2, color0 },
	[SchemeNormHighlight] = { color1, color0 },
	[SchemeOut]           = { color4, color0 },
};
