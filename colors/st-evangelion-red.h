/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0102", /* black   */
  [1] = "#b91e2e", /* red     */
  [2] = "#81957c", /* green   */
  [3] = "#f9bb80", /* yellow  */
  [4] = "#6c7375", /* blue    */
  [5] = "#a54242", /* magenta */
  [6] = "#8dacc8", /* cyan    */
  [7] = "#909090", /* white   */

  /* 8 bright colors */
  [8]  = "#2c1118", /* black   */
  [9]  = "#d14548", /* red     */
  [10] = "#a7b79a", /* green   */
  [11] = "#fae3a0", /* yellow  */
  [12] = "#7491a1", /* blue    */
  [13] = "#87314e", /* magenta */
  [14] = "#bdd3e5", /* cyan    */
  [15] = "#fff0f0", /* white   */

  /* special colors */
  [256] = "#2c1118", /* background */
  [257] = "#fff0f0", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
