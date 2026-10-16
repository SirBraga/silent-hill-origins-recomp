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

// Function: sub_0018F138
// Address: 0x18f138 - 0x18f520
void sub_0018F138_0x18f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F138_0x18f138");
#endif

    switch (ctx->pc) {
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f210u: goto label_18f210;
        case 0x18f23cu: goto label_18f23c;
        case 0x18f258u: goto label_18f258;
        case 0x18f264u: goto label_18f264;
        case 0x18f2b0u: goto label_18f2b0;
        case 0x18f2f0u: goto label_18f2f0;
        case 0x18f308u: goto label_18f308;
        case 0x18f32cu: goto label_18f32c;
        case 0x18f364u: goto label_18f364;
        case 0x18f378u: goto label_18f378;
        case 0x18f390u: goto label_18f390;
        case 0x18f3a4u: goto label_18f3a4;
        case 0x18f3b8u: goto label_18f3b8;
        case 0x18f3ccu: goto label_18f3cc;
        case 0x18f42cu: goto label_18f42c;
        case 0x18f438u: goto label_18f438;
        case 0x18f470u: goto label_18f470;
        case 0x18f4ccu: goto label_18f4cc;
        case 0x18f4ecu: goto label_18f4ec;
        case 0x18f4f8u: goto label_18f4f8;
        default: break;
    }

    ctx->pc = 0x18f138u;

    // 0x18f138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18f13c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18f140: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18f144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f148: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18f14c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18f14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f158: 0x122000e8  beqz        $s1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x18F158u;
    {
        const bool branch_taken_0x18f158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F158u;
        // 0x18f15c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f158) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F160u;
    // 0x18f160: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f168: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x18f16c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18F16Cu;
    {
        const bool branch_taken_0x18f16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F16Cu;
        // 0x18f170: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f16c) {
            ctx->pc = 0x18F218u;
            goto label_18f218;
        }
    }
    ctx->pc = 0x18F174u;
    // 0x18f174: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F174u;
    {
        const bool branch_taken_0x18f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F174u;
        // 0x18f178: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f174) {
            ctx->pc = 0x18F18Cu;
            goto label_18f18c;
        }
    }
    ctx->pc = 0x18F17Cu;
    // 0x18f17c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F17Cu;
    {
        const bool branch_taken_0x18f17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F17Cu;
        // 0x18f180: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f17c) {
            ctx->pc = 0x18F19Cu;
            goto label_18f19c;
        }
    }
    ctx->pc = 0x18F184u;
    // 0x18f184: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x18F184u;
    {
        const bool branch_taken_0x18f184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F184u;
        // 0x18f188: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f184) {
            ctx->pc = 0x18F504u;
            goto label_18f504;
        }
    }
    ctx->pc = 0x18F18Cu;
label_18f18c:
    // 0x18f18c: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x18F18Cu;
    {
        const bool branch_taken_0x18f18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f18c) {
            ctx->pc = 0x18F3D4u;
            goto label_18f3d4;
        }
    }
    ctx->pc = 0x18F194u;
    // 0x18f194: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x18F194u;
    {
        const bool branch_taken_0x18f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F194u;
        // 0x18f198: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f194) {
            ctx->pc = 0x18F504u;
            goto label_18f504;
        }
    }
    ctx->pc = 0x18F19Cu;
