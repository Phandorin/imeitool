#define TAC_FILE_SUFFIX ".tac.csv"
#define TAC_FIELDS 4
#define TAC_F_TAC 0
#define TAC_F_VENDOR 1
#define TAC_F_MODEL 2
#define TAC_F_INTERN 3

/**
 * get Nth field of TAC entry
 */
char *get_tac_element(char *tac, unsigned int n);
