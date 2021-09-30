/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/jaime/Developer/ardupilot/modules/uavcan/dsdl/uavcan/protocol/param/NumericValue.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_PARAM_NUMERICVALUE
#define __UAVCAN_PROTOCOL_PARAM_NUMERICVALUE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan/protocol/param/Empty.h>

/******************************* Source text **********************************
#
# Numeric-only value.
#
# This is a union, which means that this structure can contain either one of the fields below.
# The structure is prefixed with tag - a selector value that indicates which particular field is encoded.
#

@union                          # Tag is 2 bits long.

Empty empty                     # Empty field, used to represent an undefined value.

int64   integer_value
float32 real_value
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.param.NumericValue
@union
uavcan.protocol.param.Empty empty
saturated int64 integer_value
saturated float32 real_value
******************************************************************************/

#define UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_NAME            "uavcan.protocol.param.NumericValue"
#define UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_SIGNATURE       (0xDA6D6FEA22E3587ULL)

#define UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_MAX_SIZE        ((66 + 7)/8)

// Constants

typedef enum
{
    UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_EMPTY,
    UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_INTEGER_VALUE,
    UAVCAN_PROTOCOL_PARAM_NUMERICVALUE_REAL_VALUE
} uavcan_protocol_param_NumericValue_ENUM;

typedef struct
{
    uavcan_protocol_param_NumericValue_ENUM union_tag;        // union_tag indicates what field the data structure is holding

    union
    {
    // FieldTypes
    uavcan_protocol_param_Empty empty;                         //
    int64_t    integer_value;                 // bit len 64
    float      real_value;                    // float32 Saturate

    };
} uavcan_protocol_param_NumericValue;

extern
uint32_t uavcan_protocol_param_NumericValue_encode(uavcan_protocol_param_NumericValue* source, void* msg_buf);

extern
int32_t uavcan_protocol_param_NumericValue_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_param_NumericValue* dest, uint8_t** dyn_arr_buf);

extern
uint32_t uavcan_protocol_param_NumericValue_encode_internal(uavcan_protocol_param_NumericValue* source, void* msg_buf, uint32_t offset, uint8_t root_item);

extern
int32_t uavcan_protocol_param_NumericValue_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_param_NumericValue* dest, uint8_t** dyn_arr_buf, int32_t offset);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_PARAM_NUMERICVALUE