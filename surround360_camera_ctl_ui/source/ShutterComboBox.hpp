/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE_camera_ctl file in the root directory of this subproject.
 */
#pragma once

#include <gtkmm.h>

#include "ShutterListModel.hpp"

namespace surround360 {
  class ShutterComboBox : public Gtk::ComboBox {
  public:
    ShutterComboBox();
    void configureSpeeds(const float fps);
    void on_changed();

  protected:
    ShutterListModel             m_shutterSpeedModel;
    Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
  };
}
