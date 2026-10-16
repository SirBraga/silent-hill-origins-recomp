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

// Function: sub_001DBFF0
// Address: 0x1dbff0 - 0x1dc028
void sub_001DBFF0_0x1dbff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBFF0_0x1dbff0");
#endif

    switch (ctx->pc) {
        case 0x1dc014u: goto label_1dc014;
        default: break;
    }

    ctx->pc = 0x1dbff0u;

    // 0x1dbff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbffc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBFFCu;
    {
        const bool branch_taken_0x1dbffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFFCu;
        // 0x1dc000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbffc) {
            ctx->pc = 0x1DC014u;
            goto label_1dc014;
        }
    }
    ctx->pc = 0x1DC004u;
    // 0x1dc004: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC004u;
    {
        const bool branch_taken_0x1dc004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc004) {
            ctx->pc = 0x1DC018u;
            goto label_1dc018;
        }
    }
    ctx->pc = 0x1DC00Cu;
    // 0x1dc00c: 0xc076fb6  jal         func_1DBED8
    ctx->pc = 0x1DC00Cu;
    SET_GPR_U32(ctx, 31, 0x1DC014u);
    ctx->pc = 0x1DC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC00Cu;
    // 0x1dc010: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBED8u, 0x1DC00Cu, 0x1DC014u)) {
        return;
    }
    ctx->pc = 0x1DC014u;
label_1dc014:
    // 0x1dc014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc018:
    // 0x1dc018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc01c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dc01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc020: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC020u;
        // 0x1dc024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC028u;
}
