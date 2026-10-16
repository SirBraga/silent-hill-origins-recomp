#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D2B0
// Address: 0x28d2b0 - 0x28d4b8
void sub_0028D2B0_0x28d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D2B0_0x28d2b0");
#endif

    switch (ctx->pc) {
        case 0x28d2b0u: goto label_28d2b0;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2b8u: goto label_28d2b8;
        case 0x28d2bcu: goto label_28d2bc;
        case 0x28d2c0u: goto label_28d2c0;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2c8u: goto label_28d2c8;
        case 0x28d2ccu: goto label_28d2cc;
        case 0x28d2d0u: goto label_28d2d0;
        case 0x28d2d4u: goto label_28d2d4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2dcu: goto label_28d2dc;
        case 0x28d2e0u: goto label_28d2e0;
        case 0x28d2e4u: goto label_28d2e4;
        case 0x28d2e8u: goto label_28d2e8;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d2f0u: goto label_28d2f0;
        case 0x28d2f4u: goto label_28d2f4;
        case 0x28d2f8u: goto label_28d2f8;
        case 0x28d2fcu: goto label_28d2fc;
        case 0x28d300u: goto label_28d300;
        case 0x28d304u: goto label_28d304;
        case 0x28d308u: goto label_28d308;
        case 0x28d30cu: goto label_28d30c;
        case 0x28d310u: goto label_28d310;
        case 0x28d314u: goto label_28d314;
        case 0x28d318u: goto label_28d318;
        case 0x28d31cu: goto label_28d31c;
        case 0x28d320u: goto label_28d320;
        case 0x28d324u: goto label_28d324;
        case 0x28d328u: goto label_28d328;
        case 0x28d32cu: goto label_28d32c;
        case 0x28d330u: goto label_28d330;
        case 0x28d334u: goto label_28d334;
        case 0x28d338u: goto label_28d338;
        case 0x28d33cu: goto label_28d33c;
        case 0x28d340u: goto label_28d340;
        case 0x28d344u: goto label_28d344;
        case 0x28d348u: goto label_28d348;
        case 0x28d34cu: goto label_28d34c;
        case 0x28d350u: goto label_28d350;
        case 0x28d354u: goto label_28d354;
        case 0x28d358u: goto label_28d358;
        case 0x28d35cu: goto label_28d35c;
        case 0x28d360u: goto label_28d360;
        case 0x28d364u: goto label_28d364;
        case 0x28d368u: goto label_28d368;
        case 0x28d36cu: goto label_28d36c;
        case 0x28d370u: goto label_28d370;
        case 0x28d374u: goto label_28d374;
        case 0x28d378u: goto label_28d378;
        case 0x28d37cu: goto label_28d37c;
        case 0x28d380u: goto label_28d380;
        case 0x28d384u: goto label_28d384;
        case 0x28d388u: goto label_28d388;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d390u: goto label_28d390;
        case 0x28d394u: goto label_28d394;
        case 0x28d398u: goto label_28d398;
        case 0x28d39cu: goto label_28d39c;
        case 0x28d3a0u: goto label_28d3a0;
        case 0x28d3a4u: goto label_28d3a4;
        case 0x28d3a8u: goto label_28d3a8;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3b0u: goto label_28d3b0;
        case 0x28d3b4u: goto label_28d3b4;
        case 0x28d3b8u: goto label_28d3b8;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3c4u: goto label_28d3c4;
        case 0x28d3c8u: goto label_28d3c8;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3d0u: goto label_28d3d0;
        case 0x28d3d4u: goto label_28d3d4;
        case 0x28d3d8u: goto label_28d3d8;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3e0u: goto label_28d3e0;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d3e8u: goto label_28d3e8;
        case 0x28d3ecu: goto label_28d3ec;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d3f4u: goto label_28d3f4;
        case 0x28d3f8u: goto label_28d3f8;
        case 0x28d3fcu: goto label_28d3fc;
        case 0x28d400u: goto label_28d400;
        case 0x28d404u: goto label_28d404;
        case 0x28d408u: goto label_28d408;
        case 0x28d40cu: goto label_28d40c;
        case 0x28d410u: goto label_28d410;
        case 0x28d414u: goto label_28d414;
        case 0x28d418u: goto label_28d418;
        case 0x28d41cu: goto label_28d41c;
        case 0x28d420u: goto label_28d420;
        case 0x28d424u: goto label_28d424;
        case 0x28d428u: goto label_28d428;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d430u: goto label_28d430;
        case 0x28d434u: goto label_28d434;
        case 0x28d438u: goto label_28d438;
        case 0x28d43cu: goto label_28d43c;
        case 0x28d440u: goto label_28d440;
        case 0x28d444u: goto label_28d444;
        case 0x28d448u: goto label_28d448;
        case 0x28d44cu: goto label_28d44c;
        case 0x28d450u: goto label_28d450;
        case 0x28d454u: goto label_28d454;
        case 0x28d458u: goto label_28d458;
        case 0x28d45cu: goto label_28d45c;
        case 0x28d460u: goto label_28d460;
        case 0x28d464u: goto label_28d464;
        case 0x28d468u: goto label_28d468;
        case 0x28d46cu: goto label_28d46c;
        case 0x28d470u: goto label_28d470;
        case 0x28d474u: goto label_28d474;
        case 0x28d478u: goto label_28d478;
        case 0x28d47cu: goto label_28d47c;
        case 0x28d480u: goto label_28d480;
        case 0x28d484u: goto label_28d484;
        case 0x28d488u: goto label_28d488;
        case 0x28d48cu: goto label_28d48c;
        case 0x28d490u: goto label_28d490;
        case 0x28d494u: goto label_28d494;
        case 0x28d498u: goto label_28d498;
        case 0x28d49cu: goto label_28d49c;
        case 0x28d4a0u: goto label_28d4a0;
        case 0x28d4a4u: goto label_28d4a4;
        case 0x28d4a8u: goto label_28d4a8;
        case 0x28d4acu: goto label_28d4ac;
        case 0x28d4b0u: goto label_28d4b0;
        case 0x28d4b4u: goto label_28d4b4;
        default: break;
    }

    ctx->pc = 0x28d2b0u;

