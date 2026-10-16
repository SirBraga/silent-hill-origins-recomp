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

// Function: sub_002A30E8
// Address: 0x2a30e8 - 0x2a3260
void sub_002A30E8_0x2a30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A30E8_0x2a30e8");
#endif

    switch (ctx->pc) {
        case 0x2a311cu: goto label_2a311c;
        case 0x2a314cu: goto label_2a314c;
        case 0x2a31c8u: goto label_2a31c8;
        case 0x2a31ecu: goto label_2a31ec;
        case 0x2a3234u: goto label_2a3234;
        default: break;
    }

    ctx->pc = 0x2a30e8u;

    // 0x2a30e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a30ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a30f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a30f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a30f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a30f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a30fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a30fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3100: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a3100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a3104: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a3104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3108: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x2a3108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x2a310c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A310Cu;
    {
        const bool branch_taken_0x2a310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A310Cu;
        // 0x2a3110: 0x34a20020  ori         $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a310c) {
            ctx->pc = 0x2A312Cu;
            goto label_2a312c;
        }
    }
    ctx->pc = 0x2A3114u;
    // 0x2a3114: 0xc0c489a  jal         func_312268
    ctx->pc = 0x2A3114u;
    SET_GPR_U32(ctx, 31, 0x2A311Cu);
    ctx->pc = 0x2A3118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3114u;
    // 0x2a3118: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A3114u, 0x2A311Cu)) {
        return;
    }
    ctx->pc = 0x2A311Cu;
label_2a311c:
    // 0x2a311c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a3120: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a3124: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A3124u;
    {
        const bool branch_taken_0x2a3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3124u;
        // 0x2a3128: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3124) {
            ctx->pc = 0x2A3244u;
            goto label_2a3244;
        }
    }
    ctx->pc = 0x2A312Cu;
label_2a312c:
    // 0x2a312c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x2a312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x2a3130: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A3130u;
    {
        const bool branch_taken_0x2a3130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3130u;
        // 0x2a3134: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3130) {
            ctx->pc = 0x2A31B0u;
            goto label_2a31b0;
        }
    }
    ctx->pc = 0x2A3138u;
    // 0x2a3138: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a313c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A313Cu;
    {
        const bool branch_taken_0x2a313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a313c) {
            ctx->pc = 0x2A3140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A313Cu;
            // 0x2a3140: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3164u;
            goto label_2a3164;
        }
    }
    ctx->pc = 0x2A3144u;
    // 0x2a3144: 0xc0a7302  jal         func_29CC08
    ctx->pc = 0x2A3144u;
    SET_GPR_U32(ctx, 31, 0x2A314Cu);
    ctx->pc = 0x2A3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3144u;
    // 0x2a3148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CC08u, 0x2A3144u, 0x2A314Cu)) {
        return;
    }
    ctx->pc = 0x2A314Cu;
label_2a314c:
    // 0x2a314c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a3150: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a3150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3154: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a3154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a3158: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a3158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2a315c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a3160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a3160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a3164:
    // 0x2a3164: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3168: 0x54860006  bnel        $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3168u;
    {
        const bool branch_taken_0x2a3168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a3168) {
            ctx->pc = 0x2A316Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3168u;
            // 0x2a316c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3184u;
            goto label_2a3184;
        }
    }
    ctx->pc = 0x2A3170u;
    // 0x2a3170: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a3170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a3174: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a3174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a3178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a317c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a317cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a3180: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a3180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a3184:
    // 0x2a3184: 0x30a30202  andi        $v1, $a1, 0x202
    ctx->pc = 0x2a3184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)514);
    // 0x2a3188: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2a3188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x2a318c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2a3190: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2a3190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x2a3194: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2a3194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2a3198: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3198u;
    {
        const bool branch_taken_0x2a3198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3198u;
        // 0x2a319c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3198) {
            ctx->pc = 0x2A31A4u;
            goto label_2a31a4;
        }
    }
    ctx->pc = 0x2A31A0u;
    // 0x2a31a0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2a31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_2a31a4:
    // 0x2a31a4: 0x34a20800  ori         $v0, $a1, 0x800
    ctx->pc = 0x2a31a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x2a31a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a31ac: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2a31acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a31b0:
    // 0x2a31b0: 0x16320007  bne         $s1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A31B0u;
    {
        const bool branch_taken_0x2a31b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31B0u;
        // 0x2a31b4: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31b0) {
            ctx->pc = 0x2A31D0u;
            goto label_2a31d0;
        }
    }
    ctx->pc = 0x2A31B8u;
    // 0x2a31b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a31bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31c0: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A31C0u;
    SET_GPR_U32(ctx, 31, 0x2A31C8u);
    ctx->pc = 0x2A31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31C0u;
    // 0x2a31c4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A31C0u, 0x2A31C8u)) {
        return;
    }
    ctx->pc = 0x2A31C8u;
