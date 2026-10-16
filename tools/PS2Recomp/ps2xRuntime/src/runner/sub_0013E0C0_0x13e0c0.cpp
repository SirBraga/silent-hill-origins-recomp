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

// Function: sub_0013E0C0
// Address: 0x13e0c0 - 0x13e288
void sub_0013E0C0_0x13e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E0C0_0x13e0c0");
#endif

    switch (ctx->pc) {
        case 0x13e0c0u: goto label_13e0c0;
        case 0x13e0c4u: goto label_13e0c4;
        case 0x13e0c8u: goto label_13e0c8;
        case 0x13e0ccu: goto label_13e0cc;
        case 0x13e0d0u: goto label_13e0d0;
        case 0x13e0d4u: goto label_13e0d4;
        case 0x13e0d8u: goto label_13e0d8;
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e0e0u: goto label_13e0e0;
        case 0x13e0e4u: goto label_13e0e4;
        case 0x13e0e8u: goto label_13e0e8;
        case 0x13e0ecu: goto label_13e0ec;
        case 0x13e0f0u: goto label_13e0f0;
        case 0x13e0f4u: goto label_13e0f4;
        case 0x13e0f8u: goto label_13e0f8;
        case 0x13e0fcu: goto label_13e0fc;
        case 0x13e100u: goto label_13e100;
        case 0x13e104u: goto label_13e104;
        case 0x13e108u: goto label_13e108;
        case 0x13e10cu: goto label_13e10c;
        case 0x13e110u: goto label_13e110;
        case 0x13e114u: goto label_13e114;
        case 0x13e118u: goto label_13e118;
        case 0x13e11cu: goto label_13e11c;
        case 0x13e120u: goto label_13e120;
        case 0x13e124u: goto label_13e124;
        case 0x13e128u: goto label_13e128;
        case 0x13e12cu: goto label_13e12c;
        case 0x13e130u: goto label_13e130;
        case 0x13e134u: goto label_13e134;
        case 0x13e138u: goto label_13e138;
        case 0x13e13cu: goto label_13e13c;
        case 0x13e140u: goto label_13e140;
        case 0x13e144u: goto label_13e144;
        case 0x13e148u: goto label_13e148;
        case 0x13e14cu: goto label_13e14c;
        case 0x13e150u: goto label_13e150;
        case 0x13e154u: goto label_13e154;
        case 0x13e158u: goto label_13e158;
        case 0x13e15cu: goto label_13e15c;
        case 0x13e160u: goto label_13e160;
        case 0x13e164u: goto label_13e164;
        case 0x13e168u: goto label_13e168;
        case 0x13e16cu: goto label_13e16c;
        case 0x13e170u: goto label_13e170;
        case 0x13e174u: goto label_13e174;
        case 0x13e178u: goto label_13e178;
        case 0x13e17cu: goto label_13e17c;
        case 0x13e180u: goto label_13e180;
        case 0x13e184u: goto label_13e184;
        case 0x13e188u: goto label_13e188;
        case 0x13e18cu: goto label_13e18c;
        case 0x13e190u: goto label_13e190;
        case 0x13e194u: goto label_13e194;
        case 0x13e198u: goto label_13e198;
        case 0x13e19cu: goto label_13e19c;
        case 0x13e1a0u: goto label_13e1a0;
        case 0x13e1a4u: goto label_13e1a4;
        case 0x13e1a8u: goto label_13e1a8;
        case 0x13e1acu: goto label_13e1ac;
        case 0x13e1b0u: goto label_13e1b0;
        case 0x13e1b4u: goto label_13e1b4;
        case 0x13e1b8u: goto label_13e1b8;
        case 0x13e1bcu: goto label_13e1bc;
        case 0x13e1c0u: goto label_13e1c0;
        case 0x13e1c4u: goto label_13e1c4;
        case 0x13e1c8u: goto label_13e1c8;
        case 0x13e1ccu: goto label_13e1cc;
        case 0x13e1d0u: goto label_13e1d0;
        case 0x13e1d4u: goto label_13e1d4;
        case 0x13e1d8u: goto label_13e1d8;
        case 0x13e1dcu: goto label_13e1dc;
        case 0x13e1e0u: goto label_13e1e0;
        case 0x13e1e4u: goto label_13e1e4;
        case 0x13e1e8u: goto label_13e1e8;
        case 0x13e1ecu: goto label_13e1ec;
        case 0x13e1f0u: goto label_13e1f0;
        case 0x13e1f4u: goto label_13e1f4;
        case 0x13e1f8u: goto label_13e1f8;
        case 0x13e1fcu: goto label_13e1fc;
        case 0x13e200u: goto label_13e200;
        case 0x13e204u: goto label_13e204;
        case 0x13e208u: goto label_13e208;
        case 0x13e20cu: goto label_13e20c;
        case 0x13e210u: goto label_13e210;
        case 0x13e214u: goto label_13e214;
        case 0x13e218u: goto label_13e218;
        case 0x13e21cu: goto label_13e21c;
        case 0x13e220u: goto label_13e220;
        case 0x13e224u: goto label_13e224;
        case 0x13e228u: goto label_13e228;
        case 0x13e22cu: goto label_13e22c;
        case 0x13e230u: goto label_13e230;
        case 0x13e234u: goto label_13e234;
        case 0x13e238u: goto label_13e238;
        case 0x13e23cu: goto label_13e23c;
        case 0x13e240u: goto label_13e240;
        case 0x13e244u: goto label_13e244;
        case 0x13e248u: goto label_13e248;
        case 0x13e24cu: goto label_13e24c;
        case 0x13e250u: goto label_13e250;
        case 0x13e254u: goto label_13e254;
        case 0x13e258u: goto label_13e258;
        case 0x13e25cu: goto label_13e25c;
        case 0x13e260u: goto label_13e260;
        case 0x13e264u: goto label_13e264;
        case 0x13e268u: goto label_13e268;
        case 0x13e26cu: goto label_13e26c;
        case 0x13e270u: goto label_13e270;
        case 0x13e274u: goto label_13e274;
        case 0x13e278u: goto label_13e278;
        case 0x13e27cu: goto label_13e27c;
        case 0x13e280u: goto label_13e280;
        case 0x13e284u: goto label_13e284;
        default: break;
    }

    ctx->pc = 0x13e0c0u;

