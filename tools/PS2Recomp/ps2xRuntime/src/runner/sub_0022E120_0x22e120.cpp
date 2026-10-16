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

// Function: sub_0022E120
// Address: 0x22e120 - 0x22e3e0
void sub_0022E120_0x22e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E120_0x22e120");
#endif

    switch (ctx->pc) {
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        default: break;
    }

    ctx->pc = 0x22e120u;

label_22e120:
    // 0x22e120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e124:
    // 0x22e124: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22e128:
    // 0x22e128: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22e12c:
    // 0x22e12c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22e130:
    // 0x22e130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e134:
    // 0x22e134: 0xc08b73a  jal         func_22DCE8
label_22e138:
    if (ctx->pc == 0x22E138u) {
        ctx->pc = 0x22E13Cu;
        goto label_22e13c;
    }
    ctx->pc = 0x22E134u;
    SET_GPR_U32(ctx, 31, 0x22E13Cu);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22E134u, 0x22E13Cu)) {
        return;
    }
    ctx->pc = 0x22E13Cu;
label_22e13c:
    // 0x22e13c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e140:
    // 0x22e140: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16056)));
label_22e144:
    // 0x22e144: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_22e148:
    if (ctx->pc == 0x22E148u) {
        ctx->pc = 0x22E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E144u;
        // 0x22e148: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E14Cu;
        goto label_22e14c;
    }
    ctx->pc = 0x22E144u;
    {
        const bool branch_taken_0x22e144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E144u;
        // 0x22e148: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e144) {
            ctx->pc = 0x22E238u;
            goto label_22e238;
        }
    }
    ctx->pc = 0x22E14Cu;
label_22e14c:
    // 0x22e14c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_22e150:
    // 0x22e150: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_22e154:
    // 0x22e154: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22e154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_22e158:
    // 0x22e158: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_22e15c:
    if (ctx->pc == 0x22E15Cu) {
        ctx->pc = 0x22E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E158u;
        // 0x22e15c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E160u;
        goto label_22e160;
    }
    ctx->pc = 0x22E158u;
    {
        const bool branch_taken_0x22e158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E158u;
        // 0x22e15c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e158) {
            ctx->pc = 0x22E190u;
            goto label_22e190;
        }
    }
    ctx->pc = 0x22E160u;
label_22e160:
    // 0x22e160: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22e164:
    // 0x22e164: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
label_22e168:
    // 0x22e168: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e168u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
label_22e16c:
    // 0x22e16c: 0xf  sync
    ctx->pc = 0x22e16cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22e170:
    // 0x22e170: 0x40f  sync.p
    ctx->pc = 0x22e170u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22e174:
    // 0x22e174: 0x0  nop
    ctx->pc = 0x22e174u;
    // NOP
label_22e178:
    // 0x22e178: 0x0  nop
    ctx->pc = 0x22e178u;
    // NOP
label_22e17c:
    // 0x22e17c: 0x0  nop
    ctx->pc = 0x22e17cu;
    // NOP
label_22e180:
    // 0x22e180: 0x0  nop
    ctx->pc = 0x22e180u;
    // NOP
label_22e184:
    // 0x22e184: 0x0  nop
    ctx->pc = 0x22e184u;
    // NOP
label_22e188:
    // 0x22e188: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
label_22e18c:
    if (ctx->pc == 0x22E18Cu) {
        ctx->pc = 0x22E190u;
        goto label_22e190;
    }
    ctx->pc = 0x22E188u;
    {
        const bool branch_taken_0x22e188 = (false);
        if (branch_taken_0x22e188) {
            ctx->pc = 0x22E174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e174;
        }
    }
    ctx->pc = 0x22E190u;
label_22e190:
    // 0x22e190: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e194:
    // 0x22e194: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16052)));
