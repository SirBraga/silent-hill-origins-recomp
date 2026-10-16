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

// Function: sub_0018E088
// Address: 0x18e088 - 0x18e470
void sub_0018E088_0x18e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E088_0x18e088");
#endif

    switch (ctx->pc) {
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e0f0u: goto label_18e0f0;
        case 0x18e120u: goto label_18e120;
        case 0x18e160u: goto label_18e160;
        case 0x18e188u: goto label_18e188;
        case 0x18e198u: goto label_18e198;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e218u: goto label_18e218;
        case 0x18e228u: goto label_18e228;
        case 0x18e240u: goto label_18e240;
        case 0x18e280u: goto label_18e280;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e310u: goto label_18e310;
        case 0x18e338u: goto label_18e338;
        case 0x18e348u: goto label_18e348;
        case 0x18e360u: goto label_18e360;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e430u: goto label_18e430;
        default: break;
    }

    ctx->pc = 0x18e088u;

    // 0x18e088: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18e08c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18e08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18e090: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18e094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e098: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18e09c: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x18e09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x18e0a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18e0a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18e0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18e0a8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18e0ac: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x18e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x18e0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e0b4: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x18e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x18e0b8: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x18e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x18e0bc: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x18e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x18e0c0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x18e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x18e0c4: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x18e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x18e0c8: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x18e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x18e0cc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x18e0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e0d0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E0D0u;
    {
        const bool branch_taken_0x18e0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D0u;
        // 0x18e0d4: 0x2636005c  addiu       $s6, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d0) {
            ctx->pc = 0x18E100u;
            goto label_18e100;
        }
    }
    ctx->pc = 0x18E0D8u;
    // 0x18e0d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e0dc: 0x0  nop
    ctx->pc = 0x18e0dcu;
    // NOP
label_18e0e0:
    // 0x18e0e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E0E0u;
    {
        const bool branch_taken_0x18e0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0e0) {
            ctx->pc = 0x18E0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E0E0u;
            // 0x18e0e4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E0F4u;
            goto label_18e0f4;
        }
    }
    ctx->pc = 0x18E0E8u;
    // 0x18e0e8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E0E8u;
    SET_GPR_U32(ctx, 31, 0x18E0F0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E0E8u, 0x18E0F0u)) {
        return;
    }
    ctx->pc = 0x18E0F0u;
label_18e0f0:
    // 0x18e0f0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e0f4:
    // 0x18e0f4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E0F4u;
    {
        const bool branch_taken_0x18e0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e0f4) {
            ctx->pc = 0x18E0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E0F4u;
            // 0x18e0f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0e0;
        }
    }
    ctx->pc = 0x18E0FCu;
    // 0x18e0fc: 0x2636005c  addiu       $s6, $s1, 0x5C
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_18e100:
    // 0x18e100: 0x2633001c  addiu       $s3, $s1, 0x1C
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x18e104: 0x2634002c  addiu       $s4, $s1, 0x2C
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x18e108: 0x2635003c  addiu       $s5, $s1, 0x3C
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x18e10c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e110: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18E110u;
    {
        const bool branch_taken_0x18e110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E110u;
        // 0x18e114: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e110) {
            ctx->pc = 0x18E178u;
            goto label_18e178;
        }
    }
    ctx->pc = 0x18E118u;
    // 0x18e118: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e11c: 0x0  nop
    ctx->pc = 0x18e11cu;
    // NOP
label_18e120:
    // 0x18e120: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E120u;
    {
        const bool branch_taken_0x18e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e120) {
            ctx->pc = 0x18E124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E120u;
            // 0x18e124: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E170u;
            goto label_18e170;
        }
    }
    ctx->pc = 0x18E128u;
    // 0x18e128: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e12c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E12Cu;
    {
        const bool branch_taken_0x18e12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E12Cu;
        // 0x18e130: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e12c) {
            ctx->pc = 0x18E13Cu;
            goto label_18e13c;
        }
    }
    ctx->pc = 0x18E134u;
    // 0x18e134: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E134u;
    {
        const bool branch_taken_0x18e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E134u;
        // 0x18e138: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e134) {
            ctx->pc = 0x18E140u;
            goto label_18e140;
        }
    }
    ctx->pc = 0x18E13Cu;
label_18e13c:
    // 0x18e13c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e140:
    // 0x18e140: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e144: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E144u;
    {
        const bool branch_taken_0x18e144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E144u;
        // 0x18e148: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e144) {
            ctx->pc = 0x18E154u;
            goto label_18e154;
        }
    }
    ctx->pc = 0x18E14Cu;
    // 0x18e14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E14Cu;
    {
        const bool branch_taken_0x18e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E14Cu;
        // 0x18e150: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e14c) {
            ctx->pc = 0x18E158u;
            goto label_18e158;
        }
    }
    ctx->pc = 0x18E154u;
