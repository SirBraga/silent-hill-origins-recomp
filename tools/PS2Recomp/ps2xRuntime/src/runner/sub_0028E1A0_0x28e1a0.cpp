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

// Function: sub_0028E1A0
// Address: 0x28e1a0 - 0x28e3d8
void sub_0028E1A0_0x28e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E1A0_0x28e1a0");
#endif

    switch (ctx->pc) {
        case 0x28e1a0u: goto label_28e1a0;
        case 0x28e1a4u: goto label_28e1a4;
        case 0x28e1a8u: goto label_28e1a8;
        case 0x28e1acu: goto label_28e1ac;
        case 0x28e1b0u: goto label_28e1b0;
        case 0x28e1b4u: goto label_28e1b4;
        case 0x28e1b8u: goto label_28e1b8;
        case 0x28e1bcu: goto label_28e1bc;
        case 0x28e1c0u: goto label_28e1c0;
        case 0x28e1c4u: goto label_28e1c4;
        case 0x28e1c8u: goto label_28e1c8;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1d0u: goto label_28e1d0;
        case 0x28e1d4u: goto label_28e1d4;
        case 0x28e1d8u: goto label_28e1d8;
        case 0x28e1dcu: goto label_28e1dc;
        case 0x28e1e0u: goto label_28e1e0;
        case 0x28e1e4u: goto label_28e1e4;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e1f4u: goto label_28e1f4;
        case 0x28e1f8u: goto label_28e1f8;
        case 0x28e1fcu: goto label_28e1fc;
        case 0x28e200u: goto label_28e200;
        case 0x28e204u: goto label_28e204;
        case 0x28e208u: goto label_28e208;
        case 0x28e20cu: goto label_28e20c;
        case 0x28e210u: goto label_28e210;
        case 0x28e214u: goto label_28e214;
        case 0x28e218u: goto label_28e218;
        case 0x28e21cu: goto label_28e21c;
        case 0x28e220u: goto label_28e220;
        case 0x28e224u: goto label_28e224;
        case 0x28e228u: goto label_28e228;
        case 0x28e22cu: goto label_28e22c;
        case 0x28e230u: goto label_28e230;
        case 0x28e234u: goto label_28e234;
        case 0x28e238u: goto label_28e238;
        case 0x28e23cu: goto label_28e23c;
        case 0x28e240u: goto label_28e240;
        case 0x28e244u: goto label_28e244;
        case 0x28e248u: goto label_28e248;
        case 0x28e24cu: goto label_28e24c;
        case 0x28e250u: goto label_28e250;
        case 0x28e254u: goto label_28e254;
        case 0x28e258u: goto label_28e258;
        case 0x28e25cu: goto label_28e25c;
        case 0x28e260u: goto label_28e260;
        case 0x28e264u: goto label_28e264;
        case 0x28e268u: goto label_28e268;
        case 0x28e26cu: goto label_28e26c;
        case 0x28e270u: goto label_28e270;
        case 0x28e274u: goto label_28e274;
        case 0x28e278u: goto label_28e278;
        case 0x28e27cu: goto label_28e27c;
        case 0x28e280u: goto label_28e280;
        case 0x28e284u: goto label_28e284;
        case 0x28e288u: goto label_28e288;
        case 0x28e28cu: goto label_28e28c;
        case 0x28e290u: goto label_28e290;
        case 0x28e294u: goto label_28e294;
        case 0x28e298u: goto label_28e298;
        case 0x28e29cu: goto label_28e29c;
        case 0x28e2a0u: goto label_28e2a0;
        case 0x28e2a4u: goto label_28e2a4;
        case 0x28e2a8u: goto label_28e2a8;
        case 0x28e2acu: goto label_28e2ac;
        case 0x28e2b0u: goto label_28e2b0;
        case 0x28e2b4u: goto label_28e2b4;
        case 0x28e2b8u: goto label_28e2b8;
        case 0x28e2bcu: goto label_28e2bc;
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2c4u: goto label_28e2c4;
        case 0x28e2c8u: goto label_28e2c8;
        case 0x28e2ccu: goto label_28e2cc;
        case 0x28e2d0u: goto label_28e2d0;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e2d8u: goto label_28e2d8;
        case 0x28e2dcu: goto label_28e2dc;
        case 0x28e2e0u: goto label_28e2e0;
        case 0x28e2e4u: goto label_28e2e4;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e2ecu: goto label_28e2ec;
        case 0x28e2f0u: goto label_28e2f0;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e2f8u: goto label_28e2f8;
        case 0x28e2fcu: goto label_28e2fc;
        case 0x28e300u: goto label_28e300;
        case 0x28e304u: goto label_28e304;
        case 0x28e308u: goto label_28e308;
        case 0x28e30cu: goto label_28e30c;
        case 0x28e310u: goto label_28e310;
        case 0x28e314u: goto label_28e314;
        case 0x28e318u: goto label_28e318;
        case 0x28e31cu: goto label_28e31c;
        case 0x28e320u: goto label_28e320;
        case 0x28e324u: goto label_28e324;
        case 0x28e328u: goto label_28e328;
        case 0x28e32cu: goto label_28e32c;
        case 0x28e330u: goto label_28e330;
        case 0x28e334u: goto label_28e334;
        case 0x28e338u: goto label_28e338;
        case 0x28e33cu: goto label_28e33c;
        case 0x28e340u: goto label_28e340;
        case 0x28e344u: goto label_28e344;
        case 0x28e348u: goto label_28e348;
        case 0x28e34cu: goto label_28e34c;
        case 0x28e350u: goto label_28e350;
        case 0x28e354u: goto label_28e354;
        case 0x28e358u: goto label_28e358;
        case 0x28e35cu: goto label_28e35c;
        case 0x28e360u: goto label_28e360;
        case 0x28e364u: goto label_28e364;
        case 0x28e368u: goto label_28e368;
        case 0x28e36cu: goto label_28e36c;
        case 0x28e370u: goto label_28e370;
        case 0x28e374u: goto label_28e374;
        case 0x28e378u: goto label_28e378;
        case 0x28e37cu: goto label_28e37c;
        case 0x28e380u: goto label_28e380;
        case 0x28e384u: goto label_28e384;
        case 0x28e388u: goto label_28e388;
        case 0x28e38cu: goto label_28e38c;
        case 0x28e390u: goto label_28e390;
        case 0x28e394u: goto label_28e394;
        case 0x28e398u: goto label_28e398;
        case 0x28e39cu: goto label_28e39c;
        case 0x28e3a0u: goto label_28e3a0;
        case 0x28e3a4u: goto label_28e3a4;
        case 0x28e3a8u: goto label_28e3a8;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3b0u: goto label_28e3b0;
        case 0x28e3b4u: goto label_28e3b4;
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e3bcu: goto label_28e3bc;
        case 0x28e3c0u: goto label_28e3c0;
        case 0x28e3c4u: goto label_28e3c4;
        case 0x28e3c8u: goto label_28e3c8;
        case 0x28e3ccu: goto label_28e3cc;
        case 0x28e3d0u: goto label_28e3d0;
        case 0x28e3d4u: goto label_28e3d4;
        default: break;
    }

    ctx->pc = 0x28e1a0u;

