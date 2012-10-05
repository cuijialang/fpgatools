//
// Author: Wolfgang Spraul
//
// This is free and unencumbered software released into the public domain.
// For details see the UNLICENSE file at the root of the source tree.
//

// The highest 4 bits are the binary revision and not
// used when performing IDCODE verification.
// ug380, Configuration Sequence, page 78
#define IDCODE_MASK	0x0FFFFFFF

#define XC6SLX4		0x04000093
#define XC6SLX9		0x04001093
#define XC6SLX16	0x04002093
#define XC6SLX25	0x04004093
#define XC6SLX25T	0x04024093
#define XC6SLX45	0x04008093
#define XC6SLX45T	0x04028093
#define XC6SLX75	0x0400E093
#define XC6SLX75T	0x0402E093
#define XC6SLX100	0x04011093
#define XC6SLX100T	0x04031093
#define XC6SLX150	0x0401D093

#define FRAME_SIZE		130
#define FRAMES_PER_ROW		505 // for slx4 and slx9
#define PADDING_FRAMES_PER_ROW	2
#define NUM_ROWS		4 // for slx9 and slx9

#define FRAMES_DATA_START	0
#define FRAMES_DATA_LEN		(NUM_ROWS*FRAMES_PER_ROW*FRAME_SIZE)
#define BRAM_DATA_START		FRAMES_DATA_LEN
#define BRAM_DATA_LEN		(4*144*FRAME_SIZE)
#define IOB_DATA_START		(BRAM_DATA_START + BRAM_DATA_LEN)
#define IOB_WORDS		896 // 16-bit words, for slx4 and slx9
#define IOB_DATA_LEN		(IOB_WORDS*2)
#define IOB_ENTRY_LEN		8
#define BITS_LEN		(IOB_DATA_START+IOB_DATA_LEN)

#define XC6_HCLK_BYTES		2
#define XC6_HCLK_BITS		(XC6_HCLK_BYTES*8)

#define XC6_IOB_MASK_IO				0x00FF00FFFF000000
#define XC6_IOB_MASK_IN_TYPE			0x000000000000F000
#define XC6_IOB_MASK_SLEW			0x0000000000FF0000
#define XC6_IOB_MASK_SUSPEND			0x000000000000001F

#define XC6_IOB_INSTANTIATED			0x0000000000000080
#define XC6_IOB_INPUT				0x00D0002400000000
#define XC6_IOB_INPUT_LVCMOS33_25_LVTTL		0x000000000000E000
#define XC6_IOB_INPUT_LVCMOS18_15_12		0x000000000000C000
#define XC6_IOB_INPUT_LVCMOS18_15_12_JEDEC	0x0000000000002000
#define XC6_IOB_INPUT_SSTL2_I			0x000000000000B000

#define XC6_IOB_OUTPUT_LVCMOS33_25_DRIVE_2	0x001000B400000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_4		0x0070006C00000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_6		0x003000FC00000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_8		0x0040000000000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_12	0x0060008800000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_16	0x009800C600000000
#define XC6_IOB_OUTPUT_LVCMOS33_DRIVE_24	0x0088007200000000

#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_4		0x00B0006C00000000
#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_6		0x004000FC00000000
#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_8		0x0000000000000000
#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_12	0x0058008800000000
#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_16	0x00B800C600000000
#define XC6_IOB_OUTPUT_LVCMOS25_DRIVE_24	0x0054007200000000

#define XC6_IOB_OUTPUT_LVTTL_DRIVE_2		0x009000B400000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_4		0x00F0006C00000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_6		0x007000FC00000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_8		0x0030000000000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_12		0x0080008800000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_16		0x006000C600000000
#define XC6_IOB_OUTPUT_LVTTL_DRIVE_24		0x0018007200000000

#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_2		0x00F000B402000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_4		0x00C000AC02000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_6		0x00E000BC02000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_8		0x00D800A002000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_12	0x003800A802000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_16	0x002800A602000000
#define XC6_IOB_OUTPUT_LVCMOS18_DRIVE_24	0x00A400A202000000

#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_2		0x00B0007402000000
#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_4		0x00E0000C02000000
#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_6		0x0098005C02000000
#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_8		0x00C8003002000000
#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_12	0x00F4001802000000
#define XC6_IOB_OUTPUT_LVCMOS15_DRIVE_16	0x002400D602000000