label_22e198:
    // 0x22e198: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_22e19c:
    if (ctx->pc == 0x22E19Cu) {
        ctx->pc = 0x22E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E198u;
        // 0x22e19c: 0x8f848e4c  lw          $a0, -0x71B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1A0u;
        goto label_22e1a0;
    }
    ctx->pc = 0x22E198u;
    {
        const bool branch_taken_0x22e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E198u;
        // 0x22e19c: 0x8f848e4c  lw          $a0, -0x71B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e198) {
            ctx->pc = 0x22E1F0u;
            goto label_22e1f0;
        }
    }
    ctx->pc = 0x22E1A0u;
label_22e1a0:
    // 0x22e1a0: 0x24021121  addiu       $v0, $zero, 0x1121
    ctx->pc = 0x22e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
label_22e1a4:
    // 0x22e1a4: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x22e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_22e1a8:
    // 0x22e1a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22e1ac:
    // 0x22e1ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e1b0:
    // 0x22e1b0: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16060)));
label_22e1b4:
    // 0x22e1b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e1b8:
    // 0x22e1b8: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16048)));
label_22e1bc:
    // 0x22e1bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_22e1c0:
    // 0x22e1c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_22e1c4:
    // 0x22e1c4: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16060)));
label_22e1c8:
    // 0x22e1c8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_22e1cc:
    // 0x22e1cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e1d0:
    // 0x22e1d0: 0xac223ebc  sw          $v0, 0x3EBC($at)
    ctx->pc = 0x22e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16060), GPR_U32(ctx, 2));
label_22e1d4:
    // 0x22e1d4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x22e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_22e1d8:
    // 0x22e1d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e1dc:
    // 0x22e1dc: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16060)));
label_22e1e0:
    // 0x22e1e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e1e4:
    // 0x22e1e4: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16052)));
label_22e1e8:
    // 0x22e1e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_22e1ec:
    if (ctx->pc == 0x22E1ECu) {
        ctx->pc = 0x22E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E8u;
        // 0x22e1ec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1F0u;
        goto label_22e1f0;
    }
    ctx->pc = 0x22E1E8u;
    {
        const bool branch_taken_0x22e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1E8u;
        // 0x22e1ec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1e8) {
            ctx->pc = 0x22E218u;
            goto label_22e218;
        }
    }
    ctx->pc = 0x22E1F0u;
label_22e1f0:
    // 0x22e1f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e1f4:
    // 0x22e1f4: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16056)));
label_22e1f8:
    // 0x22e1f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e1fc:
    // 0x22e1fc: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16060)));
label_22e200:
    // 0x22e200: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22e204:
    // 0x22e204: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_22e208:
    // 0x22e208: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16060)));
label_22e20c:
    // 0x22e20c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e210:
    // 0x22e210: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16048)));
label_22e214:
    // 0x22e214: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22e214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22e218:
    // 0x22e218: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e21c:
    // 0x22e21c: 0xac203eb0  sw          $zero, 0x3EB0($at)
    ctx->pc = 0x22e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16048), GPR_U32(ctx, 0));
label_22e220:
    // 0x22e220: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e224:
    // 0x22e224: 0xac203eb4  sw          $zero, 0x3EB4($at)
    ctx->pc = 0x22e224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16052), GPR_U32(ctx, 0));
label_22e228:
    // 0x22e228: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e22c:
    // 0x22e22c: 0xac203eb8  sw          $zero, 0x3EB8($at)
    ctx->pc = 0x22e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16056), GPR_U32(ctx, 0));
label_22e230:
    // 0x22e230: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e234:
    // 0x22e234: 0xac203ebc  sw          $zero, 0x3EBC($at)
    ctx->pc = 0x22e234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16060), GPR_U32(ctx, 0));
label_22e238:
    // 0x22e238: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e23c:
    // 0x22e23c: 0x8c633ed8  lw          $v1, 0x3ED8($v1)
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16088)));
label_22e240:
    // 0x22e240: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
label_22e244:
    // 0x22e244: 0x26313ec0  addiu       $s1, $s1, 0x3EC0
    ctx->pc = 0x22e244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16064));
