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

// Function: sub_001F31D0
// Address: 0x1f31d0 - 0x1f3310
void sub_001F31D0_0x1f31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F31D0_0x1f31d0");
#endif

    switch (ctx->pc) {
        case 0x1f3218u: goto label_1f3218;
        case 0x1f3230u: goto label_1f3230;
        case 0x1f3248u: goto label_1f3248;
        case 0x1f3250u: goto label_1f3250;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f4u: goto label_1f32f4;
        default: break;
    }

    ctx->pc = 0x1f31d0u;

    // 0x1f31d0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1f31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1f31d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f31d8: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x1f31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x1f31dc: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x1f31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
    // 0x1f31e0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1f31e4: 0x8c43eabc  lw          $v1, -0x1544($v0)
    ctx->pc = 0x1f31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33EABCu));
    // 0x1f31e8: 0x2453eabc  addiu       $s3, $v0, -0x1544
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961852));
    // 0x1f31ec: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x1f31ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x1f31f0: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x1f31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
    // 0x1f31f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F31F4u;
    {
        const bool branch_taken_0x1f31f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F4u;
        // 0x1f31f8: 0xffbf0410  sd          $ra, 0x410($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31f4) {
            ctx->pc = 0x1F320Cu;
            goto label_1f320c;
        }
    }
    ctx->pc = 0x1F31FCu;
    // 0x1f31fc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f3200: 0x8e02eac4  lw          $v0, -0x153C($s0)
    ctx->pc = 0x1f3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961860)));
    // 0x1f3204: 0x5043003c  beql        $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F3204u;
    {
        const bool branch_taken_0x1f3204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3204) {
            ctx->pc = 0x1F3208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3204u;
            // 0x1f3208: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32F8u;
            goto label_1f32f8;
        }
    }
    ctx->pc = 0x1F320Cu;
label_1f320c:
    // 0x1f320c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f3210: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1F3210u;
    SET_GPR_U32(ctx, 31, 0x1F3218u);
    ctx->pc = 0x1F3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3210u;
    // 0x1f3214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1F3210u, 0x1F3218u)) {
        return;
    }
    ctx->pc = 0x1F3218u;
label_1f3218:
    // 0x1f3218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f321c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f321cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3224: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1f3224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f3228: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F3228u;
    SET_GPR_U32(ctx, 31, 0x1F3230u);
    ctx->pc = 0x1F322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3228u;
    // 0x1f322c: 0x8e10eac4  lw          $s0, -0x153C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961860)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F3228u, 0x1F3230u)) {
        return;
    }
    ctx->pc = 0x1F3230u;
label_1f3230:
    // 0x1f3230: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1f3234: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1f3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1f3238: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1f3238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f323c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3240: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x1F3240u;
    SET_GPR_U32(ctx, 31, 0x1F3248u);
    ctx->pc = 0x1F3244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3240u;
    // 0x1f3244: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x1F3240u, 0x1F3248u)) {
        return;
    }
    ctx->pc = 0x1F3248u;
label_1f3248:
    // 0x1f3248: 0xc07cd68  jal         func_1F35A0
    ctx->pc = 0x1F3248u;
    SET_GPR_U32(ctx, 31, 0x1F3250u);
    ctx->pc = 0x1F35A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35A0u, 0x1F3248u, 0x1F3250u)) {
        return;
    }
    ctx->pc = 0x1F3250u;
label_1f3250:
    // 0x1f3250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3254: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f3254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f3258: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1f3258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f325c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3260: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F3260u;
    SET_GPR_U32(ctx, 31, 0x1F3268u);
    ctx->pc = 0x1F3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3260u;
    // 0x1f3264: 0x24a52568  addiu       $a1, $a1, 0x2568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F3260u, 0x1F3268u)) {
        return;
    }
    ctx->pc = 0x1F3268u;
label_1f3268:
    // 0x1f3268: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f326c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3270: 0xc0814fa  jal         func_2053E8
    ctx->pc = 0x1F3270u;
    SET_GPR_U32(ctx, 31, 0x1F3278u);
    ctx->pc = 0x1F3274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3270u;
    // 0x1f3274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x1F3270u, 0x1F3278u)) {
        return;
    }
    ctx->pc = 0x1F3278u;
label_1f3278:
    // 0x1f3278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f327c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1f327cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1f3280: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1f3284: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1f3284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1f3288: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f3288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f328c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1f328cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1f3290: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f3294: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f3298: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x1f3298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x1f329c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f32a0: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F32A0u;
    {
        const bool branch_taken_0x1f32a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32A0u;
        // 0x1f32a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32a0) {
            ctx->pc = 0x1F32E4u;
            goto label_1f32e4;
        }
    }
    ctx->pc = 0x1F32A8u;
    // 0x1f32a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f32ac: 0x0  nop
    ctx->pc = 0x1f32acu;
    // NOP
label_1f32b0:
    // 0x1f32b0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f32b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f32b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f32b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f32bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f32c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f32c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f32c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f32c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f32cc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1f32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1f32d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f32d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f32d8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f32d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f32dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F32DCu;
    {
        const bool branch_taken_0x1f32dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f32dc) {
            ctx->pc = 0x1F32E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F32DCu;
            // 0x1f32e0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f32b0;
        }
    }
    ctx->pc = 0x1F32E4u;
label_1f32e4:
    // 0x1f32e4: 0xc085bc6  jal         func_216F18
    ctx->pc = 0x1F32E4u;
    SET_GPR_U32(ctx, 31, 0x1F32ECu);
    ctx->pc = 0x1F32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32E4u;
    // 0x1f32e8: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F18u, 0x1F32E4u, 0x1F32ECu)) {
        return;
    }
    ctx->pc = 0x1F32ECu;
label_1f32ec:
    // 0x1f32ec: 0xc061cf2  jal         func_1873C8
    ctx->pc = 0x1F32ECu;
    SET_GPR_U32(ctx, 31, 0x1F32F4u);
    ctx->pc = 0x1F32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32ECu;
    // 0x1f32f0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1873C8u, 0x1F32ECu, 0x1F32F4u)) {
        return;
    }
    ctx->pc = 0x1F32F4u;
label_1f32f4:
    // 0x1f32f4: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x1f32f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_1f32f8:
    // 0x1f32f8: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x1f32f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1f32fc: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x1f32fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1f3300: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x1f3300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1f3304: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x1f3304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1f3308: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3308u;
        // 0x1f330c: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3310u;
}
