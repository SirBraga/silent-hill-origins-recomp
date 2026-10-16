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

// Function: sub_00252D90
// Address: 0x252d90 - 0x252df8
void sub_00252D90_0x252d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D90_0x252d90");
#endif

    switch (ctx->pc) {
        case 0x252dc8u: goto label_252dc8;
        default: break;
    }

    ctx->pc = 0x252d90u;

    // 0x252d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252d94: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x252d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252d9c: 0x8c43561c  lw          $v1, 0x561C($v0)
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252da4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252dac: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x252dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x252db0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x252db4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252DB4u;
    {
        const bool branch_taken_0x252db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB4u;
        // 0x252db8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252db4) {
            ctx->pc = 0x252DD0u;
            goto label_252dd0;
        }
    }
    ctx->pc = 0x252DBCu;
    // 0x252dbc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x252dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x252dc0: 0xc0971f8  jal         func_25C7E0
    ctx->pc = 0x252DC0u;
    SET_GPR_U32(ctx, 31, 0x252DC8u);
    ctx->pc = 0x252DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DC0u;
    // 0x252dc4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C7E0u, 0x252DC0u, 0x252DC8u)) {
        return;
    }
    ctx->pc = 0x252DC8u;
label_252dc8:
    // 0x252dc8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x252dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x252dcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252dd0:
    // 0x252dd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x252DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DDCu;
        // 0x252de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252DE4u;
    // 0x252de4: 0x0  nop
    ctx->pc = 0x252de4u;
    // NOP
    // 0x252de8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252dec: 0x0  nop
    ctx->pc = 0x252decu;
    // NOP
    // 0x252df0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252df4: 0x0  nop
    ctx->pc = 0x252df4u;
    // NOP
    ctx->pc = 0x252df8u;
}