label_13e0c0:
    // 0x13e0c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_13e0c4:
    // 0x13e0c4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x13e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_13e0c8:
    // 0x13e0c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x13e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_13e0cc:
    // 0x13e0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e0d0:
    // 0x13e0d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x13e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_13e0d4:
    // 0x13e0d4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x13e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_13e0d8:
    // 0x13e0d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13e0dc:
    // 0x13e0dc: 0xc04ed0e  jal         func_13B438
label_13e0e0:
    if (ctx->pc == 0x13E0E0u) {
        ctx->pc = 0x13E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0DCu;
        // 0x13e0e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0E4u;
        goto label_13e0e4;
    }
    ctx->pc = 0x13E0DCu;
    SET_GPR_U32(ctx, 31, 0x13E0E4u);
    ctx->pc = 0x13E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0DCu;
    // 0x13e0e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x13E0DCu, 0x13E0E4u)) {
        return;
    }
    ctx->pc = 0x13E0E4u;
label_13e0e4:
    // 0x13e0e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13e0e8:
    // 0x13e0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e0ec:
    // 0x13e0ec: 0x8c4647f0  lw          $a2, 0x47F0($v0)
    ctx->pc = 0x13e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18416)));
label_13e0f0:
    // 0x13e0f0: 0xc07f1c0  jal         func_1FC700
label_13e0f4:
    if (ctx->pc == 0x13E0F4u) {
        ctx->pc = 0x13E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0F0u;
        // 0x13e0f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0F8u;
        goto label_13e0f8;
    }
    ctx->pc = 0x13E0F0u;
    SET_GPR_U32(ctx, 31, 0x13E0F8u);
    ctx->pc = 0x13E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0F0u;
    // 0x13e0f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13E0F0u, 0x13E0F8u)) {
        return;
    }
    ctx->pc = 0x13E0F8u;
