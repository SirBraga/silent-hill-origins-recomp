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

// Function: sub_0014B068
// Address: 0x14b068 - 0x14b1e8
void sub_0014B068_0x14b068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B068_0x14b068");
#endif

    switch (ctx->pc) {
        case 0x14b094u: goto label_14b094;
        case 0x14b0dcu: goto label_14b0dc;
        case 0x14b0f4u: goto label_14b0f4;
        case 0x14b108u: goto label_14b108;
        case 0x14b128u: goto label_14b128;
        case 0x14b140u: goto label_14b140;
        case 0x14b160u: goto label_14b160;
        case 0x14b180u: goto label_14b180;
        case 0x14b198u: goto label_14b198;
        case 0x14b1c0u: goto label_14b1c0;
        default: break;
    }

    ctx->pc = 0x14b068u;

    // 0x14b068: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b06c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14b070: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14b074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14b078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b07c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14b080: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b084: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14b088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b08c: 0xc052590  jal         func_149640
    ctx->pc = 0x14B08Cu;
    SET_GPR_U32(ctx, 31, 0x14B094u);
    ctx->pc = 0x14B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B08Cu;
    // 0x14b090: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149640u, 0x14B08Cu, 0x14B094u)) {
        return;
    }
    ctx->pc = 0x14B094u;
label_14b094:
    // 0x14b094: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x14b094u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
    // 0x14b098: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14b09c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14b0a0: 0x24421d10  addiu       $v0, $v0, 0x1D10
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
    // 0x14b0a4: 0x24631d30  addiu       $v1, $v1, 0x1D30
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7472));
    // 0x14b0a8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x14b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x14b0ac: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14b0b0: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x14b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x14b0b4: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x14b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x14b0b8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x14b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x14b0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0c0: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x14b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
    // 0x14b0c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0c8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x14b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x14b0cc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x14b0ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b0d0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x14b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x14b0d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14B0D4u;
    SET_GPR_U32(ctx, 31, 0x14B0DCu);
    ctx->pc = 0x14B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0D4u;
    // 0x14b0d8: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14B0D4u, 0x14B0DCu)) {
        return;
    }
    ctx->pc = 0x14B0DCu;
label_14b0dc:
    // 0x14b0dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14b0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0e4: 0x24a5f8a0  addiu       $a1, $a1, -0x760
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965408));
    // 0x14b0e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0ec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14B0ECu;
    SET_GPR_U32(ctx, 31, 0x14B0F4u);
    ctx->pc = 0x14B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0ECu;
    // 0x14b0f0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14B0ECu, 0x14B0F4u)) {
        return;
    }
    ctx->pc = 0x14B0F4u;
label_14b0f4:
    // 0x14b0f4: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x14b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x14b0f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0fc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x14b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x14b100: 0xc07f8aa  jal         func_1FE2A8
    ctx->pc = 0x14B100u;
    SET_GPR_U32(ctx, 31, 0x14B108u);
    ctx->pc = 0x14B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B100u;
    // 0x14b104: 0xae31005c  sw          $s1, 0x5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x14B100u, 0x14B108u)) {
        return;
    }
    ctx->pc = 0x14B108u;
label_14b108:
    // 0x14b108: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14B108u;
    {
        const bool branch_taken_0x14b108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B108u;
        // 0x14b10c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b108) {
            ctx->pc = 0x14B180u;
            goto label_14b180;
        }
    }
    ctx->pc = 0x14B110u;
    // 0x14b110: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14b110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14b114: 0x8c46ef50  lw          $a2, -0x10B0($v0)
    ctx->pc = 0x14b114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963024)));
    // 0x14b118: 0x24701ce0  addiu       $s0, $v1, 0x1CE0
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7392));
    // 0x14b11c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b120: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14B120u;
    SET_GPR_U32(ctx, 31, 0x14B128u);
    ctx->pc = 0x14B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B120u;
    // 0x14b124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14B120u, 0x14B128u)) {
        return;
    }
    ctx->pc = 0x14B128u;
label_14b128:
    // 0x14b128: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b130: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B130u;
    {
        const bool branch_taken_0x14b130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B130u;
        // 0x14b134: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b130) {
            ctx->pc = 0x14B174u;
            goto label_14b174;
        }
    }
    ctx->pc = 0x14B138u;
    // 0x14b138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b13c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14b140:
    // 0x14b140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b144: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b148: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14b14c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14b150: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14b154: 0xe3800a  movz        $s0, $a3, $v1
    ctx->pc = 0x14b154u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7));
    // 0x14b158: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x14B158u;
    SET_GPR_U32(ctx, 31, 0x14B160u);
    ctx->pc = 0x14B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B158u;
    // 0x14b15c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x14B158u, 0x14B160u)) {
        return;
    }
    ctx->pc = 0x14B160u;
label_14b160:
    // 0x14b160: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b168: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x14B168u;
    {
        const bool branch_taken_0x14b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b168) {
            ctx->pc = 0x14B16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B168u;
            // 0x14b16c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B170u;
    // 0x14b170: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_14b174:
    // 0x14b174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b178: 0xc041e86  jal         func_107A18
    ctx->pc = 0x14B178u;
    SET_GPR_U32(ctx, 31, 0x14B180u);
    ctx->pc = 0x14B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B178u;
    // 0x14b17c: 0x24841ce8  addiu       $a0, $a0, 0x1CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x14B178u, 0x14B180u)) {
        return;
    }
    ctx->pc = 0x14B180u;
label_14b180:
    // 0x14b180: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x14b180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x14b184: 0x26858880  addiu       $a1, $s4, -0x7780
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936704));
    // 0x14b188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b18c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b190: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14B190u;
    SET_GPR_U32(ctx, 31, 0x14B198u);
    ctx->pc = 0x14B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B190u;
    // 0x14b194: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14B190u, 0x14B198u)) {
        return;
    }
    ctx->pc = 0x14B198u;
label_14b198:
    // 0x14b198: 0x8e6284e8  lw          $v0, -0x7B18($s3)
    ctx->pc = 0x14b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935784)));
    // 0x14b19c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B19Cu;
    {
        const bool branch_taken_0x14b19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B19Cu;
        // 0x14b1a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b19c) {
            ctx->pc = 0x14B1C4u;
            goto label_14b1c4;
        }
    }
    ctx->pc = 0x14B1A4u;
    // 0x14b1a4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14b1a8: 0xae7184e8  sw          $s1, -0x7B18($s3)
    ctx->pc = 0x14b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935784), GPR_U32(ctx, 17));
    // 0x14b1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1b0: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x14b1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1b8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14B1B8u;
    SET_GPR_U32(ctx, 31, 0x14B1C0u);
    ctx->pc = 0x14B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1B8u;
    // 0x14b1bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14B1B8u, 0x14B1C0u)) {
        return;
    }
    ctx->pc = 0x14B1C0u;
label_14b1c0:
    // 0x14b1c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14b1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b1c4:
    // 0x14b1c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14b1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b1c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14b1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b1cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14b1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b1d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b1d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14b1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1DCu;
        // 0x14b1e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B1E4u;
    // 0x14b1e4: 0x0  nop
    ctx->pc = 0x14b1e4u;
    // NOP
    ctx->pc = 0x14b1e8u;
}