label_28d2b0:
    // 0x28d2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28d2b4:
    // 0x28d2b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_28d2b8:
    // 0x28d2b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28d2bc:
    // 0x28d2bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28d2bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d2c0:
    // 0x28d2c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28d2c4:
    // 0x28d2c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28d2c8:
    // 0x28d2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d2cc:
    // 0x28d2cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28d2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28d2d0:
    // 0x28d2d0: 0x8e9300b0  lw          $s3, 0xB0($s4)
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_28d2d4:
    // 0x28d2d4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28d2d8:
    // 0x28d2d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28d2dc:
    // 0x28d2dc: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_28d2e0:
    if (ctx->pc == 0x28D2E0u) {
        ctx->pc = 0x28D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2DCu;
        // 0x28d2e0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2E4u;
        goto label_28d2e4;
    }
    ctx->pc = 0x28D2DCu;
    {
        const bool branch_taken_0x28d2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2DCu;
        // 0x28d2e0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2dc) {
            ctx->pc = 0x28D444u;
            goto label_28d444;
        }
    }
    ctx->pc = 0x28D2E4u;
label_28d2e4:
    // 0x28d2e4: 0xc09294c  jal         func_24A530
label_28d2e8:
    if (ctx->pc == 0x28D2E8u) {
        ctx->pc = 0x28D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2E4u;
        // 0x28d2e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2ECu;
        goto label_28d2ec;
    }
    ctx->pc = 0x28D2E4u;
    SET_GPR_U32(ctx, 31, 0x28D2ECu);
    ctx->pc = 0x28D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2E4u;
    // 0x28d2e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28D2E4u, 0x28D2ECu)) {
        return;
    }
    ctx->pc = 0x28D2ECu;
label_28d2ec:
    // 0x28d2ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x28d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28d2f0:
    // 0x28d2f0: 0xc09292a  jal         func_24A4A8
label_28d2f4:
    if (ctx->pc == 0x28D2F4u) {
        ctx->pc = 0x28D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2F0u;
        // 0x28d2f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D2F8u;
        goto label_28d2f8;
    }
    ctx->pc = 0x28D2F0u;
    SET_GPR_U32(ctx, 31, 0x28D2F8u);
    ctx->pc = 0x28D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2F0u;
    // 0x28d2f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28D2F0u, 0x28D2F8u)) {
        return;
    }
    ctx->pc = 0x28D2F8u;
label_28d2f8:
    // 0x28d2f8: 0x1a000045  blez        $s0, . + 4 + (0x45 << 2)
