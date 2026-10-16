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

// Function: sub_001DD5D8
// Address: 0x1dd5d8 - 0x1dd620
void sub_001DD5D8_0x1dd5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD5D8_0x1dd5d8");
#endif

    switch (ctx->pc) {
        case 0x1dd608u: goto label_1dd608;
        default: break;
    }

    ctx->pc = 0x1dd5d8u;

    // 0x1dd5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd5dc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1dd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1dd5e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd5e4: 0x8c62e664  lw          $v0, -0x199C($v1)
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dd5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd5f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dd5f4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1dd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd5f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD5F8u;
    {
        const bool branch_taken_0x1dd5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5F8u;
        // 0x1dd5fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f8) {
            ctx->pc = 0x1DD60Cu;
            goto label_1dd60c;
        }
    }
    ctx->pc = 0x1DD600u;
    // 0x1dd600: 0xc076c90  jal         func_1DB240
    ctx->pc = 0x1DD600u;
    SET_GPR_U32(ctx, 31, 0x1DD608u);
    ctx->pc = 0x1DB240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB240u, 0x1DD600u, 0x1DD608u)) {
        return;
    }
    ctx->pc = 0x1DD608u;
label_1dd608:
    // 0x1dd608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd60c:
    // 0x1dd60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd614: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD614u;
        // 0x1dd618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD61Cu;
    // 0x1dd61c: 0x0  nop
    ctx->pc = 0x1dd61cu;
    // NOP
    ctx->pc = 0x1dd620u;
}