label_28e1a0:
    // 0x28e1a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_28e1a4:
    // 0x28e1a4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28e1a8:
    // 0x28e1a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x28e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_28e1ac:
    // 0x28e1ac: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x28e1acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
label_28e1b0:
    // 0x28e1b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_28e1b4:
    // 0x28e1b4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x28e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_28e1b8:
    // 0x28e1b8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x28e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_28e1bc:
    // 0x28e1bc: 0x24e763b0  addiu       $a3, $a3, 0x63B0
    ctx->pc = 0x28e1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25520));
label_28e1c0:
    // 0x28e1c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x28e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_28e1c4:
    // 0x28e1c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28e1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e1c8:
    // 0x28e1c8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x28e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_28e1cc:
    // 0x28e1cc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e1d0:
    // 0x28e1d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_28e1d4:
    // 0x28e1d4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28e1d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e1d8:
    // 0x28e1d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x28e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_28e1dc:
    // 0x28e1dc: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x28e1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_28e1e0:
    // 0x28e1e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x28e1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_28e1e4:
    // 0x28e1e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28e1e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e1e8:
    // 0x28e1e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28e1ec:
    // 0x28e1ec: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28e1ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e1f0:
    // 0x28e1f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28e1f4:
    // 0x28e1f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_28e1f8:
    // 0x28e1f8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x28e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_28e1fc:
    // 0x28e1fc: 0x40f809  jalr        $v0