label_22e248:
    // 0x22e248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e24c:
    // 0x22e24c: 0x8c423edc  lw          $v0, 0x3EDC($v0)
    ctx->pc = 0x22e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16092)));
label_22e250:
    // 0x22e250: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x22e250u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22e254:
    // 0x22e254: 0x0  nop
    ctx->pc = 0x22e254u;
    // NOP
label_22e258:
    // 0x22e258: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e25c:
    // 0x22e25c: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16128)));
label_22e260:
    // 0x22e260: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e264:
    // 0x22e264: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e268:
    // 0x22e268: 0x8c423f04  lw          $v0, 0x3F04($v0)
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16132)));
label_22e26c:
    // 0x22e26c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_22e270:
    if (ctx->pc == 0x22E270u) {
        ctx->pc = 0x22E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E26Cu;
        // 0x22e270: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E274u;
        goto label_22e274;
    }
    ctx->pc = 0x22E26Cu;
    {
        const bool branch_taken_0x22e26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e26c) {
            ctx->pc = 0x22E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E26Cu;
            // 0x22e270: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E288u;
            goto label_22e288;
        }
    }
    ctx->pc = 0x22E274u;
label_22e274:
    // 0x22e274: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e278:
    // 0x22e278: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22e278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16120)));
label_22e27c:
    // 0x22e27c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22e280:
    if (ctx->pc == 0x22E280u) {
        ctx->pc = 0x22E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E27Cu;
        // 0x22e280: 0x8f828400  lw          $v0, -0x7C00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E284u;
        goto label_22e284;
    }
    ctx->pc = 0x22E27Cu;
    {
        const bool branch_taken_0x22e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E27Cu;
        // 0x22e280: 0x8f828400  lw          $v0, -0x7C00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e27c) {
            ctx->pc = 0x22E28Cu;
            goto label_22e28c;
        }
    }
    ctx->pc = 0x22E284u;
label_22e284:
    // 0x22e284: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22e284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e288:
    // 0x22e288: 0x8f828400  lw          $v0, -0x7C00($gp)
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935552)));
label_22e28c:
    // 0x22e28c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22e290:
    if (ctx->pc == 0x22E290u) {
        ctx->pc = 0x22E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E28Cu;
        // 0x22e290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E294u;
        goto label_22e294;
    }
    ctx->pc = 0x22E28Cu;
    {
        const bool branch_taken_0x22e28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E28Cu;
        // 0x22e290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e28c) {
            ctx->pc = 0x22E29Cu;
            goto label_22e29c;
        }
    }
    ctx->pc = 0x22E294u;
label_22e294:
    // 0x22e294: 0x40f809  jalr        $v0
label_22e298:
    if (ctx->pc == 0x22E298u) {
        ctx->pc = 0x22E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E294u;
        // 0x22e298: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E29Cu;
        goto label_22e29c;
    }
    ctx->pc = 0x22E294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E29Cu);
        ctx->pc = 0x22E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E294u;
        // 0x22e298: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E294u, 0x22E29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E29Cu;
label_22e29c:
    // 0x22e29c: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
label_22e2a0:
    if (ctx->pc == 0x22E2A0u) {
        ctx->pc = 0x22E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E29Cu;
        // 0x22e2a0: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2A4u;
        goto label_22e2a4;
    }
    ctx->pc = 0x22E29Cu;
    {
        const bool branch_taken_0x22e29c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E29Cu;
        // 0x22e2a0: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e29c) {
            ctx->pc = 0x22E258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e258;
        }
    }
    ctx->pc = 0x22E2A4u;
label_22e2a4:
    // 0x22e2a4: 0x42000039  di
    ctx->pc = 0x22e2a4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_22e2a8:
    // 0x22e2a8: 0x40f  sync.p
    ctx->pc = 0x22e2a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22e2ac:
    // 0x22e2ac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x22e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_22e2b0:
    // 0x22e2b0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22e2b4:
    // 0x22e2b4: 0x0  nop
    ctx->pc = 0x22e2b4u;
    // NOP