label_18e154:
    // 0x18e154: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e158:
    // 0x18e158: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E158u;
    SET_GPR_U32(ctx, 31, 0x18E160u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E158u, 0x18E160u)) {
        return;
    }
    ctx->pc = 0x18E160u;
label_18e160:
    // 0x18e160: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18e164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e168: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18e168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18e16c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18e170:
    // 0x18e170: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E170u;
    {
        const bool branch_taken_0x18e170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e170) {
            ctx->pc = 0x18E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E170u;
            // 0x18e174: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e120;
        }
    }
    ctx->pc = 0x18E178u;
label_18e178:
    // 0x18e178: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x18e178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18e17c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18E17Cu;
    {
        const bool branch_taken_0x18e17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e17c) {
            ctx->pc = 0x18E180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E17Cu;
            // 0x18e180: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E200u;
            goto label_18e200;
        }
    }
    ctx->pc = 0x18E184u;
    // 0x18e184: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e188:
    // 0x18e188: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E188u;
    {
        const bool branch_taken_0x18e188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e188) {
            ctx->pc = 0x18E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E188u;
            // 0x18e18c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E19Cu;
            goto label_18e19c;
        }
    }
    ctx->pc = 0x18E190u;
    // 0x18e190: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E190u;
    SET_GPR_U32(ctx, 31, 0x18E198u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E190u, 0x18E198u)) {
        return;
    }
    ctx->pc = 0x18E198u;
label_18e198:
    // 0x18e198: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e19c:
    // 0x18e19c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E19Cu;
    {
        const bool branch_taken_0x18e19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e19c) {
            ctx->pc = 0x18E1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E19Cu;
            // 0x18e1a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e188;
        }
    }
    ctx->pc = 0x18E1A4u;
    // 0x18e1a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E1A4u;
    {
        const bool branch_taken_0x18e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1A4u;
        // 0x18e1a8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1a4) {
            ctx->pc = 0x18E200u;
            goto label_18e200;
        }
    }
    ctx->pc = 0x18E1ACu;
    // 0x18e1ac: 0x0  nop
    ctx->pc = 0x18e1acu;
    // NOP
label_18e1b0:
    // 0x18e1b0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E1B0u;
    {
        const bool branch_taken_0x18e1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1b0) {
            ctx->pc = 0x18E1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E1B0u;
            // 0x18e1b4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E200u;
            goto label_18e200;
        }
    }
    ctx->pc = 0x18E1B8u;
    // 0x18e1b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e1bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E1BCu;
    {
        const bool branch_taken_0x18e1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1BCu;
        // 0x18e1c0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1bc) {
            ctx->pc = 0x18E1CCu;
            goto label_18e1cc;
        }
    }
    ctx->pc = 0x18E1C4u;
    // 0x18e1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E1C4u;
    {
        const bool branch_taken_0x18e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1C4u;
        // 0x18e1c8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1c4) {
            ctx->pc = 0x18E1D0u;
            goto label_18e1d0;
        }
    }
    ctx->pc = 0x18E1CCu;
label_18e1cc:
    // 0x18e1cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e1d0:
    // 0x18e1d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e1d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E1D4u;
    {
        const bool branch_taken_0x18e1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1D4u;
        // 0x18e1d8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1d4) {
            ctx->pc = 0x18E1E4u;
            goto label_18e1e4;
        }
    }
    ctx->pc = 0x18E1DCu;
    // 0x18e1dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E1DCu;
    {
        const bool branch_taken_0x18e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1DCu;
        // 0x18e1e0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1dc) {
            ctx->pc = 0x18E1E8u;
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E1E4u;
label_18e1e4:
    // 0x18e1e4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e1e8:
    // 0x18e1e8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E1E8u;
    SET_GPR_U32(ctx, 31, 0x18E1F0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E1E8u, 0x18E1F0u)) {
        return;
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18e1f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e1f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x18e1fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18e200:
    // 0x18e200: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E200u;
    {
        const bool branch_taken_0x18e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e200) {
            ctx->pc = 0x18E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E200u;
            // 0x18e204: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1b0;
        }
    }
    ctx->pc = 0x18E208u;
    // 0x18e208: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x18e208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18e20c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18E20Cu;
    {
        const bool branch_taken_0x18e20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e20c) {
            ctx->pc = 0x18E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E20Cu;
            // 0x18e210: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E290u;
            goto label_18e290;
        }
    }
    ctx->pc = 0x18E214u;
    // 0x18e214: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e218:
    // 0x18e218: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E218u;
    {
        const bool branch_taken_0x18e218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e218) {
            ctx->pc = 0x18E21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E218u;
            // 0x18e21c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E22Cu;
            goto label_18e22c;
        }
    }
    ctx->pc = 0x18E220u;
    // 0x18e220: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E220u;
    SET_GPR_U32(ctx, 31, 0x18E228u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E220u, 0x18E228u)) {
        return;
    }
    ctx->pc = 0x18E228u;