label_28d2fc:
    if (ctx->pc == 0x28D2FCu) {
        ctx->pc = 0x28D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2F8u;
        // 0x28d2fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D300u;
        goto label_28d300;
    }
    ctx->pc = 0x28D2F8u;
    {
        const bool branch_taken_0x28d2f8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x28D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2F8u;
        // 0x28d2fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2f8) {
            ctx->pc = 0x28D410u;
            goto label_28d410;
        }
    }
    ctx->pc = 0x28D300u;
label_28d300:
    // 0x28d300: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d304:
    // 0x28d304: 0x121023  negu        $v0, $s2
    ctx->pc = 0x28d304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_28d308:
    // 0x28d308: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x28d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_28d30c:
    // 0x28d30c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_28d310:
    if (ctx->pc == 0x28D310u) {
        ctx->pc = 0x28D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D30Cu;
        // 0x28d310: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D314u;
        goto label_28d314;
    }
    ctx->pc = 0x28D30Cu;
    {
        const bool branch_taken_0x28d30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D30Cu;
        // 0x28d310: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d30c) {
            ctx->pc = 0x28D38Cu;
            goto label_28d38c;
        }
    }
    ctx->pc = 0x28D314u;
label_28d314:
    // 0x28d314: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28d314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28d318:
    // 0x28d318: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_28d31c:
    if (ctx->pc == 0x28D31Cu) {
        ctx->pc = 0x28D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D318u;
        // 0x28d31c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D320u;
        goto label_28d320;
    }
    ctx->pc = 0x28D318u;
    {
        const bool branch_taken_0x28d318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D318u;
        // 0x28d31c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d318) {
            ctx->pc = 0x28D368u;
            goto label_28d368;
        }
    }
    ctx->pc = 0x28D320u;
label_28d320:
    // 0x28d320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28d324:
    if (ctx->pc == 0x28D324u) {
        ctx->pc = 0x28D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D320u;
        // 0x28d324: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D328u;
        goto label_28d328;
    }
    ctx->pc = 0x28D320u;
    {
        const bool branch_taken_0x28d320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D320u;
        // 0x28d324: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d320) {
            ctx->pc = 0x28D348u;
            goto label_28d348;
        }
    }
    ctx->pc = 0x28D328u;
label_28d328:
    // 0x28d328: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d32c:
    if (ctx->pc == 0x28D32Cu) {
        ctx->pc = 0x28D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D328u;
        // 0x28d32c: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D330u;
        goto label_28d330;
    }
    ctx->pc = 0x28D328u;
    {
        const bool branch_taken_0x28d328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D328u;
        // 0x28d32c: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d328) {
            ctx->pc = 0x28D340u;
            goto label_28d340;
        }
    }
    ctx->pc = 0x28D330u;
label_28d330:
    // 0x28d330: 0xc0a22a6  jal         func_288A98
label_28d334:
    if (ctx->pc == 0x28D334u) {
        ctx->pc = 0x28D338u;
        goto label_28d338;
    }
    ctx->pc = 0x28D330u;
    SET_GPR_U32(ctx, 31, 0x28D338u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D330u, 0x28D338u)) {
        return;
    }
    ctx->pc = 0x28D338u;
label_28d338:
    // 0x28d338: 0xc0a3c0c  jal         func_28F030
label_28d33c:
    if (ctx->pc == 0x28D33Cu) {
        ctx->pc = 0x28D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D338u;
        // 0x28d33c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D340u;
        goto label_28d340;
    }
    ctx->pc = 0x28D338u;
    SET_GPR_U32(ctx, 31, 0x28D340u);
    ctx->pc = 0x28D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D338u;
    // 0x28d33c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D338u, 0x28D340u)) {
        return;
    }
    ctx->pc = 0x28D340u;
label_28d340:
    // 0x28d340: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28d340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28d344:
    // 0x28d344: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x28d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_28d348:
    // 0x28d348: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d34c:
    if (ctx->pc == 0x28D34Cu) {
        ctx->pc = 0x28D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D348u;
        // 0x28d34c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D350u;
        goto label_28d350;
    }
    ctx->pc = 0x28D348u;
    {
        const bool branch_taken_0x28d348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d348) {
            ctx->pc = 0x28D34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D348u;
            // 0x28d34c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D364u;
            goto label_28d364;
        }
    }
    ctx->pc = 0x28D350u;
label_28d350:
    // 0x28d350: 0xc0a22a6  jal         func_288A98