label_18f19c:
    // 0x18f19c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18f1a0: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x18f1a4: 0x8c448ac0  lw          $a0, -0x7540($v0)
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338AC0u));
    // 0x18f1a8: 0xc06231e  jal         func_188C78
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0x260600c8  addiu       $a2, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188C78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188C78u, 0x18F1A8u, 0x18F1B0u)) {
        return;
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B0u;
        // 0x18f1b4: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F1B8u;
    // 0x18f1b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f1bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18f1c0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18f1c4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x18f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x18f1c8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x18f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x18f1cc: 0x8c6346c8  lw          $v1, 0x46C8($v1)
    ctx->pc = 0x18f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18120)));
    // 0x18f1d0: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x18f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x18f1d4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F1D4u;
    {
        const bool branch_taken_0x18f1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1D4u;
        // 0x18f1d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1d4) {
            ctx->pc = 0x18F1F4u;
            goto label_18f1f4;
        }
    }
    ctx->pc = 0x18F1DCu;
    // 0x18f1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F1E0u;
    {
        const bool branch_taken_0x18f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E0u;
        // 0x18f1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1e0) {
            ctx->pc = 0x18F1F4u;
            goto label_18f1f4;
        }
    }
    ctx->pc = 0x18F1E8u;
    // 0x18f1e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18f1ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18F1ECu;
    SET_GPR_U32(ctx, 31, 0x18F1F4u);
    ctx->pc = 0x18F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1ECu;
    // 0x18f1f0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18F1ECu, 0x18F1F4u)) {
        return;
    }
    ctx->pc = 0x18F1F4u;
label_18f1f4:
    // 0x18f1f4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18f1f8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18f1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f200: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x18f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x18f204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f208: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18F208u;
    SET_GPR_U32(ctx, 31, 0x18F210u);
    ctx->pc = 0x18F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F208u;
    // 0x18f20c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18F208u, 0x18F210u)) {
        return;
    }
    ctx->pc = 0x18F210u;
label_18f210:
    // 0x18f210: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x18F210u;
    {
        const bool branch_taken_0x18f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F210u;
        // 0x18f214: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f210) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F218u;
label_18f218:
    // 0x18f218: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x18f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x18f21c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f220: 0x146200b7  bne         $v1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x18F220u;
    {
        const bool branch_taken_0x18f220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F220u;
        // 0x18f224: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f220) {
            ctx->pc = 0x18F500u;
            goto label_18f500;
        }
    }
    ctx->pc = 0x18F228u;
    // 0x18f228: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x18f22c: 0x184000b4  blez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x18F22Cu;
    {
        const bool branch_taken_0x18f22c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x18F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F22Cu;
        // 0x18f230: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f22c) {
            ctx->pc = 0x18F500u;
            goto label_18f500;
        }
    }
    ctx->pc = 0x18F234u;
    // 0x18f234: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x18F234u;
    SET_GPR_U32(ctx, 31, 0x18F23Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x18F234u, 0x18F23Cu)) {
        return;
    }
    ctx->pc = 0x18F23Cu;
label_18f23c:
    // 0x18f23c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18f23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f240: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x18f244: 0x108000ae  beqz        $a0, . + 4 + (0xAE << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F244u;
        // 0x18f248: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F500u;
            goto label_18f500;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f250: 0xc049bbe  jal         func_126EF8
    ctx->pc = 0x18F250u;
    SET_GPR_U32(ctx, 31, 0x18F258u);
    ctx->pc = 0x18F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F250u;
    // 0x18f254: 0xc44c005c  lwc1        $f12, 0x5C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EF8u, 0x18F250u, 0x18F258u)) {
        return;
    }
    ctx->pc = 0x18F258u;
label_18f258:
    // 0x18f258: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18f258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f25c: 0xc06354e  jal         func_18D538
    ctx->pc = 0x18F25Cu;
    SET_GPR_U32(ctx, 31, 0x18F264u);
    ctx->pc = 0x18F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F25Cu;
    // 0x18f260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x18F25Cu, 0x18F264u)) {
        return;
    }
    ctx->pc = 0x18F264u;
label_18f264:
    // 0x18f264: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18f264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f268: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x18f26c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x18F26Cu;
    {
        const bool branch_taken_0x18f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f26c) {
            ctx->pc = 0x18F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F26Cu;
            // 0x18f270: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F2F4u;
            goto label_18f2f4;
        }
    }
    ctx->pc = 0x18F274u;
    // 0x18f274: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F274u;
    {
        const bool branch_taken_0x18f274 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x18F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F274u;
        // 0x18f278: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f274) {
            ctx->pc = 0x18F290u;
            goto label_18f290;
        }
    }
    ctx->pc = 0x18F27Cu;
    // 0x18f27c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f280: 0x0  nop
    ctx->pc = 0x18f280u;
    // NOP
    // 0x18f284: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x18f284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18f288: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F288u;
    {
        const bool branch_taken_0x18f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f288) {
            ctx->pc = 0x18F2A8u;
            goto label_18f2a8;
        }
    }
    ctx->pc = 0x18F290u;
