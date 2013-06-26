/* header auto-generated by pidl */

#include <stdint.h>

#ifndef _HEADER_messaging
#define _HEADER_messaging

struct messaging_rec {
	uint32_t msg_version;
	uint32_t msg_type;
	struct server_id dest;
	struct server_id src;
	DATA_BLOB buf;
}/* [public] */;

struct messaging_array {
	uint32_t num_messages;
	struct messaging_rec *messages;
}/* [public] */;

struct dbwrap_tdb2_changes {
	const char *magic_string;/* [value("TDB2"),charset(DOS)] */
	uint32_t magic_version;/* [value] */
	const char *name;/* [charset(UTF8)] */
	uint32_t old_seqnum;
	uint32_t new_seqnum;
	uint32_t num_changes;
	uint32_t num_keys;
	DATA_BLOB *keys;
}/* [public] */;

#endif /* _HEADER_messaging */