label_13e0f8:
    // 0x13e0f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e0fc:
    // 0x13e0fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e100:
    // 0x13e100: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_13e104:
    if (ctx->pc == 0x13E104u) {
        ctx->pc = 0x13E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E100u;
        // 0x13e104: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E108u;
        goto label_13e108;
    }
    ctx->pc = 0x13E100u;
    {
        const bool branch_taken_0x13e100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E100u;
        // 0x13e104: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e100) {
            ctx->pc = 0x13E170u;
            goto label_13e170;
        }
    }
    ctx->pc = 0x13E108u;
label_13e108:
    // 0x13e108: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13e108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e10c:
    // 0x13e10c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e110:
    // 0x13e110: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_13e114:
    // 0x13e114: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_13e118:
    if (ctx->pc == 0x13E118u) {
        ctx->pc = 0x13E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E114u;
        // 0x13e118: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E11Cu;
        goto label_13e11c;
    }
    ctx->pc = 0x13E114u;
    {
        const bool branch_taken_0x13e114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e114) {
            ctx->pc = 0x13E118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E114u;
            // 0x13e118: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E12Cu;
            goto label_13e12c;
        }
    }
    ctx->pc = 0x13E11Cu;
label_13e11c:
    // 0x13e11c: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
label_13e120:
    if (ctx->pc == 0x13E120u) {
        ctx->pc = 0x13E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E11Cu;
        // 0x13e120: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E124u;
        goto label_13e124;
    }
    ctx->pc = 0x13E11Cu;
    {
        const bool branch_taken_0x13e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x13E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E11Cu;
        // 0x13e120: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e11c) {
            ctx->pc = 0x13E134u;
            goto label_13e134;
        }
    }
    ctx->pc = 0x13E124u;
label_13e124:
    // 0x13e124: 0x10000009  b           . + 4 + (0x9 << 2)
label_13e128:
    if (ctx->pc == 0x13E128u) {
        ctx->pc = 0x13E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E124u;
        // 0x13e128: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E12Cu;
        goto label_13e12c;
    }
    ctx->pc = 0x13E124u;
    {
        const bool branch_taken_0x13e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E124u;
        // 0x13e128: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e124) {
            ctx->pc = 0x13E14Cu;
            goto label_13e14c;
        }
    }
    ctx->pc = 0x13E12Cu;
label_13e12c:
    // 0x13e12c: 0x10000005  b           . + 4 + (0x5 << 2)
label_13e130:
    if (ctx->pc == 0x13E130u) {
        ctx->pc = 0x13E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E12Cu;
        // 0x13e130: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E134u;
        goto label_13e134;
    }
    ctx->pc = 0x13E12Cu;
    {
        const bool branch_taken_0x13e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E12Cu;
        // 0x13e130: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e12c) {
            ctx->pc = 0x13E144u;
            goto label_13e144;
        }
    }
    ctx->pc = 0x13E134u;
label_13e134:
    // 0x13e134: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_13e138:
    // 0x13e138: 0x260401cc  addiu       $a0, $s0, 0x1CC
    ctx->pc = 0x13e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 460));
label_13e13c:
    // 0x13e13c: 0xc07fce0  jal         func_1FF380
label_13e140:
    if (ctx->pc == 0x13E140u) {
        ctx->pc = 0x13E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E13Cu;
        // 0x13e140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E144u;
        goto label_13e144;
    }
    ctx->pc = 0x13E13Cu;
    SET_GPR_U32(ctx, 31, 0x13E144u);
    ctx->pc = 0x13E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E13Cu;
    // 0x13e140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x13E13Cu, 0x13E144u)) {
        return;
    }
    ctx->pc = 0x13E144u;