label_18e228:
    // 0x18e228: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e22c:
    // 0x18e22c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E22Cu;
    {
        const bool branch_taken_0x18e22c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e22c) {
            ctx->pc = 0x18E230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E22Cu;
            // 0x18e230: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e218;
        }
    }
    ctx->pc = 0x18E234u;
    // 0x18e234: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E234u;
    {
        const bool branch_taken_0x18e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E234u;
        // 0x18e238: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e234) {
            ctx->pc = 0x18E290u;
            goto label_18e290;
        }
    }
    ctx->pc = 0x18E23Cu;
    // 0x18e23c: 0x0  nop
    ctx->pc = 0x18e23cu;
    // NOP
label_18e240:
    // 0x18e240: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E240u;
    {
        const bool branch_taken_0x18e240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e240) {
            ctx->pc = 0x18E244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E240u;
            // 0x18e244: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E290u;
            goto label_18e290;
        }
    }
    ctx->pc = 0x18E248u;
    // 0x18e248: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e24c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E24Cu;
    {
        const bool branch_taken_0x18e24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E24Cu;
        // 0x18e250: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e24c) {
            ctx->pc = 0x18E25Cu;
            goto label_18e25c;
        }
    }
    ctx->pc = 0x18E254u;
    // 0x18e254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E254u;
    {
        const bool branch_taken_0x18e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E254u;
        // 0x18e258: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e254) {
            ctx->pc = 0x18E260u;
            goto label_18e260;
        }
    }
    ctx->pc = 0x18E25Cu;
label_18e25c:
    // 0x18e25c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e260:
    // 0x18e260: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e264: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E264u;
    {
        const bool branch_taken_0x18e264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E264u;
        // 0x18e268: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e264) {
            ctx->pc = 0x18E274u;
            goto label_18e274;
        }
    }
    ctx->pc = 0x18E26Cu;
    // 0x18e26c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E26Cu;
    {
        const bool branch_taken_0x18e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E26Cu;
        // 0x18e270: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e26c) {
            ctx->pc = 0x18E278u;
            goto label_18e278;
        }
    }
    ctx->pc = 0x18E274u;
label_18e274:
    // 0x18e274: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e278:
    // 0x18e278: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E278u;
    SET_GPR_U32(ctx, 31, 0x18E280u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E278u, 0x18E280u)) {
        return;
    }
    ctx->pc = 0x18E280u;
label_18e280:
    // 0x18e280: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18e284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e288: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x18e288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x18e28c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18e290:
    // 0x18e290: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E290u;
    {
        const bool branch_taken_0x18e290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e290) {
            ctx->pc = 0x18E294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E290u;
            // 0x18e294: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e240;
        }
    }
    ctx->pc = 0x18E298u;
    // 0x18e298: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x18e298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x18e29c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18E29Cu;
    {
        const bool branch_taken_0x18e29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e29c) {
            ctx->pc = 0x18E2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E29Cu;
            // 0x18e2a0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E320u;
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E2A4u;
    // 0x18e2a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e2a8:
    // 0x18e2a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E2A8u;
            // 0x18e2ac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E2BCu;
            goto label_18e2bc;
        }
    }
    ctx->pc = 0x18E2B0u;
    // 0x18e2b0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E2B0u;
    SET_GPR_U32(ctx, 31, 0x18E2B8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E2B0u, 0x18E2B8u)) {
        return;
    }
    ctx->pc = 0x18E2B8u;
