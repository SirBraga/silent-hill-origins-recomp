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

// Function: sub_001DBAE8
// Address: 0x1dbae8 - 0x1dbb20
void sub_001DBAE8_0x1dbae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBAE8_0x1dbae8");
#endif

    switch (ctx->pc) {
        case 0x1dbb0cu: goto label_1dbb0c;
        default: break;
    }

    ctx->pc = 0x1dbae8u;

    // 0x1dbae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbaec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbaf4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBAF4u;
    {
        const bool branch_taken_0x1dbaf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF4u;
        // 0x1dbaf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaf4) {
            ctx->pc = 0x1DBB0Cu;
            goto label_1dbb0c;
        }
    }
    ctx->pc = 0x1DBAFCu;
    // 0x1dbafc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBAFCu;
    {
        const bool branch_taken_0x1dbafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAFCu;
        // 0x1dbb00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbafc) {
            ctx->pc = 0x1DBB10u;
            goto label_1dbb10;
        }
    }
    ctx->pc = 0x1DBB04u;
    // 0x1dbb04: 0xc076ed4  jal         func_1DBB50
    ctx->pc = 0x1DBB04u;
    SET_GPR_U32(ctx, 31, 0x1DBB0Cu);
    ctx->pc = 0x1DBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB04u;
    // 0x1dbb08: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBB50u, 0x1DBB04u, 0x1DBB0Cu)) {
        return;
    }
    ctx->pc = 0x1DBB0Cu;
label_1dbb0c:
    // 0x1dbb0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dbb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb10:
    // 0x1dbb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbb14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dbb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbb18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB18u;
        // 0x1dbb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB20u;
}
