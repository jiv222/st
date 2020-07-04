/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#3d3d3d",
	"#6673bf",
	"#3ea290",
	"#b0ead9",
	"#31658c",
	"#596196",
	"#8292b2",
	"#c8cacc",

	/* 8 bright colors */
	"#4d4d4d",
	"#899aff",
	"#52ad91",
	"#98c9bb",
	"#477ab3",
	"#7882bf",
	"#95a7cc",
	"#edeff2",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#101010",      /* 256 -> bg */
	"#ffffff",      /* 257 -> fg */
	"#b0ead9",        /* 258 -> cursor */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs = 0;
