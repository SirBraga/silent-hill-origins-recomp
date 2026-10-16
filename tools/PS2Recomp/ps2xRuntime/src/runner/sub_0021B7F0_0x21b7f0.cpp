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

// Function: sub_0021B7F0
// Address: 0x21b7f0 - 0x21b878
void sub_0021B7F0_0x21b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B7F0_0x21b7f0");
#endif

    switch (ctx->pc) {
        case 0x21b830u: goto label_21b830;
        case 0x21b858u: goto label_21b858;
        default: break;
    }

    ctx->pc = 0x21b7f0u;

    // 0x21b7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b7f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21b7f8: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x21b7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b800: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x21b800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C02C8u));
    // 0x21b804: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B804u;
    {
        const bool branch_taken_0x21b804 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x21B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B804u;
        // 0x21b808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b804) {
            ctx->pc = 0x21B868u;
            goto label_21b868;
        }
    }
    ctx->pc = 0x21B80Cu;
    // 0x21b80c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b810: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x21b810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x21b814: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x21b818: 0x24c6b468  addiu       $a2, $a2, -0x4B98
    ctx->pc = 0x21b818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947944));
    // 0x21b81c: 0x24e7b4b8  addiu       $a3, $a3, -0x4B48
    ctx->pc = 0x21b81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948024));
    // 0x21b820: 0x2508b478  addiu       $t0, $t0, -0x4B88
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947960));
    // 0x21b824: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b828: 0xc095b24  jal         func_256C90
    ctx->pc = 0x21B828u;
    SET_GPR_U32(ctx, 31, 0x21B830u);
    ctx->pc = 0x21B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B828u;
    // 0x21b82c: 0x24051101  addiu       $a1, $zero, 0x1101 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x21B828u, 0x21B830u)) {
        return;
    }
    ctx->pc = 0x21B830u;
label_21b830:
    // 0x21b830: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B830u;
    {
        const bool branch_taken_0x21b830 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x21B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B830u;
        // 0x21b834: 0xae0202c8  sw          $v0, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b830) {
            ctx->pc = 0x21B864u;
            goto label_21b864;
        }
    }
    ctx->pc = 0x21B838u;
    // 0x21b838: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x21b83c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x21b840: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x21b840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x21b844: 0x24a5b500  addiu       $a1, $a1, -0x4B00
    ctx->pc = 0x21b844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948096));
    // 0x21b848: 0x24c6b670  addiu       $a2, $a2, -0x4990
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948464));
    // 0x21b84c: 0x24e7b760  addiu       $a3, $a3, -0x48A0
    ctx->pc = 0x21b84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948704));
    // 0x21b850: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x21B850u;
    SET_GPR_U32(ctx, 31, 0x21B858u);
    ctx->pc = 0x21B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B850u;
    // 0x21b854: 0x24041101  addiu       $a0, $zero, 0x1101 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x21B850u, 0x21B858u)) {
        return;
    }
    ctx->pc = 0x21B858u;
label_21b858:
    // 0x21b858: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x21b858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b85c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B85Cu;
    {
        const bool branch_taken_0x21b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B85Cu;
        // 0x21b860: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b85c) {
            ctx->pc = 0x21B868u;
            goto label_21b868;
        }
    }
    ctx->pc = 0x21B864u;
label_21b864:
    // 0x21b864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b868:
    // 0x21b868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21b868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b870: 0x3e00008  jr          $ra
    ctx->pc = 0x21B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B870u;
        // 0x21b874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B878u;
}