label_22e2b8:
    // 0x22e2b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22e2bc:
    if (ctx->pc == 0x22E2BCu) {
        ctx->pc = 0x22E2C0u;
        goto label_22e2c0;
    }
    ctx->pc = 0x22E2B8u;
    {
        const bool branch_taken_0x22e2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e2b8) {
            ctx->pc = 0x22E2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e2a4;
        }
    }
    ctx->pc = 0x22E2C0u;
label_22e2c0:
    // 0x22e2c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22e2c4:
    // 0x22e2c4: 0x90633ecc  lbu         $v1, 0x3ECC($v1)
    ctx->pc = 0x22e2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16076)));
label_22e2c8:
    // 0x22e2c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_22e2cc:
    // 0x22e2cc: 0x8c843ee4  lw          $a0, 0x3EE4($a0)
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16100)));
label_22e2d0:
    // 0x22e2d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e2d4:
    // 0x22e2d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e2d8:
    // 0x22e2d8: 0xac243f04  sw          $a0, 0x3F04($at)
    ctx->pc = 0x22e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16132), GPR_U32(ctx, 4));
label_22e2dc:
    // 0x22e2dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22e2e0:
    // 0x22e2e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e2e4:
    // 0x22e2e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e2e8:
    // 0x22e2e8: 0xac223f00  sw          $v0, 0x3F00($at)
    ctx->pc = 0x22e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16128), GPR_U32(ctx, 2));
label_22e2ec:
    // 0x22e2ec: 0x42000038  ei
    ctx->pc = 0x22e2ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_22e2f0:
    // 0x22e2f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e2f4:
    // 0x22e2f4: 0x90423ecc  lbu         $v0, 0x3ECC($v0)
    ctx->pc = 0x22e2f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16076)));
label_22e2f8:
    // 0x22e2f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_22e2fc:
    // 0x22e2fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e300:
    // 0x22e300: 0xa0223ecc  sb          $v0, 0x3ECC($at)
    ctx->pc = 0x22e300u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16076), (uint8_t)GPR_U32(ctx, 2));
label_22e304:
    // 0x22e304: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22e308:
    // 0x22e308: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22e30c:
    // 0x22e30c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22e310:
    // 0x22e310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e314:
    // 0x22e314: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_22e318:
    // 0x22e318: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22e318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22e31c:
    // 0x22e31c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x22e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_22e320:
    // 0x22e320: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e324:
    // 0x22e324: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22e328:
    // 0x22e328: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22e32c:
    // 0x22e32c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x22e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_22e330:
    // 0x22e330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e334:
    // 0x22e334: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22e334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_22e338:
    // 0x22e338: 0x8ca53ec8  lw          $a1, 0x3EC8($a1)
    ctx->pc = 0x22e338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16072)));
label_22e33c:
    // 0x22e33c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x22e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_22e340:
    // 0x22e340: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x22e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_22e344:
    // 0x22e344: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e348:
    // 0x22e348: 0xac233edc  sw          $v1, 0x3EDC($at)
    ctx->pc = 0x22e348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16092), GPR_U32(ctx, 3));
label_22e34c:
    // 0x22e34c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x22e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_22e350:
    // 0x22e350: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e354:
    // 0x22e354: 0xac223ee0  sw          $v0, 0x3EE0($at)
    ctx->pc = 0x22e354u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16096), GPR_U32(ctx, 2));
label_22e358:
    // 0x22e358: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e35c:
    // 0x22e35c: 0xac243ed0  sw          $a0, 0x3ED0($at)
    ctx->pc = 0x22e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16080), GPR_U32(ctx, 4));
label_22e360:
    // 0x22e360: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e364:
    // 0x22e364: 0xac263ee4  sw          $a2, 0x3EE4($at)
    ctx->pc = 0x22e364u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16100), GPR_U32(ctx, 6));