label_13e144:
    // 0x13e144: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13e144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e148:
    // 0x13e148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e14c:
    // 0x13e14c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e150:
    // 0x13e150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e154:
    // 0x13e154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13e158:
    // 0x13e158: 0xc07f0c8  jal         func_1FC320
label_13e15c:
    if (ctx->pc == 0x13E15Cu) {
        ctx->pc = 0x13E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E158u;
        // 0x13e15c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E160u;
        goto label_13e160;
    }
    ctx->pc = 0x13E158u;
    SET_GPR_U32(ctx, 31, 0x13E160u);
    ctx->pc = 0x13E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E158u;
    // 0x13e15c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13E158u, 0x13E160u)) {
        return;
    }
    ctx->pc = 0x13E160u;
label_13e160:
    // 0x13e160: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e164:
    // 0x13e164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e168:
    // 0x13e168: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_13e16c:
    if (ctx->pc == 0x13E16Cu) {
        ctx->pc = 0x13E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E168u;
        // 0x13e16c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E170u;
        goto label_13e170;
    }
    ctx->pc = 0x13E168u;
    {
        const bool branch_taken_0x13e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E168u;
        // 0x13e16c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e168) {
            ctx->pc = 0x13E110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e110;
        }
    }
    ctx->pc = 0x13E170u;
label_13e170:
    // 0x13e170: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_13e174:
    // 0x13e174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e178:
    // 0x13e178: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x13e178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_13e17c:
    // 0x13e17c: 0xc07f1c0  jal         func_1FC700
label_13e180:
    if (ctx->pc == 0x13E180u) {
        ctx->pc = 0x13E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E17Cu;
        // 0x13e180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E184u;
        goto label_13e184;
    }
    ctx->pc = 0x13E17Cu;
    SET_GPR_U32(ctx, 31, 0x13E184u);
    ctx->pc = 0x13E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E17Cu;
    // 0x13e180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13E17Cu, 0x13E184u)) {
        return;
    }
    ctx->pc = 0x13E184u;
label_13e184:
    // 0x13e184: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e188:
    // 0x13e188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e18c:
    // 0x13e18c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_13e190:
    if (ctx->pc == 0x13E190u) {
        ctx->pc = 0x13E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E18Cu;
        // 0x13e190: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E194u;
        goto label_13e194;
    }
    ctx->pc = 0x13E18Cu;
    {
        const bool branch_taken_0x13e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E18Cu;
        // 0x13e190: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e18c) {
            ctx->pc = 0x13E268u;
            goto label_13e268;
        }
    }
    ctx->pc = 0x13E194u;
label_13e194:
    // 0x13e194: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e198:
    // 0x13e198: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13e19c:
    // 0x13e19c: 0x54510029  bnel        $v0, $s1, . + 4 + (0x29 << 2)
label_13e1a0:
    if (ctx->pc == 0x13E1A0u) {
        ctx->pc = 0x13E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E19Cu;
        // 0x13e1a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E1A4u;
        goto label_13e1a4;
    }
    ctx->pc = 0x13E19Cu;
    {
        const bool branch_taken_0x13e19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x13e19c) {
            ctx->pc = 0x13E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E19Cu;
            // 0x13e1a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E244u;
            goto label_13e244;
        }
    }
    ctx->pc = 0x13E1A4u;
