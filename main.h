#include <stdio.h>

/* These functions encode and decode a string to base64 format. */
char *Base64Encode(const void *data, int size);
char *Base64Decode(const char *str);

/* A uuencode function that encodes a file to another file. */
void Encode(FILE *fp);

/* A uudecode function that decodes a file to another file. */
int Decode(char *file_name, FILE *fpin);


