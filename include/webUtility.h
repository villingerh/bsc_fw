// Copyright (c) 2022 Tobias Himmler
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef WEBUTILITY_H
#define WEBUTILITY_H

#include <Arduino.h>
#include <WebServer.h>

bool handleFileRead(WebServer *server, bool fsIsSpiffs, String path);
void handleFileUpload(WebServer *server, bool fsIsSpiffs, String fileName);

#endif