label_18f290:
    // 0x18f290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18f294: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f29c: 0x0  nop
    ctx->pc = 0x18f29cu;
    // NOP
    // 0x18f2a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x18f2a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18f2a4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x18f2a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_18f2a8:
    // 0x18f2a8: 0xc04de72  jal         func_1379C8
    ctx->pc = 0x18F2A8u;
    SET_GPR_U32(ctx, 31, 0x18F2B0u);
    ctx->pc = 0x18F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2A8u;
    // 0x18f2ac: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1379C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1379C8u, 0x18F2A8u, 0x18F2B0u)) {
        return;
    }
    ctx->pc = 0x18F2B0u;
label_18f2b0:
    // 0x18f2b0: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x18f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x18f2b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F2B4u;
    {
        const bool branch_taken_0x18f2b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x18F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2B4u;
        // 0x18f2b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2b4) {
            ctx->pc = 0x18F2D0u;
            goto label_18f2d0;
        }
    }
    ctx->pc = 0x18F2BCu;
    // 0x18f2bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f2c0: 0x0  nop
    ctx->pc = 0x18f2c0u;
    // NOP
    // 0x18f2c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x18f2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18f2c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F2C8u;
    {
        const bool branch_taken_0x18f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2c8) {
            ctx->pc = 0x18F2E8u;
            goto label_18f2e8;
        }
    }
    ctx->pc = 0x18F2D0u;
label_18f2d0:
    // 0x18f2d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18f2d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18f2dc: 0x0  nop
    ctx->pc = 0x18f2dcu;
    // NOP
    // 0x18f2e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x18f2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18f2e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x18f2e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_18f2e8:
    // 0x18f2e8: 0xc04de86  jal         func_137A18
    ctx->pc = 0x18F2E8u;
    SET_GPR_U32(ctx, 31, 0x18F2F0u);
    ctx->pc = 0x18F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2E8u;
    // 0x18f2ec: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137A18u, 0x18F2E8u, 0x18F2F0u)) {
        return;
    }
    ctx->pc = 0x18F2F0u;
label_18f2f0:
    // 0x18f2f0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_18f2f4:
    // 0x18f2f4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F2F4u;
    {
        const bool branch_taken_0x18f2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2F4u;
        // 0x18f2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2f4) {
            ctx->pc = 0x18F324u;
            goto label_18f324;
        }
    }
    ctx->pc = 0x18F2FCu;
    // 0x18f2fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F2FCu;
    {
        const bool branch_taken_0x18f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2FCu;
        // 0x18f300: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2fc) {
            ctx->pc = 0x18F314u;
            goto label_18f314;
        }
    }
    ctx->pc = 0x18F304u;
    // 0x18f304: 0x0  nop
    ctx->pc = 0x18f304u;
    // NOP
label_18f308:
    // 0x18f308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F308u;
    {
        const bool branch_taken_0x18f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F308u;
        // 0x18f30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f308) {
            ctx->pc = 0x18F324u;
            goto label_18f324;
        }
    }
    ctx->pc = 0x18F310u;
    // 0x18f310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18f314:
    // 0x18f314: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x18f318: 0x5642fffb  bnel        $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18F318u;
    {
        const bool branch_taken_0x18f318 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f318) {
            ctx->pc = 0x18F31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F318u;
            // 0x18f31c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f308;
        }
    }
    ctx->pc = 0x18F320u;
    // 0x18f320: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18f324:
    // 0x18f324: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x18F324u;
    SET_GPR_U32(ctx, 31, 0x18F32Cu);
    ctx->pc = 0x18F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F324u;
    // 0x18f328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D700u, 0x18F324u, 0x18F32Cu)) {
        return;
    }
    ctx->pc = 0x18F32Cu;