label_28d354:
    if (ctx->pc == 0x28D354u) {
        ctx->pc = 0x28D358u;
        goto label_28d358;
    }
    ctx->pc = 0x28D350u;
    SET_GPR_U32(ctx, 31, 0x28D358u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D350u, 0x28D358u)) {
        return;
    }
    ctx->pc = 0x28D358u;
label_28d358:
    // 0x28d358: 0xc0a3c0c  jal         func_28F030
label_28d35c:
    if (ctx->pc == 0x28D35Cu) {
        ctx->pc = 0x28D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D358u;
        // 0x28d35c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D360u;
        goto label_28d360;
    }
    ctx->pc = 0x28D358u;
    SET_GPR_U32(ctx, 31, 0x28D360u);
    ctx->pc = 0x28D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D358u;
    // 0x28d35c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D358u, 0x28D360u)) {
        return;
    }
    ctx->pc = 0x28D360u;
label_28d360:
    // 0x28d360: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_28d364:
    // 0x28d364: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28d364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28d368:
    // 0x28d368: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_28d36c:
    // 0x28d36c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d370:
    if (ctx->pc == 0x28D370u) {
        ctx->pc = 0x28D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D36Cu;
        // 0x28d370: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D374u;
        goto label_28d374;
    }
    ctx->pc = 0x28D36Cu;
    {
        const bool branch_taken_0x28d36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D36Cu;
        // 0x28d370: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d36c) {
            ctx->pc = 0x28D384u;
            goto label_28d384;
        }
    }
    ctx->pc = 0x28D374u;
label_28d374:
    // 0x28d374: 0xc0a22a6  jal         func_288A98
label_28d378:
    if (ctx->pc == 0x28D378u) {
        ctx->pc = 0x28D37Cu;
        goto label_28d37c;
    }
    ctx->pc = 0x28D374u;
    SET_GPR_U32(ctx, 31, 0x28D37Cu);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D374u, 0x28D37Cu)) {
        return;
    }
    ctx->pc = 0x28D37Cu;
label_28d37c:
    // 0x28d37c: 0xc0a3c0c  jal         func_28F030
label_28d380:
    if (ctx->pc == 0x28D380u) {
        ctx->pc = 0x28D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D37Cu;
        // 0x28d380: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D384u;
        goto label_28d384;
    }
    ctx->pc = 0x28D37Cu;
    SET_GPR_U32(ctx, 31, 0x28D384u);
    ctx->pc = 0x28D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D37Cu;
    // 0x28d380: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D37Cu, 0x28D384u)) {
        return;
    }
    ctx->pc = 0x28D384u;
label_28d384:
    // 0x28d384: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_28d388:
    if (ctx->pc == 0x28D388u) {
        ctx->pc = 0x28D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D384u;
        // 0x28d388: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D38Cu;
        goto label_28d38c;
    }
    ctx->pc = 0x28D384u;
    {
        const bool branch_taken_0x28d384 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D384u;
        // 0x28d388: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d384) {
            ctx->pc = 0x28D410u;
            goto label_28d410;
        }
    }
    ctx->pc = 0x28D38Cu;
label_28d38c:
    // 0x28d38c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28d38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d390:
    // 0x28d390: 0x8e24fffc  lw          $a0, -0x4($s1)
    ctx->pc = 0x28d390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_28d394:
    // 0x28d394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d398:
    if (ctx->pc == 0x28D398u) {
        ctx->pc = 0x28D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D394u;
        // 0x28d398: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D39Cu;
        goto label_28d39c;
    }
    ctx->pc = 0x28D394u;
    {
        const bool branch_taken_0x28d394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d394) {
            ctx->pc = 0x28D398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D394u;
            // 0x28d398: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3B0u;
            goto label_28d3b0;
        }
    }
    ctx->pc = 0x28D39Cu;
label_28d39c:
    // 0x28d39c: 0xc0a22a6  jal         func_288A98
label_28d3a0:
    if (ctx->pc == 0x28D3A0u) {
        ctx->pc = 0x28D3A4u;
        goto label_28d3a4;
    }
    ctx->pc = 0x28D39Cu;
    SET_GPR_U32(ctx, 31, 0x28D3A4u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D39Cu, 0x28D3A4u)) {
        return;
    }
    ctx->pc = 0x28D3A4u;
label_28d3a4:
    // 0x28d3a4: 0xc0a3c0c  jal         func_28F030
