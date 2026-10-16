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

// Function: sub_0013BA58
// Address: 0x13ba58 - 0x13bad8
void sub_0013BA58_0x13ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BA58_0x13ba58");
#endif

    switch (ctx->pc) {
        case 0x13bab0u: goto label_13bab0;
        case 0x13bac4u: goto label_13bac4;
        default: break;
    }

    ctx->pc = 0x13ba58u;

    // 0x13ba58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ba5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ba60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13ba64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ba68: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x13ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ba6c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13BA6Cu;
    {
        const bool branch_taken_0x13ba6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA6Cu;
        // 0x13ba70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba6c) {
            ctx->pc = 0x13BAC4u;
            goto label_13bac4;
        }
    }
    ctx->pc = 0x13BA74u;
    // 0x13ba74: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13ba78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BA78u;
    {
        const bool branch_taken_0x13ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA78u;
        // 0x13ba7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba78) {
            ctx->pc = 0x13BA90u;
            goto label_13ba90;
        }
    }
    ctx->pc = 0x13BA80u;
    // 0x13ba80: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BA80u;
    {
        const bool branch_taken_0x13ba80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA80u;
        // 0x13ba84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba80) {
            ctx->pc = 0x13BAA4u;
            goto label_13baa4;
        }
    }
    ctx->pc = 0x13BA88u;
    // 0x13ba88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13BA88u;
    {
        const bool branch_taken_0x13ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA88u;
        // 0x13ba8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba88) {
            ctx->pc = 0x13BACCu;
            goto label_13bacc;
        }
    }
    ctx->pc = 0x13BA90u;
label_13ba90:
    // 0x13ba90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ba94: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BA94u;
    {
        const bool branch_taken_0x13ba94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA94u;
        // 0x13ba98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba94) {
            ctx->pc = 0x13BAB8u;
            goto label_13bab8;
        }
    }
    ctx->pc = 0x13BA9Cu;
    // 0x13ba9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BA9Cu;
    {
        const bool branch_taken_0x13ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA9Cu;
        // 0x13baa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba9c) {
            ctx->pc = 0x13BACCu;
            goto label_13bacc;
        }
    }
    ctx->pc = 0x13BAA4u;
label_13baa4:
    // 0x13baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13baa8: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x13BAA8u;
    SET_GPR_U32(ctx, 31, 0x13BAB0u);
    ctx->pc = 0x13BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAA8u;
    // 0x13baac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x13BAA8u, 0x13BAB0u)) {
        return;
    }
    ctx->pc = 0x13BAB0u;
label_13bab0:
    // 0x13bab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAB0u;
    {
        const bool branch_taken_0x13bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAB0u;
        // 0x13bab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bab0) {
            ctx->pc = 0x13BAC8u;
            goto label_13bac8;
        }
    }
    ctx->pc = 0x13BAB8u;
label_13bab8:
    // 0x13bab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13babc: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x13BABCu;
    SET_GPR_U32(ctx, 31, 0x13BAC4u);
    ctx->pc = 0x13BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BABCu;
    // 0x13bac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x13BABCu, 0x13BAC4u)) {
        return;
    }
    ctx->pc = 0x13BAC4u;
label_13bac4:
    // 0x13bac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13bac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bac8:
    // 0x13bac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bacc:
    // 0x13bacc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13baccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bad0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAD0u;
        // 0x13bad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BAD8u;
}
