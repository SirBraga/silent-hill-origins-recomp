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

// Function: sub_001DBC40
// Address: 0x1dbc40 - 0x1dbc78
void sub_001DBC40_0x1dbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBC40_0x1dbc40");
#endif

    switch (ctx->pc) {
        case 0x1dbc64u: goto label_1dbc64;
        default: break;
    }

    ctx->pc = 0x1dbc40u;

    // 0x1dbc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbc48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbc4c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBC4Cu;
    {
        const bool branch_taken_0x1dbc4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC4Cu;
        // 0x1dbc50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc4c) {
            ctx->pc = 0x1DBC64u;
            goto label_1dbc64;
        }
    }
    ctx->pc = 0x1DBC54u;
    // 0x1dbc54: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC54u;
    {
        const bool branch_taken_0x1dbc54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC54u;
        // 0x1dbc58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc54) {
            ctx->pc = 0x1DBC68u;
            goto label_1dbc68;
        }
    }
    ctx->pc = 0x1DBC5Cu;
    // 0x1dbc5c: 0xc076f3a  jal         func_1DBCE8
    ctx->pc = 0x1DBC5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC64u);
    ctx->pc = 0x1DBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC5Cu;
    // 0x1dbc60: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBCE8u, 0x1DBC5Cu, 0x1DBC64u)) {
        return;
    }
    ctx->pc = 0x1DBC64u;
label_1dbc64:
    // 0x1dbc64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dbc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc68:
    // 0x1dbc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dbc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC70u;
        // 0x1dbc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC78u;
}
