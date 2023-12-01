#ifndef ANDROID_HARDWARE_NFC_V1_0_NFC_H
#define ANDROID_HARDWARE_NFC_V1_0_NFC_H

#include <vendor/cavli/hardware/spi/1.0/ICavspi.h>
#include <hidl/Status.h>
#include <hardware/hardware.h>
#include <hardware/nfc.h>

namespace vendor {
namespace cavli {
namespace cav_spi {
namespace V1_0 {
namespace implementation {

using ::vendor::cavli::hardware::spi::V1_0::ICavspi;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::hidl_vec;
using ::android::hardware::hidl_string;
using ::android::sp;

struct Cavspi : public ICavspi {

    Return<bool> sendData(const hidl_vec<uint8_t>& data);

    Return<int32_t> readData(const hidl_vec<uint8_t>& data, uint32_t length);

    Return<bool> openConnection(const hidl_string& device);

    Return<bool> closeConnection();

};


}  // implementation
}  // namespace V1_0
}  // namespace cav_spi
}  // namespace cavli
}  // namespace vendor

#endif  // ANDROID_HARDWARE_NFC_V1_0_NFC_H
