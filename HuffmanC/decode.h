#ifndef _H_DECODE_
#define _H_DECODE_

#include "huffman.h"

typedef struct _byte_to_bit_stream {
	FILE* fp_in;
	byte buffer;
	int code_length;
	int offset;
	int buffer_offset;
}byte_to_bit_stream;

byte_to_bit_stream* open_bit_stream(FILE* fp_in, int code_length);

void close_bit_stream(byte_to_bit_stream* btbs);

void decode_to_file(huffman_tree* htree, FILE* fp_in,
	FILE* fp_out, int code_length);

#endif