label_28d3a8:
    if (ctx->pc == 0x28D3A8u) {
        ctx->pc = 0x28D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3A4u;
        // 0x28d3a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3ACu;
        goto label_28d3ac;
    }
    ctx->pc = 0x28D3A4u;
    SET_GPR_U32(ctx, 31, 0x28D3ACu);
    ctx->pc = 0x28D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3A4u;
    // 0x28d3a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D3A4u, 0x28D3ACu)) {
        return;
    }
    ctx->pc = 0x28D3ACu;
label_28d3ac:
    // 0x28d3ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28d3b0:
    // 0x28d3b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d3b4:
    if (ctx->pc == 0x28D3B4u) {
        ctx->pc = 0x28D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3B0u;
        // 0x28d3b4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3B8u;
        goto label_28d3b8;
    }
    ctx->pc = 0x28D3B0u;
    {
        const bool branch_taken_0x28d3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3b0) {
            ctx->pc = 0x28D3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3B0u;
            // 0x28d3b4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3CCu;
            goto label_28d3cc;
        }
    }
    ctx->pc = 0x28D3B8u;
label_28d3b8:
    // 0x28d3b8: 0xc0a22a6  jal         func_288A98
label_28d3bc:
    if (ctx->pc == 0x28D3BCu) {
        ctx->pc = 0x28D3C0u;
        goto label_28d3c0;
    }
    ctx->pc = 0x28D3B8u;
    SET_GPR_U32(ctx, 31, 0x28D3C0u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D3B8u, 0x28D3C0u)) {
        return;
    }
    ctx->pc = 0x28D3C0u;
label_28d3c0:
    // 0x28d3c0: 0xc0a3c0c  jal         func_28F030
label_28d3c4:
    if (ctx->pc == 0x28D3C4u) {
        ctx->pc = 0x28D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C0u;
        // 0x28d3c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3C8u;
        goto label_28d3c8;
    }
    ctx->pc = 0x28D3C0u;
    SET_GPR_U32(ctx, 31, 0x28D3C8u);
    ctx->pc = 0x28D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3C0u;
    // 0x28d3c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D3C0u, 0x28D3C8u)) {
        return;
    }
    ctx->pc = 0x28D3C8u;
label_28d3c8:
    // 0x28d3c8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x28d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28d3cc:
    // 0x28d3cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d3d0:
    if (ctx->pc == 0x28D3D0u) {
        ctx->pc = 0x28D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3CCu;
        // 0x28d3d0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3D4u;
        goto label_28d3d4;
    }
    ctx->pc = 0x28D3CCu;
    {
        const bool branch_taken_0x28d3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3cc) {
            ctx->pc = 0x28D3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3CCu;
            // 0x28d3d0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3E8u;
            goto label_28d3e8;
        }
    }
    ctx->pc = 0x28D3D4u;
label_28d3d4:
    // 0x28d3d4: 0xc0a22a6  jal         func_288A98
label_28d3d8:
    if (ctx->pc == 0x28D3D8u) {
        ctx->pc = 0x28D3DCu;
        goto label_28d3dc;
    }
    ctx->pc = 0x28D3D4u;
    SET_GPR_U32(ctx, 31, 0x28D3DCu);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D3D4u, 0x28D3DCu)) {
        return;
    }
    ctx->pc = 0x28D3DCu;
label_28d3dc:
    // 0x28d3dc: 0xc0a3c0c  jal         func_28F030
label_28d3e0:
    if (ctx->pc == 0x28D3E0u) {
        ctx->pc = 0x28D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3DCu;
        // 0x28d3e0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3E4u;
        goto label_28d3e4;
    }
    ctx->pc = 0x28D3DCu;
    SET_GPR_U32(ctx, 31, 0x28D3E4u);
    ctx->pc = 0x28D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3DCu;
    // 0x28d3e0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D3DCu, 0x28D3E4u)) {
        return;
    }
    ctx->pc = 0x28D3E4u;
label_28d3e4:
    // 0x28d3e4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_28d3e8:
    // 0x28d3e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_28d3ec:
    if (ctx->pc == 0x28D3ECu) {
        ctx->pc = 0x28D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3E8u;
        // 0x28d3ec: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3F0u;
        goto label_28d3f0;
    }
    ctx->pc = 0x28D3E8u;
    {
        const bool branch_taken_0x28d3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3e8) {
            ctx->pc = 0x28D3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3E8u;
            // 0x28d3ec: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D404u;
            goto label_28d404;
        }
    }
    ctx->pc = 0x28D3F0u;
