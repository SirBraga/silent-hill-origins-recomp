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

// Function: sub_0021A758
// Address: 0x21a758 - 0x21aa50
void sub_0021A758_0x21a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A758_0x21a758");
#endif

    switch (ctx->pc) {
        case 0x21a7a4u: goto label_21a7a4;
        case 0x21a7bcu: goto label_21a7bc;
        case 0x21a7d8u: goto label_21a7d8;
        case 0x21a800u: goto label_21a800;
        case 0x21a884u: goto label_21a884;
        case 0x21a8acu: goto label_21a8ac;
        case 0x21a8e8u: goto label_21a8e8;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a9c0u: goto label_21a9c0;
        case 0x21a9ccu: goto label_21a9cc;
        default: break;
    }

    ctx->pc = 0x21a758u;

    // 0x21a758: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21a75c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x21a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x21a760: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x21a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x21a764: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21a764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a768: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21a76c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x21a76cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a770: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x21a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x21a774: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x21a774u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a778: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x21a778u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a77c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x21a780: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x21a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x21a784: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x21a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a788: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x21a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x21a78c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a790: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x21a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x21a794: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x21a794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x21a798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a79c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21A79Cu;
    SET_GPR_U32(ctx, 31, 0x21A7A4u);
    ctx->pc = 0x21A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A79Cu;
    // 0x21a7a0: 0xafa80020  sw          $t0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21A79Cu, 0x21A7A4u)) {
        return;
    }
    ctx->pc = 0x21A7A4u;
label_21a7a4:
    // 0x21a7a4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x21a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x21a7a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x21a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a7ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a7b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21a7b4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21A7B4u;
    SET_GPR_U32(ctx, 31, 0x21A7BCu);
    ctx->pc = 0x21A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A7B4u;
    // 0x21a7b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21A7B4u, 0x21A7BCu)) {
        return;
    }
    ctx->pc = 0x21A7BCu;
label_21a7bc:
    // 0x21a7bc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x21a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x21a7c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21a7c4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x21a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a7c8: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x21A7C8u;
    {
        const bool branch_taken_0x21a7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7C8u;
        // 0x21a7cc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7c8) {
            ctx->pc = 0x21AA18u;
            goto label_21aa18;
        }
    }
    ctx->pc = 0x21A7D0u;
    // 0x21a7d0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21a7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a7d4: 0x0  nop
    ctx->pc = 0x21a7d4u;
    // NOP
label_21a7d8:
    // 0x21a7d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A7D8u;
    {
        const bool branch_taken_0x21a7d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D8u;
        // 0x21a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7d8) {
            ctx->pc = 0x21A7F8u;
            goto label_21a7f8;
        }
    }
    ctx->pc = 0x21A7E0u;
    // 0x21a7e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21a7e4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x21a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x21a7e8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x21a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21a7ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x21a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x21a7f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a7f4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x21a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_21a7f8:
    // 0x21a7f8: 0xc0868a2  jal         func_21A288
    ctx->pc = 0x21A7F8u;
    SET_GPR_U32(ctx, 31, 0x21A800u);
    ctx->pc = 0x21A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A7F8u;
    // 0x21a7fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A288u, 0x21A7F8u, 0x21A800u)) {
        return;
    }
    ctx->pc = 0x21A800u;
label_21a800:
    // 0x21a800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a808: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21A808u;
    {
        const bool branch_taken_0x21a808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A808u;
        // 0x21a80c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a808) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A810u;
    // 0x21a810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A810u;
    {
        const bool branch_taken_0x21a810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A810u;
        // 0x21a814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a810) {
            ctx->pc = 0x21A828u;
            goto label_21a828;
        }
    }
    ctx->pc = 0x21A818u;
    // 0x21a818: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A818u;
    {
        const bool branch_taken_0x21a818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a818) {
            ctx->pc = 0x21A840u;
            goto label_21a840;
        }
    }
    ctx->pc = 0x21A820u;
    // 0x21a820: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x21A820u;
    {
        const bool branch_taken_0x21a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A820u;
        // 0x21a824: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a820) {
            ctx->pc = 0x21AA10u;
            goto label_21aa10;
        }
    }
    ctx->pc = 0x21A828u;
label_21a828:
    // 0x21a828: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21A828u;
    {
        const bool branch_taken_0x21a828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A828u;
        // 0x21a82c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a828) {
            ctx->pc = 0x21A870u;
            goto label_21a870;
        }
    }
    ctx->pc = 0x21A830u;
    // 0x21a830: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21A830u;
    {
        const bool branch_taken_0x21a830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a830) {
            ctx->pc = 0x21A8A4u;
            goto label_21a8a4;
        }
    }
    ctx->pc = 0x21A838u;
    // 0x21a838: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x21A838u;
    {
        const bool branch_taken_0x21a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A838u;
        // 0x21a83c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a838) {
            ctx->pc = 0x21AA10u;
            goto label_21aa10;
        }
    }
    ctx->pc = 0x21A840u;