label_28e200:
    if (ctx->pc == 0x28E200u) {
        ctx->pc = 0x28E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1FCu;
        // 0x28e200: 0x8ce40538  lw          $a0, 0x538($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E204u;
        goto label_28e204;
    }
    ctx->pc = 0x28E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E204u);
        ctx->pc = 0x28E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1FCu;
        // 0x28e200: 0x8ce40538  lw          $a0, 0x538($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E1FCu, 0x28E204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E204u;
label_28e204:
    // 0x28e204: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28e204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e208:
    // 0x28e208: 0x12600066  beqz        $s3, . + 4 + (0x66 << 2)
label_28e20c:
    if (ctx->pc == 0x28E20Cu) {
        ctx->pc = 0x28E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E208u;
        // 0x28e20c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E210u;
        goto label_28e210;
    }
    ctx->pc = 0x28E208u;
    {
        const bool branch_taken_0x28e208 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E208u;
        // 0x28e20c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e208) {
            ctx->pc = 0x28E3A4u;
            goto label_28e3a4;
        }
    }
    ctx->pc = 0x28E210u;
label_28e210:
    // 0x28e210: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x28e210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_28e214:
    // 0x28e214: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x28e214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_28e218:
    // 0x28e218: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x28e218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_28e21c:
    // 0x28e21c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x28e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_28e220:
    // 0x28e220: 0x12600060  beqz        $s3, . + 4 + (0x60 << 2)
label_28e224:
    if (ctx->pc == 0x28E224u) {
        ctx->pc = 0x28E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E220u;
        // 0x28e224: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E228u;
        goto label_28e228;
    }
    ctx->pc = 0x28E220u;
    {
        const bool branch_taken_0x28e220 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E220u;
        // 0x28e224: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e220) {
            ctx->pc = 0x28E3A4u;
            goto label_28e3a4;
        }
    }
    ctx->pc = 0x28E228u;
label_28e228:
    // 0x28e228: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e22c:
    // 0x28e22c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x28e22cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28e230:
    // 0x28e230: 0x1214000a  beq         $s0, $s4, . + 4 + (0xA << 2)
label_28e234:
    if (ctx->pc == 0x28E234u) {
        ctx->pc = 0x28E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E230u;
        // 0x28e234: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E238u;
        goto label_28e238;
    }
    ctx->pc = 0x28E230u;
    {
        const bool branch_taken_0x28e230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x28E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E230u;
        // 0x28e234: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e230) {
            ctx->pc = 0x28E25Cu;
            goto label_28e25c;
        }
    }
    ctx->pc = 0x28E238u;
label_28e238:
    // 0x28e238: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28e23c:
    // 0x28e23c: 0x0  nop
    ctx->pc = 0x28e23cu;
    // NOP
label_28e240:
    // 0x28e240: 0x0  nop
    ctx->pc = 0x28e240u;
    // NOP
label_28e244:
    // 0x28e244: 0x0  nop
    ctx->pc = 0x28e244u;
    // NOP
label_28e248:
    // 0x28e248: 0x0  nop
    ctx->pc = 0x28e248u;
    // NOP
label_28e24c:
    // 0x28e24c: 0x0  nop
    ctx->pc = 0x28e24cu;
    // NOP
label_28e250:
    // 0x28e250: 0x0  nop
    ctx->pc = 0x28e250u;
    // NOP
label_28e254:
    // 0x28e254: 0x5614fffa  bnel        $s0, $s4, . + 4 + (-0x6 << 2)
label_28e258:
    if (ctx->pc == 0x28E258u) {
        ctx->pc = 0x28E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E254u;
        // 0x28e258: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E25Cu;
        goto label_28e25c;
    }
    ctx->pc = 0x28E254u;
    {
        const bool branch_taken_0x28e254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x28e254) {
            ctx->pc = 0x28E258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E254u;
            // 0x28e258: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e240;
        }
    }
    ctx->pc = 0x28E25Cu;
