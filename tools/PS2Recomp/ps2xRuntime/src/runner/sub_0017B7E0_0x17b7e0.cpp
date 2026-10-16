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

// Function: sub_0017B7E0
// Address: 0x17b7e0 - 0x17b888
void sub_0017B7E0_0x17b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B7E0_0x17b7e0");
#endif

    switch (ctx->pc) {
        case 0x17b80cu: goto label_17b80c;
        case 0x17b830u: goto label_17b830;
        case 0x17b840u: goto label_17b840;
        case 0x17b854u: goto label_17b854;
        case 0x17b86cu: goto label_17b86c;
        default: break;
    }

    ctx->pc = 0x17b7e0u;

    // 0x17b7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b7e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b7e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b7f0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17b7f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B7F4u;
    {
        const bool branch_taken_0x17b7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7F4u;
        // 0x17b7f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7f4) {
            ctx->pc = 0x17B804u;
            goto label_17b804;
        }
    }
    ctx->pc = 0x17B7FCu;
    // 0x17b7fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B7FCu;
    {
        const bool branch_taken_0x17b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7FCu;
        // 0x17b800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7fc) {
            ctx->pc = 0x17B810u;
            goto label_17b810;
        }
    }
    ctx->pc = 0x17B804u;
label_17b804:
    // 0x17b804: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17B804u;
    SET_GPR_U32(ctx, 31, 0x17B80Cu);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17B804u, 0x17B80Cu)) {
        return;
    }
    ctx->pc = 0x17B80Cu;
label_17b80c:
    // 0x17b80c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17b80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b810:
    // 0x17b810: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B810u;
    {
        const bool branch_taken_0x17b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B810u;
        // 0x17b814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b810) {
            ctx->pc = 0x17B870u;
            goto label_17b870;
        }
    }
    ctx->pc = 0x17B818u;
    // 0x17b818: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17b81c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17B81Cu;
    {
        const bool branch_taken_0x17b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B81Cu;
        // 0x17b820: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b81c) {
            ctx->pc = 0x17B84Cu;
            goto label_17b84c;
        }
    }
    ctx->pc = 0x17B824u;
    // 0x17b824: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b828: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x17B828u;
    SET_GPR_U32(ctx, 31, 0x17B830u);
    ctx->pc = 0x17B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B828u;
    // 0x17b82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x17B828u, 0x17B830u)) {
        return;
    }
    ctx->pc = 0x17B830u;
label_17b830:
    // 0x17b830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B830u;
    {
        const bool branch_taken_0x17b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B830u;
        // 0x17b834: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b830) {
            ctx->pc = 0x17B840u;
            goto label_17b840;
        }
    }
    ctx->pc = 0x17B838u;
    // 0x17b838: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x17B838u;
    SET_GPR_U32(ctx, 31, 0x17B840u);
    ctx->pc = 0x17B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B838u;
    // 0x17b83c: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x17B838u, 0x17B840u)) {
        return;
    }
    ctx->pc = 0x17B840u;
label_17b840:
    // 0x17b840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b844: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17B844u;
    {
        const bool branch_taken_0x17b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B844u;
        // 0x17b848: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b844) {
            ctx->pc = 0x17B86Cu;
            goto label_17b86c;
        }
    }
    ctx->pc = 0x17B84Cu;
label_17b84c:
    // 0x17b84c: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x17B84Cu;
    SET_GPR_U32(ctx, 31, 0x17B854u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x17B84Cu, 0x17B854u)) {
        return;
    }
    ctx->pc = 0x17B854u;
label_17b854:
    // 0x17b854: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B854u;
    {
        const bool branch_taken_0x17b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B854u;
        // 0x17b858: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b854) {
            ctx->pc = 0x17B870u;
            goto label_17b870;
        }
    }
    ctx->pc = 0x17B85Cu;
    // 0x17b85c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17b860: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b864: 0xc07bee4  jal         func_1EFB90
    ctx->pc = 0x17B864u;
    SET_GPR_U32(ctx, 31, 0x17B86Cu);
    ctx->pc = 0x17B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B864u;
    // 0x17b868: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB90u, 0x17B864u, 0x17B86Cu)) {
        return;
    }
    ctx->pc = 0x17B86Cu;
label_17b86c:
    // 0x17b86c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b870:
    // 0x17b870: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b87c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B87Cu;
        // 0x17b880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B884u;
    // 0x17b884: 0x0  nop
    ctx->pc = 0x17b884u;
    // NOP
    ctx->pc = 0x17b888u;
}
