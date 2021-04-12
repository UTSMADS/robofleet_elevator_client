#include "decode.hpp"
#include "elevator_interface.hpp"

template <>
struct flatbuffers_type_for<ElevatorCommand> {
  typedef fb::amrl_msgs::ElevatorCommand type;
};
template <>
ElevatorCommand decode(
    const fb::amrl_msgs::ElevatorCommand* const src) {
  ElevatorCommand dst;
  dst.floor_cmd = src->floor_cmd();
  dst.hold_door = src->hold_door();
  return dst;
}