label_28e25c:
    // 0x28e25c: 0x1216000e  beq         $s0, $s6, . + 4 + (0xE << 2)
label_28e260:
    if (ctx->pc == 0x28E260u) {
        ctx->pc = 0x28E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E25Cu;
        // 0x28e260: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E264u;
        goto label_28e264;
    }
    ctx->pc = 0x28E25Cu;
    {
        const bool branch_taken_0x28e25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x28E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E25Cu;
        // 0x28e260: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e25c) {
            ctx->pc = 0x28E298u;
            goto label_28e298;
        }
    }
    ctx->pc = 0x28E264u;
label_28e264:
    // 0x28e264: 0x0  nop
    ctx->pc = 0x28e264u;
    // NOP
label_28e268:
    // 0x28e268: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_28e26c:
    if (ctx->pc == 0x28E26Cu) {
        ctx->pc = 0x28E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E268u;
        // 0x28e26c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E270u;
        goto label_28e270;
    }
    ctx->pc = 0x28E268u;
    {
        const bool branch_taken_0x28e268 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E268u;
        // 0x28e26c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e268) {
            ctx->pc = 0x28E278u;
            goto label_28e278;
        }
    }
    ctx->pc = 0x28E270u;
label_28e270:
    // 0x28e270: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e274:
    if (ctx->pc == 0x28E274u) {
        ctx->pc = 0x28E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E270u;
        // 0x28e274: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E278u;
        goto label_28e278;
    }
    ctx->pc = 0x28E270u;
    {
        const bool branch_taken_0x28e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E270u;
        // 0x28e274: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e270) {
            ctx->pc = 0x28E284u;
            goto label_28e284;
        }
    }
    ctx->pc = 0x28E278u;
label_28e278:
    // 0x28e278: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28e27c:
    // 0x28e27c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28e280:
    // 0x28e280: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28e280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_28e284:
    // 0x28e284: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28e284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e288:
    // 0x28e288: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e28c:
    // 0x28e28c: 0x1616fff6  bne         $s0, $s6, . + 4 + (-0xA << 2)
label_28e290:
    if (ctx->pc == 0x28E290u) {
        ctx->pc = 0x28E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E28Cu;
        // 0x28e290: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E294u;
        goto label_28e294;
    }
    ctx->pc = 0x28E28Cu;
    {
        const bool branch_taken_0x28e28c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x28E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E28Cu;
        // 0x28e290: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e28c) {
            ctx->pc = 0x28E268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e268;
        }
    }
    ctx->pc = 0x28E294u;
label_28e294:
    // 0x28e294: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_28e298:
    // 0x28e298: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28e298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_28e29c:
    // 0x28e29c: 0x24a30fc8  addiu       $v1, $a1, 0xFC8
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_28e2a0:
    // 0x28e2a0: 0x244663b0  addiu       $a2, $v0, 0x63B0
    ctx->pc = 0x28e2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
label_28e2a4:
    // 0x28e2a4: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x28e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_28e2a8:
    // 0x28e2a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e2ac:
    // 0x28e2ac: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x28e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_28e2b0:
    // 0x28e2b0: 0x40f809  jalr        $v0
label_28e2b4:
    if (ctx->pc == 0x28E2B4u) {
        ctx->pc = 0x28E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2B0u;
        // 0x28e2b4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2B8u;
        goto label_28e2b8;
    }
    ctx->pc = 0x28E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E2B8u);
        ctx->pc = 0x28E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2B0u;
        // 0x28e2b4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E2B0u, 0x28E2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E2B8u;
label_28e2b8:
    // 0x28e2b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e2bc:
    // 0x28e2bc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_28e2c0:
    if (ctx->pc == 0x28E2C0u) {
        ctx->pc = 0x28E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2BCu;
        // 0x28e2c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2C4u;
        goto label_28e2c4;
    }
    ctx->pc = 0x28E2BCu;
    {
        const bool branch_taken_0x28e2bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2BCu;
        // 0x28e2c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2bc) {
            ctx->pc = 0x28E2CCu;
            goto label_28e2cc;
        }
    }
    ctx->pc = 0x28E2C4u;