label_21a840:
    // 0x21a840: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x21A840u;
    {
        const bool branch_taken_0x21a840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A840u;
        // 0x21a844: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a840) {
            ctx->pc = 0x21AA0Cu;
            goto label_21aa0c;
        }
    }
    ctx->pc = 0x21A848u;
    // 0x21a848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a84c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21a850: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x21A850u;
    {
        const bool branch_taken_0x21a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A850u;
        // 0x21a854: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a850) {
            ctx->pc = 0x21AA00u;
            goto label_21aa00;
        }
    }
    ctx->pc = 0x21A858u;
label_21a858:
    // 0x21a858: 0x1200006c  beqz        $s0, . + 4 + (0x6C << 2)
    ctx->pc = 0x21A858u;
    {
        const bool branch_taken_0x21a858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A858u;
        // 0x21a85c: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a858) {
            ctx->pc = 0x21AA0Cu;
            goto label_21aa0c;
        }
    }
    ctx->pc = 0x21A860u;
    // 0x21a860: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a864: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21a864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21a868: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x21A868u;
    {
        const bool branch_taken_0x21a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A868u;
        // 0x21a86c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a868) {
            ctx->pc = 0x21AA00u;
            goto label_21aa00;
        }
    }
    ctx->pc = 0x21A870u;
label_21a870:
    // 0x21a870: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a874: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A874u;
    {
        const bool branch_taken_0x21a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a874) {
            ctx->pc = 0x21A88Cu;
            goto label_21a88c;
        }
    }
    ctx->pc = 0x21A87Cu;
    // 0x21a87c: 0xc086cc6  jal         func_21B318
    ctx->pc = 0x21A87Cu;
    SET_GPR_U32(ctx, 31, 0x21A884u);
    ctx->pc = 0x21A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A87Cu;
    // 0x21a880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B318u, 0x21A87Cu, 0x21A884u)) {
        return;
    }
    ctx->pc = 0x21A884u;
label_21a884:
    // 0x21a884: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x21A884u;
    {
        const bool branch_taken_0x21a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A884u;
        // 0x21a888: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a884) {
            ctx->pc = 0x21AA10u;
            goto label_21aa10;
        }
    }
    ctx->pc = 0x21A88Cu;
label_21a88c:
    // 0x21a88c: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x21A88Cu;
    {
        const bool branch_taken_0x21a88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A88Cu;
        // 0x21a890: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a88c) {
            ctx->pc = 0x21AA0Cu;
            goto label_21aa0c;
        }
    }
    ctx->pc = 0x21A894u;
    // 0x21a894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a898: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21a898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21a89c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21A89Cu;
    {
        const bool branch_taken_0x21a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A89Cu;
        // 0x21a8a0: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a89c) {
            ctx->pc = 0x21AA00u;
            goto label_21aa00;
        }
    }
    ctx->pc = 0x21A8A4u;
label_21a8a4:
    // 0x21a8a4: 0xc086cb6  jal         func_21B2D8
    ctx->pc = 0x21A8A4u;
    SET_GPR_U32(ctx, 31, 0x21A8ACu);
    ctx->pc = 0x21B2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B2D8u, 0x21A8A4u, 0x21A8ACu)) {
        return;
    }
    ctx->pc = 0x21A8ACu;
label_21a8ac:
    // 0x21a8ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21a8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8b0: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A8B0u;
    {
        const bool branch_taken_0x21a8b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a8b0) {
            ctx->pc = 0x21A8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A8B0u;
            // 0x21a8b4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A8C0u;
            goto label_21a8c0;
        }
    }
    ctx->pc = 0x21A8B8u;
    // 0x21a8b8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21A8B8u;
    {
        const bool branch_taken_0x21a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8B8u;
        // 0x21a8bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8b8) {
            ctx->pc = 0x21A954u;
            goto label_21a954;
        }
    }
    ctx->pc = 0x21A8C0u;
label_21a8c0:
    // 0x21a8c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21a8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8c8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x21a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x21a8cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a8d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x21a8d4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21a8d8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x21a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x21a8dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a8e0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A8E0u;
    {
        const bool branch_taken_0x21a8e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E0u;
        // 0x21a8e4: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8e0) {
            ctx->pc = 0x21A950u;
            goto label_21a950;
        }
    }
    ctx->pc = 0x21A8E8u;
label_21a8e8:
    // 0x21a8e8: 0xc086cd2  jal         func_21B348
    ctx->pc = 0x21A8E8u;
    SET_GPR_U32(ctx, 31, 0x21A8F0u);
    ctx->pc = 0x21B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B348u, 0x21A8E8u, 0x21A8F0u)) {
        return;
    }
    ctx->pc = 0x21A8F0u;
