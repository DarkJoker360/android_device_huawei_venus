/*
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2017 Jonathan Jason Dennis [Meticulus]
 *					theonejohnnyd@gmail.com
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

#ifndef BERLIN_H
#define BERLIN_H

#include "common.h"

/* Start profile power_save  */

#define BERLIN_DDR_FREQ_MAX_0	 	"533000000\n"
#define BERLIN_DDR_FREQ_BOOST_0 	"533000000\n"
#define BERLIN_DDR_FREQ_LOW_0	 	"120000000\n"

#define BERLIN_GPU_FREQ_MAX_0	 	"680000000\n"
#define BERLIN_GPU_FREQ_BOOST_0 	"680000000\n"
#define BERLIN_GPU_FREQ_LOW_0	 	"120000000\n"

#define BERLIN_CPU0_BOOST_P_DUR_DEF_0	4000
#define BERLIN_CPU0_FREQ_MAX_0	 	"1306000\n"
#define BERLIN_CPU0_FREQ_LOW_0	 	"480000\n"

#define BERLIN_CPU4_FREQ_MAX_0	 	"1805000\n"
#define BERLIN_CPU4_FREQ_LOW_0	 	"1402000\n"

/* end profile power_save */

/* Start profile balanced */

#define BERLIN_DDR_FREQ_MAX_1	 	"533000000\n"
#define BERLIN_DDR_FREQ_BOOST_1 	"800000000\n"
#define BERLIN_DDR_FREQ_LOW_1	 	"360000000\n"

#define BERLIN_GPU_FREQ_MAX_1	 	"680000000\n"
#define BERLIN_GPU_FREQ_BOOST_1 	"800000000\n"
#define BERLIN_GPU_FREQ_LOW_1	 	"360000000\n"

#define BERLIN_CPU0_BOOST_P_DUR_DEF_1	8000
#define BERLIN_CPU0_FREQ_MAX_1	 	"1709000\n"
#define BERLIN_CPU0_FREQ_LOW_1	 	"480000\n"

#define BERLIN_CPU4_FREQ_MAX_1	 	"2020000\n"
#define BERLIN_CPU4_FREQ_LOW_1	 	"1402000\n"

/* end profile balanced */

/* Start profile performance */

#define BERLIN_DDR_FREQ_MAX_2	 	"933000000\n"
#define BERLIN_DDR_FREQ_BOOST_2 	"9330000000\n"
#define BERLIN_DDR_FREQ_LOW_2	 	"360000000\n"

#define BERLIN_GPU_FREQ_MAX_2	 	"900000000\n"
#define BERLIN_GPU_FREQ_BOOST_2 	"900000000\n"
#define BERLIN_GPU_FREQ_LOW_2	 	"360000000\n"

#define BERLIN_CPU0_BOOST_P_DUR_DEF_2	12000
#define BERLIN_CPU0_FREQ_MAX_2	 	"1709000\n"
#define BERLIN_CPU0_FREQ_LOW_2	 	"480000\n"

#define BERLIN_CPU4_FREQ_MAX_2	 	"2112000\n"
#define BERLIN_CPU4_FREQ_LOW_2	 	"1402000\n"

/* end profile performance */


struct power_profile berlin_power_save  = {
    .cpu0_freq_max = BERLIN_CPU0_FREQ_MAX_0,
    .cpu0_freq_low = BERLIN_CPU0_FREQ_LOW_0,
    .cpu0_boost_p_dur_def = BERLIN_CPU0_BOOST_P_DUR_DEF_0,
    .cpu0_should_boost = 0,
    .cpu4_freq_max = BERLIN_CPU4_FREQ_MAX_0,
    .cpu4_freq_low = BERLIN_CPU4_FREQ_LOW_0,
    .gpu_freq_max = BERLIN_GPU_FREQ_MAX_0,
    .gpu_freq_boost = BERLIN_GPU_FREQ_BOOST_0,
    .gpu_freq_low = BERLIN_GPU_FREQ_LOW_0,
    .gpu_should_boost = 0,
    .ddr_freq_max = BERLIN_DDR_FREQ_MAX_0,
    .ddr_freq_boost = BERLIN_DDR_FREQ_BOOST_0,
    .ddr_freq_low = BERLIN_DDR_FREQ_LOW_0,
    .ddr_should_boost = 0,
};

struct power_profile berlin_balanced = {
    .cpu0_freq_max = BERLIN_CPU0_FREQ_MAX_1,
    .cpu0_freq_low = BERLIN_CPU0_FREQ_LOW_1,
    .cpu0_boost_p_dur_def = BERLIN_CPU0_BOOST_P_DUR_DEF_1,
    .cpu0_should_boost = 1,
    .cpu4_freq_max = BERLIN_CPU4_FREQ_MAX_1,
    .cpu4_freq_low = BERLIN_CPU4_FREQ_LOW_1,
    .gpu_freq_max = BERLIN_GPU_FREQ_MAX_1,
    .gpu_freq_boost = BERLIN_GPU_FREQ_BOOST_1,
    .gpu_freq_low = BERLIN_GPU_FREQ_LOW_1,
    .gpu_should_boost = 1,
    .ddr_freq_max = BERLIN_DDR_FREQ_MAX_1,
    .ddr_freq_boost = BERLIN_DDR_FREQ_BOOST_1,
    .ddr_freq_low = BERLIN_DDR_FREQ_LOW_1,
    .ddr_should_boost = 1,
};

struct power_profile berlin_performance = {
    .cpu0_freq_max = BERLIN_CPU0_FREQ_MAX_2,
    .cpu0_freq_low = BERLIN_CPU0_FREQ_LOW_2,
    .cpu0_boost_p_dur_def = BERLIN_CPU0_BOOST_P_DUR_DEF_2,
    .cpu0_should_boost = 1,
    .cpu4_freq_max = BERLIN_CPU4_FREQ_MAX_2,
    .cpu4_freq_low = BERLIN_CPU4_FREQ_LOW_2,
    .gpu_freq_max = BERLIN_GPU_FREQ_MAX_2,
    .gpu_freq_boost = BERLIN_GPU_FREQ_BOOST_2,
    .gpu_freq_low = BERLIN_GPU_FREQ_LOW_2,
    .gpu_should_boost = 1,
    .ddr_freq_max = BERLIN_DDR_FREQ_MAX_2,
    .ddr_freq_boost = BERLIN_DDR_FREQ_BOOST_2,
    .ddr_freq_low = BERLIN_DDR_FREQ_LOW_2,
    .ddr_should_boost = 1,
};

#endif