label_18f32c:
    // 0x18f32c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f330: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18f334: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x18f334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18f338: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x18F338u;
    {
        const bool branch_taken_0x18f338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F338u;
        // 0x18f33c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f338) {
            ctx->pc = 0x18F4F8u;
            goto label_18f4f8;
        }
    }
    ctx->pc = 0x18F340u;
    // 0x18f340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18f344: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x18f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x18f348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f350: 0x800008  jr          $a0
    ctx->pc = 0x18F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F358u: goto label_18f358;
            case 0x18F36Cu: goto label_18f36c;
            case 0x18F380u: goto label_18f380;
            case 0x18F398u: goto label_18f398;
            case 0x18F3ACu: goto label_18f3ac;
            case 0x18F3C0u: goto label_18f3c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18F358u;
label_18f358:
    // 0x18f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f35c: 0xc064266  jal         func_190998
    ctx->pc = 0x18F35Cu;
    SET_GPR_U32(ctx, 31, 0x18F364u);
    ctx->pc = 0x18F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F35Cu;
    // 0x18f360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190998u, 0x18F35Cu, 0x18F364u)) {
        return;
    }
    ctx->pc = 0x18F364u;
label_18f364:
    // 0x18f364: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x18F364u;
    {
        const bool branch_taken_0x18f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F364u;
        // 0x18f368: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f364) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F36Cu;
label_18f36c:
    // 0x18f36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f370: 0xc064232  jal         func_1908C8
    ctx->pc = 0x18F370u;
    SET_GPR_U32(ctx, 31, 0x18F378u);
    ctx->pc = 0x18F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F370u;
    // 0x18f374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1908C8u, 0x18F370u, 0x18F378u)) {
        return;
    }
    ctx->pc = 0x18F378u;
label_18f378:
    // 0x18f378: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x18F378u;
    {
        const bool branch_taken_0x18f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F378u;
        // 0x18f37c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f378) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F380u;
label_18f380:
    // 0x18f380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f388: 0xc06429a  jal         func_190A68
    ctx->pc = 0x18F388u;
    SET_GPR_U32(ctx, 31, 0x18F390u);
    ctx->pc = 0x18F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F388u;
    // 0x18f38c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190A68u, 0x18F388u, 0x18F390u)) {
        return;
    }
    ctx->pc = 0x18F390u;
label_18f390:
    // 0x18f390: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18F390u;
    {
        const bool branch_taken_0x18f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F390u;
        // 0x18f394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f390) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F398u;
label_18f398:
    // 0x18f398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f39c: 0xc0642d6  jal         func_190B58
    ctx->pc = 0x18F39Cu;
    SET_GPR_U32(ctx, 31, 0x18F3A4u);
    ctx->pc = 0x18F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F39Cu;
    // 0x18f3a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190B58u, 0x18F39Cu, 0x18F3A4u)) {
        return;
    }
    ctx->pc = 0x18F3A4u;
label_18f3a4:
    // 0x18f3a4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x18F3A4u;
    {
        const bool branch_taken_0x18f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3A4u;
        // 0x18f3a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3a4) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F3ACu;
label_18f3ac:
    // 0x18f3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3b0: 0xc064314  jal         func_190C50
    ctx->pc = 0x18F3B0u;
    SET_GPR_U32(ctx, 31, 0x18F3B8u);
    ctx->pc = 0x18F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3B0u;
    // 0x18f3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190C50u, 0x18F3B0u, 0x18F3B8u)) {
        return;
    }
    ctx->pc = 0x18F3B8u;
