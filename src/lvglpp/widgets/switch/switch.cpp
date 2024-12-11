/** \file switch.cpp
 *  \brief Implementation file for C++ wrapper for lv_switch_t objects.
 *
 *  Author: Vincent Paeder
 *  License: MIT
 */
#include "lvglpp/widgets/switch/switch.h"

#if LV_USE_SWITCH != 0

namespace lvgl::core {

    // Specialize the constructor for Widget<lv_switch_create>
    template <>
    Widget<lv_switch_create>::Widget() {
        // Constructor logic specific to Widget<lv_switch_create>
    }

    // Specialize the constructor for Widget<lv_switch_create> with parent
    template <>
    Widget<lv_switch_create>::Widget(Object& parent) {
        // Constructor logic specific to Widget<lv_switch_create> with parent
    }

    // Specialize the initialize() function for Widget<lv_switch_create>
    template <>
    void Widget<lv_switch_create>::initialize() {
        // Initialization logic specific to Widget<lv_switch_create>
    }

    // Specialize the initialize() function for Widget<lv_switch_create> with parent
    template <>
    void Widget<lv_switch_create>::initialize(Object& parent) {
        // Initialization logic specific to Widget<lv_switch_create> with parent
    }

} // namespace lvgl::core

#endif // LV_USE_SWITCH