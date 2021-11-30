#include "driver/gyro.h"
#include "driver/rw.h"
#include "fcs_status.h"

int main(void) {
  gyro_on();
  rw_on();
  rw_off();
  gyro_off();

  return FCS_STATUS_SUCCESS;
}