label_22e368:
    // 0x22e368: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e36c:
    // 0x22e36c: 0xac243ed8  sw          $a0, 0x3ED8($at)
    ctx->pc = 0x22e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16088), GPR_U32(ctx, 4));
label_22e370:
    // 0x22e370: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e374:
    // 0x22e374: 0xac20412c  sw          $zero, 0x412C($at)
    ctx->pc = 0x22e374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 0));
label_22e378:
    // 0x22e378: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_22e37c:
    // 0x22e37c: 0xac204160  sw          $zero, 0x4160($at)
    ctx->pc = 0x22e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16736), GPR_U32(ctx, 0));
label_22e380:
    // 0x22e380: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22e384:
    // 0x22e384: 0x90423ecc  lbu         $v0, 0x3ECC($v0)
    ctx->pc = 0x22e384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16076)));
label_22e388:
    // 0x22e388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22e38c:
    // 0x22e38c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22e390:
    // 0x22e390: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e394:
    // 0x22e394: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22e398:
    // 0x22e398: 0xc0c8730  jal         func_321CC0
label_22e39c:
    if (ctx->pc == 0x22E39Cu) {
        ctx->pc = 0x22E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E398u;
        // 0x22e39c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3A0u;
        goto label_22e3a0;
    }
    ctx->pc = 0x22E398u;
    SET_GPR_U32(ctx, 31, 0x22E3A0u);
    ctx->pc = 0x22E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E398u;
    // 0x22e39c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321CC0u, 0x22E398u, 0x22E3A0u)) {
        return;
    }
    ctx->pc = 0x22E3A0u;
label_22e3a0:
    // 0x22e3a0: 0x42000039  di
    ctx->pc = 0x22e3a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_22e3a4:
    // 0x22e3a4: 0x40f  sync.p
    ctx->pc = 0x22e3a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22e3a8:
    // 0x22e3a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x22e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_22e3ac:
    // 0x22e3ac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22e3b0:
    // 0x22e3b0: 0x0  nop
    ctx->pc = 0x22e3b0u;
    // NOP
label_22e3b4:
    // 0x22e3b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22e3b8:
    if (ctx->pc == 0x22E3B8u) {
        ctx->pc = 0x22E3BCu;
        goto label_22e3bc;
    }
    ctx->pc = 0x22E3B4u;
    {
        const bool branch_taken_0x22e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e3b4) {
            ctx->pc = 0x22E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e3a0;
        }
    }
    ctx->pc = 0x22E3BCu;
label_22e3bc:
    // 0x22e3bc: 0xc08b518  jal         func_22D460
label_22e3c0:
    if (ctx->pc == 0x22E3C0u) {
        ctx->pc = 0x22E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3BCu;
        // 0x22e3c0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3C4u;
        goto label_22e3c4;
    }
    ctx->pc = 0x22E3BCu;
    SET_GPR_U32(ctx, 31, 0x22E3C4u);
    ctx->pc = 0x22E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3BCu;
    // 0x22e3c0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D460u, 0x22E3BCu, 0x22E3C4u)) {
        return;
    }
    ctx->pc = 0x22E3C4u;
label_22e3c4:
    // 0x22e3c4: 0x42000038  ei
    ctx->pc = 0x22e3c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_22e3c8:
    // 0x22e3c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e3cc:
    // 0x22e3cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e3d0:
    // 0x22e3d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e3d4:
    // 0x22e3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e3d8:
    // 0x22e3d8: 0x3e00008  jr          $ra
label_22e3dc:
    if (ctx->pc == 0x22E3DCu) {
        ctx->pc = 0x22E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3D8u;
        // 0x22e3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3E0u;
        goto label_fallthrough_0x22e3d8;
    }
    ctx->pc = 0x22E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3D8u;
        // 0x22e3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e3d8:
    ctx->pc = 0x22E3E0u;
}