label_18e2b8:
    // 0x18e2b8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e2bc:
    // 0x18e2bc: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E2BCu;
    {
        const bool branch_taken_0x18e2bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2bc) {
            ctx->pc = 0x18E2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E2BCu;
            // 0x18e2c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e2a8;
        }
    }
    ctx->pc = 0x18E2C4u;
    // 0x18e2c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E2C4u;
    {
        const bool branch_taken_0x18e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C4u;
        // 0x18e2c8: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c4) {
            ctx->pc = 0x18E320u;
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E2CCu;
    // 0x18e2cc: 0x0  nop
    ctx->pc = 0x18e2ccu;
    // NOP
label_18e2d0:
    // 0x18e2d0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E2D0u;
    {
        const bool branch_taken_0x18e2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2d0) {
            ctx->pc = 0x18E2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E2D0u;
            // 0x18e2d4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E320u;
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E2D8u;
    // 0x18e2d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e2dc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E2DCu;
    {
        const bool branch_taken_0x18e2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2dc) {
            ctx->pc = 0x18E2ECu;
            goto label_18e2ec;
        }
    }
    ctx->pc = 0x18E2E4u;
    // 0x18e2e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E2E4u;
    {
        const bool branch_taken_0x18e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2E4u;
        // 0x18e2e8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2e4) {
            ctx->pc = 0x18E2F0u;
            goto label_18e2f0;
        }
    }
    ctx->pc = 0x18E2ECu;
label_18e2ec:
    // 0x18e2ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e2f0:
    // 0x18e2f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e2f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E2F4u;
    {
        const bool branch_taken_0x18e2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F4u;
        // 0x18e2f8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2f4) {
            ctx->pc = 0x18E304u;
            goto label_18e304;
        }
    }
    ctx->pc = 0x18E2FCu;
    // 0x18e2fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E2FCu;
    {
        const bool branch_taken_0x18e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2FCu;
        // 0x18e300: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2fc) {
            ctx->pc = 0x18E308u;
            goto label_18e308;
        }
    }
    ctx->pc = 0x18E304u;
label_18e304:
    // 0x18e304: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e308:
    // 0x18e308: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E308u;
    SET_GPR_U32(ctx, 31, 0x18E310u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E308u, 0x18E310u)) {
        return;
    }
    ctx->pc = 0x18E310u;
label_18e310:
    // 0x18e310: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18e314: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e318: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x18e318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x18e31c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x18e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_18e320:
    // 0x18e320: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E320u;
    {
        const bool branch_taken_0x18e320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e320) {
            ctx->pc = 0x18E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E320u;
            // 0x18e324: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e2d0;
        }
    }
    ctx->pc = 0x18E328u;
    // 0x18e328: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x18e328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e32c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E32Cu;
            // 0x18e330: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E334u;
    // 0x18e334: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e338:
    // 0x18e338: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E338u;
    {
        const bool branch_taken_0x18e338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e338) {
            ctx->pc = 0x18E33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E338u;
            // 0x18e33c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E34Cu;
            goto label_18e34c;
        }
    }
    ctx->pc = 0x18E340u;
    // 0x18e340: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E340u;
    SET_GPR_U32(ctx, 31, 0x18E348u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E340u, 0x18E348u)) {
        return;
    }
    ctx->pc = 0x18E348u;
label_18e348:
    // 0x18e348: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e34c:
    // 0x18e34c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E34Cu;
    {
        const bool branch_taken_0x18e34c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e34c) {
            ctx->pc = 0x18E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E34Cu;
            // 0x18e350: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e338;
        }
    }
    ctx->pc = 0x18E354u;
    // 0x18e354: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E354u;
    {
        const bool branch_taken_0x18e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E354u;
        // 0x18e358: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e354) {
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E35Cu;
    // 0x18e35c: 0x0  nop
    ctx->pc = 0x18e35cu;
    // NOP
label_18e360:
    // 0x18e360: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E360u;
    {
        const bool branch_taken_0x18e360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e360) {
            ctx->pc = 0x18E364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E360u;
            // 0x18e364: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E368u;
    // 0x18e368: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e36c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E36Cu;
    {
        const bool branch_taken_0x18e36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E36Cu;
        // 0x18e370: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e36c) {
            ctx->pc = 0x18E37Cu;
            goto label_18e37c;
        }
    }
    ctx->pc = 0x18E374u;
    // 0x18e374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E374u;
    {
        const bool branch_taken_0x18e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E374u;
        // 0x18e378: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e374) {
            ctx->pc = 0x18E380u;
            goto label_18e380;
        }
    }
    ctx->pc = 0x18E37Cu;
label_18e37c:
    // 0x18e37c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e380:
    // 0x18e380: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e384: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E384u;
    {
        const bool branch_taken_0x18e384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E384u;
        // 0x18e388: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e384) {
            ctx->pc = 0x18E394u;
            goto label_18e394;
        }
    }
    ctx->pc = 0x18E38Cu;
    // 0x18e38c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E38Cu;
    {
        const bool branch_taken_0x18e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E38Cu;
        // 0x18e390: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e38c) {
            ctx->pc = 0x18E398u;
            goto label_18e398;
        }
    }
    ctx->pc = 0x18E394u;