label_28e2c4:
    // 0x28e2c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_28e2c8:
    // 0x28e2c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_28e2cc:
    // 0x28e2cc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_28e2d0:
    // 0x28e2d0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_28e2d4:
    if (ctx->pc == 0x28E2D4u) {
        ctx->pc = 0x28E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D0u;
        // 0x28e2d4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2D8u;
        goto label_28e2d8;
    }
    ctx->pc = 0x28E2D0u;
    {
        const bool branch_taken_0x28e2d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D0u;
        // 0x28e2d4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2d0) {
            ctx->pc = 0x28E2E0u;
            goto label_28e2e0;
        }
    }
    ctx->pc = 0x28E2D8u;
label_28e2d8:
    // 0x28e2d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e2dc:
    if (ctx->pc == 0x28E2DCu) {
        ctx->pc = 0x28E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D8u;
        // 0x28e2dc: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2E0u;
        goto label_28e2e0;
    }
    ctx->pc = 0x28E2D8u;
    {
        const bool branch_taken_0x28e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D8u;
        // 0x28e2dc: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2d8) {
            ctx->pc = 0x28E2ECu;
            goto label_28e2ec;
        }
    }
    ctx->pc = 0x28E2E0u;
label_28e2e0:
    // 0x28e2e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28e2e4:
    // 0x28e2e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_28e2e8:
    // 0x28e2e8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x28e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_28e2ec:
    // 0x28e2ec: 0x1214000d  beq         $s0, $s4, . + 4 + (0xD << 2)
label_28e2f0:
    if (ctx->pc == 0x28E2F0u) {
        ctx->pc = 0x28E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ECu;
        // 0x28e2f0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2F4u;
        goto label_28e2f4;
    }
    ctx->pc = 0x28E2ECu;
    {
        const bool branch_taken_0x28e2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x28E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ECu;
        // 0x28e2f0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ec) {
            ctx->pc = 0x28E324u;
            goto label_28e324;
        }
    }
    ctx->pc = 0x28E2F4u;
label_28e2f4:
    // 0x28e2f4: 0x0  nop
    ctx->pc = 0x28e2f4u;
    // NOP
label_28e2f8:
    // 0x28e2f8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_28e2fc:
    if (ctx->pc == 0x28E2FCu) {
        ctx->pc = 0x28E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2F8u;
        // 0x28e2fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E300u;
        goto label_28e300;
    }
    ctx->pc = 0x28E2F8u;
    {
        const bool branch_taken_0x28e2f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2F8u;
        // 0x28e2fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2f8) {
            ctx->pc = 0x28E308u;
            goto label_28e308;
        }
    }
    ctx->pc = 0x28E300u;
label_28e300:
    // 0x28e300: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e304:
    if (ctx->pc == 0x28E304u) {
        ctx->pc = 0x28E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E300u;
        // 0x28e304: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E308u;
        goto label_28e308;
    }
    ctx->pc = 0x28E300u;
    {
        const bool branch_taken_0x28e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E300u;
        // 0x28e304: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e300) {
            ctx->pc = 0x28E314u;
            goto label_28e314;
        }
    }
    ctx->pc = 0x28E308u;
label_28e308:
    // 0x28e308: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28e30c:
    // 0x28e30c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28e310:
    // 0x28e310: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x28e310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_28e314:
    // 0x28e314: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e318:
    // 0x28e318: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e31c:
    // 0x28e31c: 0x1614fff6  bne         $s0, $s4, . + 4 + (-0xA << 2)
label_28e320:
    if (ctx->pc == 0x28E320u) {
        ctx->pc = 0x28E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E31Cu;
        // 0x28e320: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E324u;
        goto label_28e324;
    }
    ctx->pc = 0x28E31Cu;
    {
        const bool branch_taken_0x28e31c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x28E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E31Cu;
        // 0x28e320: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e31c) {
            ctx->pc = 0x28E2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e2f8;
        }
    }
    ctx->pc = 0x28E324u;
label_28e324:
    // 0x28e324: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x28e324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_28e328:
    // 0x28e328: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_28e32c:
    // 0x28e32c: 0x24a30fc8  addiu       $v1, $a1, 0xFC8
    ctx->pc = 0x28e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_28e330:
    // 0x28e330: 0x244663b0  addiu       $a2, $v0, 0x63B0
    ctx->pc = 0x28e330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