#define XC6_IOB_OUTPUT_LVCMOS12_DRIVE_2		0x004000B402000000
#define XC6_IOB_OUTPUT_LVCMOS12_DRIVE_4		0x0098006C02000000
#define XC6_IOB_OUTPUT_LVCMOS12_DRIVE_6		0x008800FC02000000
#define XC6_IOB_OUTPUT_LVCMOS12_DRIVE_8		0x0014000002000000
#define XC6_IOB_OUTPUT_LVCMOS12_DRIVE_12	0x00FC008802000000

#define XC6_IOB_OUTPUT_SSTL2_I			0x0040001C00000000

#define XC6_IOB_IMUX_I_B			0x0000000000000400
#define XC6_IOB_O_PINW				0x0000000000000100
#define XC6_IOB_SLEW_SLOW			0x0000000000000000
#define XC6_IOB_SLEW_FAST			0x0000000000330000
#define XC6_IOB_SLEW_QUIETIO			0x0000000000660000
#define XC6_IOB_SUSP_3STATE			0x0000000000000000
#define XC6_IOB_SUSP_3STATE_OCT_ON		0x0000000000000001
#define XC6_IOB_SUSP_3STATE_KEEPER		0x0000000000000002
#define XC6_IOB_SUSP_3STATE_PULLUP		0x0000000000000004
#define XC6_IOB_SUSP_3STATE_PULLDOWN		0x0000000000000008
#define XC6_IOB_SUSP_LAST_VAL			0x0000000000000010

int get_major_minors(int idcode, int major);

enum major_type { MAJ_ZERO, MAJ_LEFT, MAJ_RIGHT, MAJ_CENTER,
	MAJ_LOGIC_XM, MAJ_LOGIC_XL, MAJ_BRAM, MAJ_MACC };
enum major_type get_major_type(int idcode, int major);

#define XC6_ZERO_MAJOR 0
#define XC6_LEFTSIDE_MAJOR 1
#define XC6_SLX9_RIGHTMOST_MAJOR 17

int get_rightside_major(int idcode);
int get_major_framestart(int idcode, int major);
int get_frames_per_row(int idcode);

int get_num_iobs(int idcode);
const char* get_iob_sitename(int idcode, int idx);
// returns -1 if sitename not found
int find_iob_sitename(int idcode, const char* name);

// The routing bitpos is relative to a tile, i.e. major (x)
// and row/v64_i (y) are defined outside.
struct xc6_routing_bitpos
{
	// from and to are enum extra_wires values from model.h
	int from;
	int to;
	int bidir;

	// minors 0-19 are minor pairs, minor will be set
	// to the even beginning of the pair, two_bits_o and
	// one_bit_o are within 2*64 bits of the two minors.
	// Even bit offsets are from the first minor, odd bit
	// offsets from the second minor.
	// minor 20 is a regular single 64-bit minor.

	int minor; // 0,2,4,..18 for pairs, 20 for single-minor
	int two_bits_o; // 0-126 for pairs (even only), 0-62 for single-minor
	int two_bits_val; // 0-3
	int one_bit_o; // 1-6 positions up or down from two-bit pos
};

int get_xc6_routing_bitpos(struct xc6_routing_bitpos** bitpos, int* num_bitpos);
void free_xc6_routing_bitpos(struct xc6_routing_bitpos* bitpos);

#define XC6_LMAP_XM_M_A 0
#define XC6_LMAP_XM_M_B 1
#define XC6_LMAP_XM_M_C 0
#define XC6_LMAP_XM_M_D 1
#define XC6_LMAP_XM_X_A 2
#define XC6_LMAP_XM_X_B 2
#define XC6_LMAP_XM_X_C 3
#define XC6_LMAP_XM_X_D 3
#define XC6_LMAP_XL_L_A 3
#define XC6_LMAP_XL_L_B 2
#define XC6_LMAP_XL_L_C 3
#define XC6_LMAP_XL_L_D 2
#define XC6_LMAP_XL_X_A 2
#define XC6_LMAP_XL_X_B 2
#define XC6_LMAP_XL_X_C 3
#define XC6_LMAP_XL_X_D 3

// num_bits must be 32 or 64. If it is 32, the lower
// 32 entries of map contain the bit positions for lut5,
// the upper 32 entries of map the ones for lut6.
// In either case 64 entries are written to map.
void xc6_lut_bitmap(int lut_pos, int* map, int num_bits);