label_13e1a4:
    // 0x13e1a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13e1a8:
    // 0x13e1a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e1ac:
    // 0x13e1ac: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x13e1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_13e1b0:
    // 0x13e1b0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x13e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13e1b4:
    // 0x13e1b4: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x13e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e1b8:
    // 0x13e1b8: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x13e1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e1bc:
    // 0x13e1bc: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x13e1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_13e1c0:
    // 0x13e1c0: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x13e1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_13e1c4:
    // 0x13e1c4: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x13e1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_13e1c8:
    // 0x13e1c8: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x13e1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_13e1cc:
    // 0x13e1cc: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x13e1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1d0:
    // 0x13e1d0: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x13e1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1d4:
    // 0x13e1d4: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x13e1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1d8:
    // 0x13e1d8: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x13e1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1dc:
    // 0x13e1dc: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x13e1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1e0:
    // 0x13e1e0: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x13e1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1e4:
    // 0x13e1e4: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x13e1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1e8:
    // 0x13e1e8: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x13e1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e1ec:
    // 0x13e1ec: 0x6864002f  ldl         $a0, 0x2F($v1)
    ctx->pc = 0x13e1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_13e1f0:
    // 0x13e1f0: 0x6c640028  ldr         $a0, 0x28($v1)
    ctx->pc = 0x13e1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13e1f4:
    // 0x13e1f4: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x13e1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13e1f8:
    // 0x13e1f8: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x13e1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13e1fc:
    // 0x13e1fc: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x13e1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_13e200:
    // 0x13e200: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x13e200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_13e204:
    // 0x13e204: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x13e204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_13e208:
    // 0x13e208: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x13e208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_13e20c:
    // 0x13e20c: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x13e20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e210:
    // 0x13e210: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x13e210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e214:
    // 0x13e214: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x13e214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e218:
    // 0x13e218: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x13e218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e21c:
    // 0x13e21c: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x13e21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e220:
    // 0x13e220: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x13e220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e224:
    // 0x13e224: 0xb3a8005f  sdl         $t0, 0x5F($sp)
    ctx->pc = 0x13e224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e228:
    // 0x13e228: 0xb7a80058  sdr         $t0, 0x58($sp)
    ctx->pc = 0x13e228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13e22c:
    // 0x13e22c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x13e22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_13e230:
    // 0x13e230: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x13e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_13e234:
    // 0x13e234: 0x60f809  jalr        $v1
label_13e238:
    if (ctx->pc == 0x13E238u) {
        ctx->pc = 0x13E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E234u;
        // 0x13e238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E23Cu;
        goto label_13e23c;
    }
    ctx->pc = 0x13E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13E23Cu);
        ctx->pc = 0x13E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E234u;
        // 0x13e238: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E234u, 0x13E23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E23Cu;
label_13e23c:
    // 0x13e23c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e240:
    // 0x13e240: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13e244:
    // 0x13e244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e248:
    // 0x13e248: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e24c:
    // 0x13e24c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13e250:
    // 0x13e250: 0xc07f0c8  jal         func_1FC320
label_13e254:
    if (ctx->pc == 0x13E254u) {
        ctx->pc = 0x13E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E250u;
        // 0x13e254: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E258u;
        goto label_13e258;
    }
    ctx->pc = 0x13E250u;
    SET_GPR_U32(ctx, 31, 0x13E258u);
    ctx->pc = 0x13E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E250u;
    // 0x13e254: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13E250u, 0x13E258u)) {
        return;
    }
    ctx->pc = 0x13E258u;
label_13e258:
    // 0x13e258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13e25c:
    // 0x13e25c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e260:
    // 0x13e260: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_13e264:
    if (ctx->pc == 0x13E264u) {
        ctx->pc = 0x13E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E260u;
        // 0x13e264: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E268u;
        goto label_13e268;
    }
    ctx->pc = 0x13E260u;
    {
        const bool branch_taken_0x13e260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E260u;
        // 0x13e264: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e260) {
            ctx->pc = 0x13E198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e198;
        }
    }
    ctx->pc = 0x13E268u;
label_13e268:
    // 0x13e268: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x13e268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13e26c:
    // 0x13e26c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x13e26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13e270:
    // 0x13e270: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x13e270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13e274:
    // 0x13e274: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x13e274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13e278:
    // 0x13e278: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13e27c:
    // 0x13e27c: 0x3e00008  jr          $ra
label_13e280:
    if (ctx->pc == 0x13E280u) {
        ctx->pc = 0x13E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E27Cu;
        // 0x13e280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E284u;
        goto label_13e284;
    }
    ctx->pc = 0x13E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E27Cu;
        // 0x13e280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E284u;
label_13e284:
    // 0x13e284: 0x0  nop
    ctx->pc = 0x13e284u;
    // NOP
    ctx->pc = 0x13e288u;
}