label_28e334:
    // 0x28e334: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x28e334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_28e338:
    // 0x28e338: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e33c:
    // 0x28e33c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x28e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_28e340:
    // 0x28e340: 0x40f809  jalr        $v0
label_28e344:
    if (ctx->pc == 0x28E344u) {
        ctx->pc = 0x28E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E340u;
        // 0x28e344: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E348u;
        goto label_28e348;
    }
    ctx->pc = 0x28E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E348u);
        ctx->pc = 0x28E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E340u;
        // 0x28e344: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E340u, 0x28E348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E348u;
label_28e348:
    // 0x28e348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e34c:
    // 0x28e34c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_28e350:
    if (ctx->pc == 0x28E350u) {
        ctx->pc = 0x28E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E34Cu;
        // 0x28e350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E354u;
        goto label_28e354;
    }
    ctx->pc = 0x28E34Cu;
    {
        const bool branch_taken_0x28e34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E34Cu;
        // 0x28e350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e34c) {
            ctx->pc = 0x28E35Cu;
            goto label_28e35c;
        }
    }
    ctx->pc = 0x28E354u;
label_28e354:
    // 0x28e354: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28e354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_28e358:
    // 0x28e358: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x28e358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_28e35c:
    // 0x28e35c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x28e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_28e360:
    // 0x28e360: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_28e364:
    if (ctx->pc == 0x28E364u) {
        ctx->pc = 0x28E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E360u;
        // 0x28e364: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E368u;
        goto label_28e368;
    }
    ctx->pc = 0x28E360u;
    {
        const bool branch_taken_0x28e360 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E360u;
        // 0x28e364: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e360) {
            ctx->pc = 0x28E370u;
            goto label_28e370;
        }
    }
    ctx->pc = 0x28E368u;
label_28e368:
    // 0x28e368: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e36c:
    if (ctx->pc == 0x28E36Cu) {
        ctx->pc = 0x28E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E368u;
        // 0x28e36c: 0xac840000  sw          $a0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E370u;
        goto label_28e370;
    }
    ctx->pc = 0x28E368u;
    {
        const bool branch_taken_0x28e368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E368u;
        // 0x28e36c: 0xac840000  sw          $a0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e368) {
            ctx->pc = 0x28E37Cu;
            goto label_28e37c;
        }
    }
    ctx->pc = 0x28E370u;
label_28e370:
    // 0x28e370: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28e374:
    // 0x28e374: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28e374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28e378:
    // 0x28e378: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x28e378u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_28e37c:
    // 0x28e37c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28e380:
    // 0x28e380: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28e380u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28e384:
    // 0x28e384: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_28e388:
    // 0x28e388: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x28e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_28e38c:
    // 0x28e38c: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x28e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_28e390:
    // 0x28e390: 0xacb7000c  sw          $s7, 0xC($a1)
    ctx->pc = 0x28e390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 23));
label_28e394:
    // 0x28e394: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x28e394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_28e398:
    // 0x28e398: 0xae7e000c  sw          $fp, 0xC($s3)
    ctx->pc = 0x28e398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 30));
label_28e39c:
    // 0x28e39c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x28e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_28e3a0:
    // 0x28e3a0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x28e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_28e3a4:
    // 0x28e3a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28e3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e3a8:
    // 0x28e3a8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28e3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28e3ac:
    // 0x28e3ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x28e3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e3b0:
    // 0x28e3b0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28e3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28e3b4:
    // 0x28e3b4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x28e3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e3b8:
    // 0x28e3b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28e3b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e3bc:
    // 0x28e3bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e3bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e3c0:
    // 0x28e3c0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x28e3c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e3c4:
    // 0x28e3c4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x28e3c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e3c8:
    // 0x28e3c8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x28e3c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e3cc:
    // 0x28e3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28e3d0:
    // 0x28e3d0: 0x3e00008  jr          $ra
label_28e3d4:
    if (ctx->pc == 0x28E3D4u) {
        ctx->pc = 0x28E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3D0u;
        // 0x28e3d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E3D8u;
        goto label_fallthrough_0x28e3d0;
    }
    ctx->pc = 0x28E3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3D0u;
        // 0x28e3d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e3d0:
    ctx->pc = 0x28E3D8u;
}
