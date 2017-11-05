/*
 * Copyright (C) 2015 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_ARCSOFT_SKIN_BRIGHT_LEVEL[] = "arcsoft-skin-bright"; \
const char CameraParameters::KEY_ARCSOFT_SKIN_SOFTEN_LEVEL[] = "arcsoft-skin-soften"; \
const char CameraParameters::KEY_ARCSOFT_MODE[] = "arcsoft-mode"; \
const char CameraParameters::KEY_TCT_FFF_ENABLE[] = "tct-fff-enable"; \
const char CameraParameters::KEY_TCT_EIS_ENABLE[] = "tct-eis-enable";

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_ARCSOFT_SKIN_BRIGHT_LEVEL[]; \
    static const char KEY_ARCSOFT_SKIN_SOFTEN_LEVEL[]; \
    static const char KEY_ARCSOFT_MODE[]; \
    static const char KEY_TCT_FFF_ENABLE[]; \
    static const char KEY_TCT_EIS_ENABLE[];
