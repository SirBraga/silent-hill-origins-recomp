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

// Function: sub_00259018
// Address: 0x259018 - 0x259070
void sub_00259018_0x259018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259018_0x259018");
#endif

    switch (ctx->pc) {
        case 0x259030u: goto label_259030;
        default: break;
    }

    ctx->pc = 0x259018u;

    // 0x259018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25901c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259028: 0xc096314  jal         func_258C50
    ctx->pc = 0x259028u;
    SET_GPR_U32(ctx, 31, 0x259030u);
    ctx->pc = 0x25902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259028u;
    // 0x25902c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258C50u, 0x259028u, 0x259030u)) {
        return;
    }
    ctx->pc = 0x259030u;
label_259030:
    // 0x259030: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259030u;
    {
        const bool branch_taken_0x259030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259030) {
            ctx->pc = 0x259034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259030u;
            // 0x259034: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259048u;
            goto label_259048;
        }
    }
    ctx->pc = 0x259038u;
    // 0x259038: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x259038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25903c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x259040: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259040u;
    {
        const bool branch_taken_0x259040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259040u;
        // 0x259044: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259040) {
            ctx->pc = 0x25905Cu;
            goto label_25905c;
        }
    }
    ctx->pc = 0x259048u;
label_259048:
    // 0x259048: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x259048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25904c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25904cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259050: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x259050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x259054: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x259054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x259058: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x259058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25905c:
    // 0x25905c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25905cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259064: 0x3e00008  jr          $ra
    ctx->pc = 0x259064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259064u;
        // 0x259068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25906Cu;
    // 0x25906c: 0x0  nop
    ctx->pc = 0x25906cu;
    // NOP
    ctx->pc = 0x259070u;
}