label_18f3b8:
    // 0x18f3b8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x18F3B8u;
    {
        const bool branch_taken_0x18f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B8u;
        // 0x18f3bc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3b8) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F3C0u;
label_18f3c0:
    // 0x18f3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3c4: 0xc064348  jal         func_190D20
    ctx->pc = 0x18F3C4u;
    SET_GPR_U32(ctx, 31, 0x18F3CCu);
    ctx->pc = 0x18F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3C4u;
    // 0x18f3c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190D20u, 0x18F3C4u, 0x18F3CCu)) {
        return;
    }
    ctx->pc = 0x18F3CCu;
label_18f3cc:
    // 0x18f3cc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x18F3CCu;
    {
        const bool branch_taken_0x18f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3CCu;
        // 0x18f3d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3cc) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F3D4u;
label_18f3d4:
    // 0x18f3d4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x18f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x18f3d8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x18f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x18f3dc: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x18f3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x18f3e0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x18F3E0u;
    {
        const bool branch_taken_0x18f3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3E0u;
        // 0x18f3e4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3e0) {
            ctx->pc = 0x18F4F8u;
            goto label_18f4f8;
        }
    }
    ctx->pc = 0x18F3E8u;
    // 0x18f3e8: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x18f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
    // 0x18f3ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f3f0: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x18f3f4: 0x1c400041  bgtz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x18F3F4u;
    {
        const bool branch_taken_0x18f3f4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x18F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3F4u;
        // 0x18f3f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3f4) {
            ctx->pc = 0x18F4FCu;
            goto label_18f4fc;
        }
    }
    ctx->pc = 0x18F3FCu;
    // 0x18f3fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18f400: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18f404: 0x8c45bd88  lw          $a1, -0x4278($v0)
    ctx->pc = 0x18f404u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6CBD88u));
    // 0x18f408: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x18f408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x18f40c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F40Cu;
    {
        const bool branch_taken_0x18f40c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F40Cu;
        // 0x18f410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f40c) {
            ctx->pc = 0x18F430u;
            goto label_18f430;
        }
    }
    ctx->pc = 0x18F414u;
    // 0x18f414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F418u;
    {
        const bool branch_taken_0x18f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F418u;
        // 0x18f41c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f418) {
            ctx->pc = 0x18F42Cu;
            goto label_18f42c;
        }
    }
    ctx->pc = 0x18F420u;
    // 0x18f420: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18f420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18f424: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18F424u;
    SET_GPR_U32(ctx, 31, 0x18F42Cu);
    ctx->pc = 0x18F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F424u;
    // 0x18f428: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18F424u, 0x18F42Cu)) {
        return;
    }
    ctx->pc = 0x18F42Cu;
label_18f42c:
    // 0x18f42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f430:
    // 0x18f430: 0xc063d48  jal         func_18F520
    ctx->pc = 0x18F430u;
    SET_GPR_U32(ctx, 31, 0x18F438u);
    ctx->pc = 0x18F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F430u;
    // 0x18f434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x18F430u, 0x18F438u)) {
        return;
    }
    ctx->pc = 0x18F438u;
label_18f438:
    // 0x18f438: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x18f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18f43c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f440: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18F440u;
    {
        const bool branch_taken_0x18f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f440) {
            ctx->pc = 0x18F444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F440u;
            // 0x18f444: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F448u;
            goto label_18f448;
        }
    }
    ctx->pc = 0x18F448u;
label_18f448:
    // 0x18f448: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18f44c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f450: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18F450u;
    {
        const bool branch_taken_0x18f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f450) {
            ctx->pc = 0x18F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F450u;
            // 0x18f454: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F458u;
            goto label_18f458;
        }
    }
    ctx->pc = 0x18F458u;