label_28d3f0:
    // 0x28d3f0: 0xc0a22a6  jal         func_288A98
label_28d3f4:
    if (ctx->pc == 0x28D3F4u) {
        ctx->pc = 0x28D3F8u;
        goto label_28d3f8;
    }
    ctx->pc = 0x28D3F0u;
    SET_GPR_U32(ctx, 31, 0x28D3F8u);
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28D3F0u, 0x28D3F8u)) {
        return;
    }
    ctx->pc = 0x28D3F8u;
label_28d3f8:
    // 0x28d3f8: 0xc0a3c0c  jal         func_28F030
label_28d3fc:
    if (ctx->pc == 0x28D3FCu) {
        ctx->pc = 0x28D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3F8u;
        // 0x28d3fc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D400u;
        goto label_28d400;
    }
    ctx->pc = 0x28D3F8u;
    SET_GPR_U32(ctx, 31, 0x28D400u);
    ctx->pc = 0x28D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3F8u;
    // 0x28d3fc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F030u, 0x28D3F8u, 0x28D400u)) {
        return;
    }
    ctx->pc = 0x28D400u;
label_28d400:
    // 0x28d400: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x28d400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_28d404:
    // 0x28d404: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x28d404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_28d408:
    // 0x28d408: 0x1640ffe1  bnez        $s2, . + 4 + (-0x1F << 2)
label_28d40c:
    if (ctx->pc == 0x28D40Cu) {
        ctx->pc = 0x28D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D408u;
        // 0x28d40c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D410u;
        goto label_28d410;
    }
    ctx->pc = 0x28D408u;
    {
        const bool branch_taken_0x28d408 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D408u;
        // 0x28d40c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d408) {
            ctx->pc = 0x28D390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d390;
        }
    }
    ctx->pc = 0x28D410u;
label_28d410:
    // 0x28d410: 0xc092932  jal         func_24A4C8
label_28d414:
    if (ctx->pc == 0x28D414u) {
        ctx->pc = 0x28D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D410u;
        // 0x28d414: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D418u;
        goto label_28d418;
    }
    ctx->pc = 0x28D410u;
    SET_GPR_U32(ctx, 31, 0x28D418u);
    ctx->pc = 0x28D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D410u;
    // 0x28d414: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28D410u, 0x28D418u)) {
        return;
    }
    ctx->pc = 0x28D418u;
label_28d418:
    // 0x28d418: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28d41c:
    // 0x28d41c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d420:
    if (ctx->pc == 0x28D420u) {
        ctx->pc = 0x28D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D41Cu;
        // 0x28d420: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D424u;
        goto label_28d424;
    }
    ctx->pc = 0x28D41Cu;
    {
        const bool branch_taken_0x28d41c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D41Cu;
        // 0x28d420: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d41c) {
            ctx->pc = 0x28D434u;
            goto label_28d434;
        }
    }
    ctx->pc = 0x28D424u;
label_28d424:
    // 0x28d424: 0xc095b08  jal         func_256C20
label_28d428:
    if (ctx->pc == 0x28D428u) {
        ctx->pc = 0x28D42Cu;
        goto label_28d42c;
    }
    ctx->pc = 0x28D424u;
    SET_GPR_U32(ctx, 31, 0x28D42Cu);
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x28D424u, 0x28D42Cu)) {
        return;
    }
    ctx->pc = 0x28D42Cu;
label_28d42c:
    // 0x28d42c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x28d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_28d430:
    // 0x28d430: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28d430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28d434:
    // 0x28d434: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x28d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28d438:
    // 0x28d438: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28d43c:
    // 0x28d43c: 0x60f809  jalr        $v1
label_28d440:
    if (ctx->pc == 0x28D440u) {
        ctx->pc = 0x28D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D43Cu;
        // 0x28d440: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D444u;
        goto label_28d444;
    }
    ctx->pc = 0x28D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28D444u);
        ctx->pc = 0x28D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D43Cu;
        // 0x28d440: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D43Cu, 0x28D444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D444u;
label_28d444:
    // 0x28d444: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_28d448:
    // 0x28d448: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_28d44c:
    if (ctx->pc == 0x28D44Cu) {
        ctx->pc = 0x28D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D448u;
        // 0x28d44c: 0x8e8400b4  lw          $a0, 0xB4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D450u;
        goto label_28d450;
    }
    ctx->pc = 0x28D448u;
    {
        const bool branch_taken_0x28d448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d448) {
            ctx->pc = 0x28D44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D448u;
            // 0x28d44c: 0x8e8400b4  lw          $a0, 0xB4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D478u;
            goto label_28d478;
        }
    }
    ctx->pc = 0x28D450u;