label_18e394:
    // 0x18e394: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e398:
    // 0x18e398: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E398u;
    SET_GPR_U32(ctx, 31, 0x18E3A0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E398u, 0x18E3A0u)) {
        return;
    }
    ctx->pc = 0x18E3A0u;
label_18e3a0:
    // 0x18e3a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e3a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e3a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18e3ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e3b0:
    // 0x18e3b0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E3B0u;
    {
        const bool branch_taken_0x18e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3b0) {
            ctx->pc = 0x18E3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3B0u;
            // 0x18e3b4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e360;
        }
    }
    ctx->pc = 0x18E3B8u;
    // 0x18e3b8: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18e3bc: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18E3BCu;
    {
        const bool branch_taken_0x18e3bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3bc) {
            ctx->pc = 0x18E3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3BCu;
            // 0x18e3c0: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E440u;
            goto label_18e440;
        }
    }
    ctx->pc = 0x18E3C4u;
    // 0x18e3c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e3c8:
    // 0x18e3c8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E3C8u;
    {
        const bool branch_taken_0x18e3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3c8) {
            ctx->pc = 0x18E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3C8u;
            // 0x18e3cc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3DCu;
            goto label_18e3dc;
        }
    }
    ctx->pc = 0x18E3D0u;
    // 0x18e3d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E3D0u;
    SET_GPR_U32(ctx, 31, 0x18E3D8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E3D0u, 0x18E3D8u)) {
        return;
    }
    ctx->pc = 0x18E3D8u;
label_18e3d8:
    // 0x18e3d8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e3dc:
    // 0x18e3dc: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E3DCu;
    {
        const bool branch_taken_0x18e3dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3dc) {
            ctx->pc = 0x18E3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3DCu;
            // 0x18e3e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e3c8;
        }
    }
    ctx->pc = 0x18E3E4u;
    // 0x18e3e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E3E4u;
    {
        const bool branch_taken_0x18e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3E4u;
        // 0x18e3e8: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3e4) {
            ctx->pc = 0x18E440u;
            goto label_18e440;
        }
    }
    ctx->pc = 0x18E3ECu;
    // 0x18e3ec: 0x0  nop
    ctx->pc = 0x18e3ecu;
    // NOP
label_18e3f0:
    // 0x18e3f0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E3F0u;
    {
        const bool branch_taken_0x18e3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3f0) {
            ctx->pc = 0x18E3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3F0u;
            // 0x18e3f4: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E440u;
            goto label_18e440;
        }
    }
    ctx->pc = 0x18E3F8u;
    // 0x18e3f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e3fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3FCu;
    {
        const bool branch_taken_0x18e3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3FCu;
        // 0x18e400: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3fc) {
            ctx->pc = 0x18E40Cu;
            goto label_18e40c;
        }
    }
    ctx->pc = 0x18E404u;
    // 0x18e404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E404u;
    {
        const bool branch_taken_0x18e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E404u;
        // 0x18e408: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e404) {
            ctx->pc = 0x18E410u;
            goto label_18e410;
        }
    }
    ctx->pc = 0x18E40Cu;
label_18e40c:
    // 0x18e40c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18e410:
    // 0x18e410: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e414: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E414u;
    {
        const bool branch_taken_0x18e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E414u;
        // 0x18e418: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e414) {
            ctx->pc = 0x18E424u;
            goto label_18e424;
        }
    }
    ctx->pc = 0x18E41Cu;
    // 0x18e41c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E41Cu;
    {
        const bool branch_taken_0x18e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E41Cu;
        // 0x18e420: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e41c) {
            ctx->pc = 0x18E428u;
            goto label_18e428;
        }
    }
    ctx->pc = 0x18E424u;
label_18e424:
    // 0x18e424: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18e424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18e428:
    // 0x18e428: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18E428u;
    SET_GPR_U32(ctx, 31, 0x18E430u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18E428u, 0x18E430u)) {
        return;
    }
    ctx->pc = 0x18E430u;
label_18e430:
    // 0x18e430: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x18e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18e434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e438: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x18e438u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x18e43c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x18e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_18e440:
    // 0x18e440: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18E440u;
    {
        const bool branch_taken_0x18e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e440) {
            ctx->pc = 0x18E444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E440u;
            // 0x18e444: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e3f0;
        }
    }
    ctx->pc = 0x18E448u;
    // 0x18e448: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18e448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e44c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18e44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e450: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18e450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e454: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18e454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e458: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18e458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e45c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18e45cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e460: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x18e460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e468: 0x3e00008  jr          $ra
    ctx->pc = 0x18E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E468u;
        // 0x18e46c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E470u;
}