label_2a31c8:
    // 0x2a31c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A31C8u;
    {
        const bool branch_taken_0x2a31c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31C8u;
        // 0x2a31cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31c8) {
            ctx->pc = 0x2A3248u;
            goto label_2a3248;
        }
    }
    ctx->pc = 0x2A31D0u;
label_2a31d0:
    // 0x2a31d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a31d4: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A31D4u;
    {
        const bool branch_taken_0x2a31d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a31d4) {
            ctx->pc = 0x2A31D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A31D4u;
            // 0x2a31d8: 0xa0d10000  sb          $s1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A31FCu;
            goto label_2a31fc;
        }
    }
    ctx->pc = 0x2A31DCu;
    // 0x2a31dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a31dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a31e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31e4: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A31E4u;
    SET_GPR_U32(ctx, 31, 0x2A31ECu);
    ctx->pc = 0x2A31E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31E4u;
    // 0x2a31e8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A31E4u, 0x2A31ECu)) {
        return;
    }
    ctx->pc = 0x2A31ECu;
label_2a31ec:
    // 0x2a31ec: 0x10520015  beq         $v0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A31ECu;
    {
        const bool branch_taken_0x2a31ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31ECu;
        // 0x2a31f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a31ec) {
            ctx->pc = 0x2A3244u;
            goto label_2a3244;
        }
    }
    ctx->pc = 0x2A31F4u;
    // 0x2a31f4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2a31f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a31f8: 0xa0d10000  sb          $s1, 0x0($a2)
    ctx->pc = 0x2a31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
label_2a31fc:
    // 0x2a31fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a3200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3204: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a3204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a3208: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3208u;
    {
        const bool branch_taken_0x2a3208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3208u;
        // 0x2a320c: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3208) {
            ctx->pc = 0x2A3224u;
            goto label_2a3224;
        }
    }
    ctx->pc = 0x2A3210u;
    // 0x2a3210: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2a3214: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3214u;
    {
        const bool branch_taken_0x2a3214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3214u;
        // 0x2a3218: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3214) {
            ctx->pc = 0x2A3240u;
            goto label_2a3240;
        }
    }
    ctx->pc = 0x2A321Cu;
    // 0x2a321c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A321Cu;
    {
        const bool branch_taken_0x2a321c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A321Cu;
        // 0x2a3220: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a321c) {
            ctx->pc = 0x2A3244u;
            goto label_2a3244;
        }
    }
    ctx->pc = 0x2A3224u;
label_2a3224:
    // 0x2a3224: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a3224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a3228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a322c: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A322Cu;
    SET_GPR_U32(ctx, 31, 0x2A3234u);
    ctx->pc = 0x2A3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A322Cu;
    // 0x2a3230: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A322Cu, 0x2A3234u)) {
        return;
    }
    ctx->pc = 0x2A3234u;
label_2a3234:
    // 0x2a3234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3238: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3238u;
    {
        const bool branch_taken_0x2a3238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3238u;
        // 0x2a323c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3238) {
            ctx->pc = 0x2A3244u;
            goto label_2a3244;
        }
    }
    ctx->pc = 0x2A3240u;
label_2a3240:
    // 0x2a3240: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2a3240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2a3244:
    // 0x2a3244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a3244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3248:
    // 0x2a3248: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a3248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a324c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a324cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3254: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3254u;
        // 0x2a3258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A325Cu;
    // 0x2a325c: 0x0  nop
    ctx->pc = 0x2a325cu;
    // NOP
    ctx->pc = 0x2a3260u;
}