label_21a8f0:
    // 0x21a8f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f4: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21A8F4u;
    {
        const bool branch_taken_0x21a8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a8f4) {
            ctx->pc = 0x21A8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A8F4u;
            // 0x21a8f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A954u;
            goto label_21a954;
        }
    }
    ctx->pc = 0x21A8FCu;
    // 0x21a8fc: 0x6a240007  ldl         $a0, 0x7($s1)
    ctx->pc = 0x21a8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21a900: 0x6e240000  ldr         $a0, 0x0($s1)
    ctx->pc = 0x21a900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21a904: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x21a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a908: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x21a908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a90c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x21a90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a910: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x21a910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x21a914: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21a914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21a918: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A918u;
    {
        const bool branch_taken_0x21a918 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A918u;
        // 0x21a91c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a918) {
            ctx->pc = 0x21A92Cu;
            goto label_21a92c;
        }
    }
    ctx->pc = 0x21A920u;
    // 0x21a920: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x21a920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x21a924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21A924u;
    {
        const bool branch_taken_0x21a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A924u;
        // 0x21a928: 0xac630010  sw          $v1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a924) {
            ctx->pc = 0x21A938u;
            goto label_21a938;
        }
    }
    ctx->pc = 0x21A92Cu;
label_21a92c:
    // 0x21a92c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x21a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x21a930: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x21a930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x21a934: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x21a934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_21a938:
    // 0x21a938: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a93c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21a940: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x21a940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a944: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21a944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a948: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21A948u;
    {
        const bool branch_taken_0x21a948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A948u;
        // 0x21a94c: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a948) {
            ctx->pc = 0x21A8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a8e8;
        }
    }
    ctx->pc = 0x21A950u;
label_21a950:
    // 0x21a950: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x21a950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a954:
    // 0x21a954: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x21a954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21a958: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x21a958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21a95c: 0x6ae4000f  ldl         $a0, 0xF($s7)
    ctx->pc = 0x21a95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21a960: 0x6ee40008  ldr         $a0, 0x8($s7)
    ctx->pc = 0x21a960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21a964: 0x6ae50017  ldl         $a1, 0x17($s7)
    ctx->pc = 0x21a964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21a968: 0x6ee50010  ldr         $a1, 0x10($s7)
    ctx->pc = 0x21a968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21a96c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x21a96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a970: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x21a970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a974: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x21a974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a978: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x21a978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a97c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x21a97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a980: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x21a980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21a984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a988: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21a988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a98c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x21a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a990: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x21a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a994: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x21a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21a998: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x21a998u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21a99c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x21a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a9a0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x21a9a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x21a9a4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x21a9a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x21a9a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21a9a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21a9ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x21a9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21a9b0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x21a9b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21a9b4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x21a9b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21a9b8: 0xc08691a  jal         func_21A468
    ctx->pc = 0x21A9B8u;
    SET_GPR_U32(ctx, 31, 0x21A9C0u);
    ctx->pc = 0x21A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9B8u;
    // 0x21a9bc: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A468u, 0x21A9B8u, 0x21A9C0u)) {
        return;
    }
    ctx->pc = 0x21A9C0u;
label_21a9c0:
    // 0x21a9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9c4: 0xc08691a  jal         func_21A468
    ctx->pc = 0x21A9C4u;
    SET_GPR_U32(ctx, 31, 0x21A9CCu);
    ctx->pc = 0x21A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9C4u;
    // 0x21a9c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A468u, 0x21A9C4u, 0x21A9CCu)) {
        return;
    }
    ctx->pc = 0x21A9CCu;
label_21a9cc:
    // 0x21a9cc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A9CCu;
    {
        const bool branch_taken_0x21a9cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9CCu;
        // 0x21a9d0: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9cc) {
            ctx->pc = 0x21A9ECu;
            goto label_21a9ec;
        }
    }
    ctx->pc = 0x21A9D4u;
    // 0x21a9d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a9d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x21a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21a9dc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x21a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x21a9e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21a9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a9e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_21a9ec:
    // 0x21a9ec: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A9ECu;
    {
        const bool branch_taken_0x21a9ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9ECu;
        // 0x21a9f0: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9ec) {
            ctx->pc = 0x21AA0Cu;
            goto label_21aa0c;
        }
    }
    ctx->pc = 0x21A9F4u;
    // 0x21a9f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a9f8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x21a9fc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_21aa00:
    // 0x21aa00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21aa04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21aa08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_21aa0c:
    // 0x21aa0c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21aa10:
    // 0x21aa10: 0x5440ff71  bnel        $v0, $zero, . + 4 + (-0x8F << 2)
    ctx->pc = 0x21AA10u;
    {
        const bool branch_taken_0x21aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa10) {
            ctx->pc = 0x21AA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AA10u;
            // 0x21aa14: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a7d8;
        }
    }
    ctx->pc = 0x21AA18u;
label_21aa18:
    // 0x21aa18: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x21aa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21aa1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa20: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x21aa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21aa24: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x21aa24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21aa28: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x21aa28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21aa2c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x21aa2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21aa30: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x21aa30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21aa34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21aa34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21aa38: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x21aa38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21aa3c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x21aa3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21aa40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x21AA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA44u;
        // 0x21aa48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AA4Cu;
    // 0x21aa4c: 0x0  nop
    ctx->pc = 0x21aa4cu;
    // NOP
    ctx->pc = 0x21aa50u;
}
