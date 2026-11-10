// Steam Deck (RADV VANGOGH) fork defaults: hang + OOM workarounds applied when the env is unset.
#pragma once
#include "vk_loader.h"
namespace mkwvk {

/// After pick_device: set Deck env defaults on Van Gogh (no overwrite of player choices).
void deck_apply_vangogh_defaults();

/// After vkGetPhysicalDeviceFeatures2 fills fault features: keep RADV hang dumps on disk.
void deck_disable_fault_vendor_binary( VkPhysicalDeviceFaultFeaturesEXT* fault);

} // namespace mkwvk