label_28d450:
    // 0x28d450: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28d454:
    // 0x28d454: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_28d458:
    if (ctx->pc == 0x28D458u) {
        ctx->pc = 0x28D45Cu;
        goto label_28d45c;
    }
    ctx->pc = 0x28D454u;
    {
        const bool branch_taken_0x28d454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d454) {
            ctx->pc = 0x28D46Cu;
            goto label_28d46c;
        }
    }
    ctx->pc = 0x28D45Cu;
label_28d45c:
    // 0x28d45c: 0xc0957f0  jal         func_255FC0
label_28d460:
    if (ctx->pc == 0x28D460u) {
        ctx->pc = 0x28D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D45Cu;
        // 0x28d460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D464u;
        goto label_28d464;
    }
    ctx->pc = 0x28D45Cu;
    SET_GPR_U32(ctx, 31, 0x28D464u);
    ctx->pc = 0x28D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D45Cu;
    // 0x28d460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x28D45Cu, 0x28D464u)) {
        return;
    }
    ctx->pc = 0x28D464u;
label_28d464:
    // 0x28d464: 0xc0898d2  jal         func_226348
label_28d468:
    if (ctx->pc == 0x28D468u) {
        ctx->pc = 0x28D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D464u;
        // 0x28d468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D46Cu;
        goto label_28d46c;
    }
    ctx->pc = 0x28D464u;
    SET_GPR_U32(ctx, 31, 0x28D46Cu);
    ctx->pc = 0x28D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D464u;
    // 0x28d468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x28D464u, 0x28D46Cu)) {
        return;
    }
    ctx->pc = 0x28D46Cu;
label_28d46c:
    // 0x28d46c: 0xc095534  jal         func_2554D0
label_28d470:
    if (ctx->pc == 0x28D470u) {
        ctx->pc = 0x28D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D46Cu;
        // 0x28d470: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D474u;
        goto label_28d474;
    }
    ctx->pc = 0x28D46Cu;
    SET_GPR_U32(ctx, 31, 0x28D474u);
    ctx->pc = 0x28D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D46Cu;
    // 0x28d470: 0x8e8400b8  lw          $a0, 0xB8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x28D46Cu, 0x28D474u)) {
        return;
    }
    ctx->pc = 0x28D474u;
label_28d474:
    // 0x28d474: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x28d474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_28d478:
    // 0x28d478: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_28d47c:
    if (ctx->pc == 0x28D47Cu) {
        ctx->pc = 0x28D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D478u;
        // 0x28d47c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D480u;
        goto label_28d480;
    }
    ctx->pc = 0x28D478u;
    {
        const bool branch_taken_0x28d478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D478u;
        // 0x28d47c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d478) {
            ctx->pc = 0x28D490u;
            goto label_28d490;
        }
    }
    ctx->pc = 0x28D480u;
label_28d480:
    // 0x28d480: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x28d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_28d484:
    // 0x28d484: 0x40f809  jalr        $v0
label_28d488:
    if (ctx->pc == 0x28D488u) {
        ctx->pc = 0x28D48Cu;
        goto label_28d48c;
    }
    ctx->pc = 0x28D484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D48Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D484u, 0x28D48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D48Cu;
label_28d48c:
    // 0x28d48c: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x28d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
label_28d490:
    // 0x28d490: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d494:
    // 0x28d494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d498:
    // 0x28d498: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d49c:
    // 0x28d49c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d4a0:
    // 0x28d4a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28d4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d4a4:
    // 0x28d4a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28d4a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d4a8:
    // 0x28d4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d4ac:
    // 0x28d4ac: 0x3e00008  jr          $ra
label_28d4b0:
    if (ctx->pc == 0x28D4B0u) {
        ctx->pc = 0x28D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4ACu;
        // 0x28d4b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D4B4u;
        goto label_28d4b4;
    }
    ctx->pc = 0x28D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4ACu;
        // 0x28d4b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D4B4u;
label_28d4b4:
    // 0x28d4b4: 0x0  nop
    ctx->pc = 0x28d4b4u;
    // NOP
    ctx->pc = 0x28d4b8u;
}