label_18f458:
    // 0x18f458: 0x2612003c  addiu       $s2, $s0, 0x3C
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x18f45c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x18f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18f460: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18F460u;
    {
        const bool branch_taken_0x18f460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f460) {
            ctx->pc = 0x18F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F460u;
            // 0x18f464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F48Cu;
            goto label_18f48c;
        }
    }
    ctx->pc = 0x18F468u;
    // 0x18f468: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f46c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18f470:
    // 0x18f470: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F470u;
    {
        const bool branch_taken_0x18f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f470) {
            ctx->pc = 0x18F48Cu;
            goto label_18f48c;
        }
    }
    ctx->pc = 0x18F478u;
    // 0x18f478: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x18f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f47c: 0x0  nop
    ctx->pc = 0x18f47cu;
    // NOP
    // 0x18f480: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18F480u;
    {
        const bool branch_taken_0x18f480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f480) {
            ctx->pc = 0x18F484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F480u;
            // 0x18f484: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f470;
        }
    }
    ctx->pc = 0x18F488u;
    // 0x18f488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f48c:
    // 0x18f48c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18F48Cu;
    {
        const bool branch_taken_0x18f48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f48c) {
            ctx->pc = 0x18F490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F48Cu;
            // 0x18f490: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F4DCu;
            goto label_18f4dc;
        }
    }
    ctx->pc = 0x18F494u;
    // 0x18f494: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18f498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F498u;
    {
        const bool branch_taken_0x18f498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F498u;
        // 0x18f49c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f498) {
            ctx->pc = 0x18F4A8u;
            goto label_18f4a8;
        }
    }
    ctx->pc = 0x18F4A0u;
    // 0x18f4a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F4A0u;
    {
        const bool branch_taken_0x18f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4A0u;
        // 0x18f4a4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4a0) {
            ctx->pc = 0x18F4ACu;
            goto label_18f4ac;
        }
    }
    ctx->pc = 0x18F4A8u;
label_18f4a8:
    // 0x18f4a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18f4ac:
    // 0x18f4ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f4b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F4B0u;
    {
        const bool branch_taken_0x18f4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B0u;
        // 0x18f4b4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4b0) {
            ctx->pc = 0x18F4C0u;
            goto label_18f4c0;
        }
    }
    ctx->pc = 0x18F4B8u;
    // 0x18f4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F4B8u;
    {
        const bool branch_taken_0x18f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B8u;
        // 0x18f4bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4b8) {
            ctx->pc = 0x18F4C4u;
            goto label_18f4c4;
        }
    }
    ctx->pc = 0x18F4C0u;
label_18f4c0:
    // 0x18f4c0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18f4c4:
    // 0x18f4c4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18F4C4u;
    SET_GPR_U32(ctx, 31, 0x18F4CCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F4C4u, 0x18F4CCu)) {
        return;
    }
    ctx->pc = 0x18F4CCu;
label_18f4cc:
    // 0x18f4cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18f4d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f4d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18f4d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18f4dc:
    // 0x18f4dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F4DCu;
    {
        const bool branch_taken_0x18f4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f4dc) {
            ctx->pc = 0x18F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F4DCu;
            // 0x18f4e0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F4F0u;
            goto label_18f4f0;
        }
    }
    ctx->pc = 0x18F4E4u;
    // 0x18f4e4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18F4E4u;
    SET_GPR_U32(ctx, 31, 0x18F4ECu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F4E4u, 0x18F4ECu)) {
        return;
    }
    ctx->pc = 0x18F4ECu;
label_18f4ec:
    // 0x18f4ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x18f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_18f4f0:
    // 0x18f4f0: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x18F4F0u;
    SET_GPR_U32(ctx, 31, 0x18F4F8u);
    ctx->pc = 0x18F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4F0u;
    // 0x18f4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x18F4F0u, 0x18F4F8u)) {
        return;
    }
    ctx->pc = 0x18F4F8u;
label_18f4f8:
    // 0x18f4f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18f4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f4fc:
    // 0x18f4fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18f4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f500:
    // 0x18f500: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18f500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18f504:
    // 0x18f504: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18f504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f508: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18f508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f50c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f50cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f514: 0x3e00008  jr          $ra
    ctx->pc = 0x18F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F514u;
        // 0x18f518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F51Cu;
    // 0x18f51c: 0x0  nop
    ctx->pc = 0x18f51cu;
    // NOP
    ctx->pc = 0x18f520u;
}
