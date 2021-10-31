#pragma once
// MESSAGE ACTUATOR_OUTPUTS_DRL PACKING

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL 228


typedef struct __mavlink_actuator_outputs_drl_t {
 float output[4]; /*<   */
 int8_t usedrl; /*<  Boolean indicating use (1) or notuse (0) drl output */
} mavlink_actuator_outputs_drl_t;

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN 17
#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN 17
#define MAVLINK_MSG_ID_228_LEN 17
#define MAVLINK_MSG_ID_228_MIN_LEN 17

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC 44
#define MAVLINK_MSG_ID_228_CRC 44

#define MAVLINK_MSG_ACTUATOR_OUTPUTS_DRL_FIELD_OUTPUT_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_OUTPUTS_DRL { \
    228, \
    "ACTUATOR_OUTPUTS_DRL", \
    2, \
    {  { "usedrl", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_actuator_outputs_drl_t, usedrl) }, \
         { "output", NULL, MAVLINK_TYPE_FLOAT, 4, 0, offsetof(mavlink_actuator_outputs_drl_t, output) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_OUTPUTS_DRL { \
    "ACTUATOR_OUTPUTS_DRL", \
    2, \
    {  { "usedrl", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_actuator_outputs_drl_t, usedrl) }, \
         { "output", NULL, MAVLINK_TYPE_FLOAT, 4, 0, offsetof(mavlink_actuator_outputs_drl_t, output) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_outputs_drl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usedrl  Boolean indicating use (1) or notuse (0) drl output 
 * @param output   
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_outputs_drl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t usedrl, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN];
    _mav_put_int8_t(buf, 16, usedrl);
    _mav_put_float_array(buf, 0, output, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN);
#else
    mavlink_actuator_outputs_drl_t packet;
    packet.usedrl = usedrl;
    mav_array_memcpy(packet.output, output, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
}

/**
 * @brief Pack a actuator_outputs_drl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usedrl  Boolean indicating use (1) or notuse (0) drl output 
 * @param output   
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_outputs_drl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t usedrl,const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN];
    _mav_put_int8_t(buf, 16, usedrl);
    _mav_put_float_array(buf, 0, output, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN);
#else
    mavlink_actuator_outputs_drl_t packet;
    packet.usedrl = usedrl;
    mav_array_memcpy(packet.output, output, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
}

/**
 * @brief Encode a actuator_outputs_drl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_outputs_drl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_outputs_drl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_outputs_drl_t* actuator_outputs_drl)
{
    return mavlink_msg_actuator_outputs_drl_pack(system_id, component_id, msg, actuator_outputs_drl->usedrl, actuator_outputs_drl->output);
}

/**
 * @brief Encode a actuator_outputs_drl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_outputs_drl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_outputs_drl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_outputs_drl_t* actuator_outputs_drl)
{
    return mavlink_msg_actuator_outputs_drl_pack_chan(system_id, component_id, chan, msg, actuator_outputs_drl->usedrl, actuator_outputs_drl->output);
}

/**
 * @brief Send a actuator_outputs_drl message
 * @param chan MAVLink channel to send the message
 *
 * @param usedrl  Boolean indicating use (1) or notuse (0) drl output 
 * @param output   
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_outputs_drl_send(mavlink_channel_t chan, int8_t usedrl, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN];
    _mav_put_int8_t(buf, 16, usedrl);
    _mav_put_float_array(buf, 0, output, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL, buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
#else
    mavlink_actuator_outputs_drl_t packet;
    packet.usedrl = usedrl;
    mav_array_memcpy(packet.output, output, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
#endif
}

/**
 * @brief Send a actuator_outputs_drl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_outputs_drl_send_struct(mavlink_channel_t chan, const mavlink_actuator_outputs_drl_t* actuator_outputs_drl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_outputs_drl_send(chan, actuator_outputs_drl->usedrl, actuator_outputs_drl->output);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL, (const char *)actuator_outputs_drl, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_outputs_drl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t usedrl, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 16, usedrl);
    _mav_put_float_array(buf, 0, output, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL, buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
#else
    mavlink_actuator_outputs_drl_t *packet = (mavlink_actuator_outputs_drl_t *)msgbuf;
    packet->usedrl = usedrl;
    mav_array_memcpy(packet->output, output, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_OUTPUTS_DRL UNPACKING


/**
 * @brief Get field usedrl from actuator_outputs_drl message
 *
 * @return  Boolean indicating use (1) or notuse (0) drl output 
 */
static inline int8_t mavlink_msg_actuator_outputs_drl_get_usedrl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  16);
}

/**
 * @brief Get field output from actuator_outputs_drl message
 *
 * @return   
 */
static inline uint16_t mavlink_msg_actuator_outputs_drl_get_output(const mavlink_message_t* msg, float *output)
{
    return _MAV_RETURN_float_array(msg, output, 4,  0);
}

/**
 * @brief Decode a actuator_outputs_drl message into a struct
 *
 * @param msg The message to decode
 * @param actuator_outputs_drl C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_outputs_drl_decode(const mavlink_message_t* msg, mavlink_actuator_outputs_drl_t* actuator_outputs_drl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_outputs_drl_get_output(msg, actuator_outputs_drl->output);
    actuator_outputs_drl->usedrl = mavlink_msg_actuator_outputs_drl_get_usedrl(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN;
        memset(actuator_outputs_drl, 0, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_DRL_LEN);
    memcpy(actuator_outputs_drl, _MAV_PAYLOAD(msg), len);
#endif
}
