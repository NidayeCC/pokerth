/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "InvitePlayerToGameMessage.h"

static asn_TYPE_member_t asn_MBR_InvitePlayerToGameMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InvitePlayerToGameMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InvitePlayerToGameMessage, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
};
static ber_tlv_tag_t asn_DEF_InvitePlayerToGameMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InvitePlayerToGameMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 388 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* playerId at 390 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InvitePlayerToGameMessage_specs_1 = {
	sizeof(struct InvitePlayerToGameMessage),
	offsetof(struct InvitePlayerToGameMessage, _asn_ctx),
	asn_MAP_InvitePlayerToGameMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InvitePlayerToGameMessage = {
	"InvitePlayerToGameMessage",
	"InvitePlayerToGameMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_InvitePlayerToGameMessage_tags_1,
	sizeof(asn_DEF_InvitePlayerToGameMessage_tags_1)
		/sizeof(asn_DEF_InvitePlayerToGameMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_InvitePlayerToGameMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_InvitePlayerToGameMessage_tags_1)
		/sizeof(asn_DEF_InvitePlayerToGameMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_InvitePlayerToGameMessage_1,
	2,	/* Elements count */
	&asn_SPC_InvitePlayerToGameMessage_specs_1	/* Additional specs */
};

