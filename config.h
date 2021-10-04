/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

int border_width = 3;
int columns = 4;
int menu_width = 350;

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#00ff00", "#000000" },
	[SchemeSel] = { "#75ff75", "#007500" },
	[SchemeOut] = { "#ff0000", "#ff0000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
