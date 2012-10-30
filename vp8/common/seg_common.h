/*
 *  Copyright (c) 2012 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "type_aliases.h"
#include "onyxc_int.h"
#include "vp8/common/blockd.h"

#ifndef __INC_SEG_COMMON_H__
#define __INC_SEG_COMMON_H__ 1

int vp9_segfeature_active(const MACROBLOCKD *xd,
                          int segment_id,
                          SEG_LVL_FEATURES feature_id);

void vp9_clearall_segfeatures(MACROBLOCKD *xd);

void vp9_enable_segfeature(MACROBLOCKD *xd,
                           int segment_id,
                           SEG_LVL_FEATURES feature_id);

void vp9_disable_segfeature(MACROBLOCKD *xd,
                            int segment_id,
                            SEG_LVL_FEATURES feature_id);

int vp9_seg_feature_data_bits(SEG_LVL_FEATURES feature_id);

int vp9_is_segfeature_signed(SEG_LVL_FEATURES feature_id);

void vp9_clear_segdata(MACROBLOCKD *xd,
                       int segment_id,
                       SEG_LVL_FEATURES feature_id);

void vp9_set_segdata(MACROBLOCKD *xd,
                     int segment_id,
                     SEG_LVL_FEATURES feature_id,
                     int seg_data);

int vp9_get_segdata(const MACROBLOCKD *xd,
                    int segment_id,
                    SEG_LVL_FEATURES feature_id);

void vp9_clear_segref(MACROBLOCKD *xd, int segment_id);

void vp9_set_segref(MACROBLOCKD *xd,
                    int segment_id,
                    MV_REFERENCE_FRAME ref_frame);

int vp9_check_segref(const MACROBLOCKD *xd,
                     int segment_id,
                     MV_REFERENCE_FRAME ref_frame);

int vp9_check_segref_inter(MACROBLOCKD *xd, int segment_id);

int vp9_get_seg_tx_type(MACROBLOCKD *xd, int segment_id);

#endif /* __INC_SEG_COMMON_H__ */

