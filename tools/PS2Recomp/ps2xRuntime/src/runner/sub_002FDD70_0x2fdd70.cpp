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

// Function: sub_002FDD70
// Address: 0x2fdd70 - 0x2fddc8
void sub_002FDD70_0x2fdd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDD70_0x2fdd70");
#endif

    switch (ctx->pc) {
        case 0x2fdda8u: goto label_2fdda8;
        case 0x2fddb8u: goto label_2fddb8;
        default: break;
    }

    ctx->pc = 0x2fdd70u;

    // 0x2fdd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdd74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdd78: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x2fdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x2fdd7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FDD7Cu;
    {
        const bool branch_taken_0x2fdd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd7c) {
            ctx->pc = 0x2FDDB0u;
            goto label_2fddb0;
        }
    }
    ctx->pc = 0x2FDD84u;
    // 0x2fdd84: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FDD84u;
    {
        const bool branch_taken_0x2fdd84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdd84) {
            ctx->pc = 0x2FDDB0u;
            goto label_2fddb0;
        }
    }
    ctx->pc = 0x2FDD8Cu;
    // 0x2fdd8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fdd90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDD90u;
    {
        const bool branch_taken_0x2fdd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD90u;
        // 0x2fdd94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd90) {
            ctx->pc = 0x2FDDB0u;
            goto label_2fddb0;
        }
    }
    ctx->pc = 0x2FDD98u;
    // 0x2fdd98: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2fdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2fdd9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2fdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2fdda0: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FDDA0u;
    SET_GPR_U32(ctx, 31, 0x2FDDA8u);
    ctx->pc = 0x2FDDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDA0u;
    // 0x2fdda4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FDDA0u, 0x2FDDA8u)) {
        return;
    }
    ctx->pc = 0x2FDDA8u;
label_2fdda8:
    // 0x2fdda8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDDA8u;
    {
        const bool branch_taken_0x2fdda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDA8u;
        // 0x2fddac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdda8) {
            ctx->pc = 0x2FDDBCu;
            goto label_2fddbc;
        }
    }
    ctx->pc = 0x2FDDB0u;
label_2fddb0:
    // 0x2fddb0: 0xc0bf6fe  jal         func_2FDBF8
    ctx->pc = 0x2FDDB0u;
    SET_GPR_U32(ctx, 31, 0x2FDDB8u);
    ctx->pc = 0x2FDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDB0u;
    // 0x2fddb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDBF8u, 0x2FDDB0u, 0x2FDDB8u)) {
        return;
    }
    ctx->pc = 0x2FDDB8u;
label_2fddb8:
    // 0x2fddb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fddb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fddbc:
    // 0x2fddbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDBCu;
        // 0x2fddc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDDC4u;
    // 0x2fddc4: 0x0  nop
    ctx->pc = 0x2fddc4u;
    // NOP
    ctx->pc = 0x2fddc8u;
}
