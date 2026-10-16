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

// Function: sub_0030D7A0
// Address: 0x30d7a0 - 0x30d888
void sub_0030D7A0_0x30d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7A0_0x30d7a0");
#endif

    switch (ctx->pc) {
        case 0x30d7d4u: goto label_30d7d4;
        case 0x30d808u: goto label_30d808;
        case 0x30d824u: goto label_30d824;
        default: break;
    }

    ctx->pc = 0x30d7a0u;

    // 0x30d7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d7a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d7ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30d7bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d7c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D7C0u;
    {
        const bool branch_taken_0x30d7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7C0u;
        // 0x30d7c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7c0) {
            ctx->pc = 0x30D7E0u;
            goto label_30d7e0;
        }
    }
    ctx->pc = 0x30D7C8u;
    // 0x30d7c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30d7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7cc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D7CCu;
    SET_GPR_U32(ctx, 31, 0x30D7D4u);
    ctx->pc = 0x30D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7CCu;
    // 0x30d7d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D7CCu, 0x30D7D4u)) {
        return;
    }
    ctx->pc = 0x30D7D4u;
label_30d7d4:
    // 0x30d7d4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x30D7D4u;
    {
        const bool branch_taken_0x30d7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7D4u;
        // 0x30d7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7d4) {
            ctx->pc = 0x30D870u;
            goto label_30d870;
        }
    }
    ctx->pc = 0x30D7DCu;
    // 0x30d7dc: 0x0  nop
    ctx->pc = 0x30d7dcu;
    // NOP
label_30d7e0:
    // 0x30d7e0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x30d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x30d7e4: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30d7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30d7e8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x30d7ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d7f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d7f4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30D7F4u;
    {
        const bool branch_taken_0x30d7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7F4u;
        // 0x30d7f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d7f4) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D7FCu;
    // 0x30d7fc: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x30d7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x30d800: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D800u;
    SET_GPR_U32(ctx, 31, 0x30D808u);
    ctx->pc = 0x30D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D800u;
    // 0x30d804: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D800u, 0x30D808u)) {
        return;
    }
    ctx->pc = 0x30D808u;
label_30d808:
    // 0x30d808: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30D808u;
    {
        const bool branch_taken_0x30d808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D808u;
        // 0x30d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d808) {
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D810u;
    // 0x30d810: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d814: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D814u;
    {
        const bool branch_taken_0x30d814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D814u;
        // 0x30d818: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d814) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D81Cu;
    // 0x30d81c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30D81Cu;
    SET_GPR_U32(ctx, 31, 0x30D824u);
    ctx->pc = 0x30D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D81Cu;
    // 0x30d820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30D81Cu, 0x30D824u)) {
        return;
    }
    ctx->pc = 0x30D824u;
label_30d824:
    // 0x30d824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D824u;
    {
        const bool branch_taken_0x30d824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d824) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D82Cu;
    // 0x30d82c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D830u;
    {
        const bool branch_taken_0x30d830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D830u;
        // 0x30d834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d830) {
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D838u;
label_30d838:
    // 0x30d838: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D838u;
    {
        const bool branch_taken_0x30d838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D838u;
        // 0x30d83c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d838) {
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D840u;
    // 0x30d840: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d844: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30d848: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d850:
    // 0x30d850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D850u;
    {
        const bool branch_taken_0x30d850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D850u;
        // 0x30d854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d850) {
            ctx->pc = 0x30D870u;
            goto label_30d870;
        }
    }
    ctx->pc = 0x30D858u;
    // 0x30d858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D858u;
    {
        const bool branch_taken_0x30d858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D858u;
        // 0x30d85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d858) {
            ctx->pc = 0x30D870u;
            goto label_30d870;
        }
    }
    ctx->pc = 0x30D860u;
    // 0x30d860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d864: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d868: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d870:
    // 0x30d870: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d87c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D87Cu;
        // 0x30d880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D884u;
    // 0x30d884: 0x0  nop
    ctx->pc = 0x30d884u;
    // NOP
    ctx->pc = 0x30d888u;
}
