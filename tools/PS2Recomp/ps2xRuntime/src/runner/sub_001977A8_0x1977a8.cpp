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

// Function: sub_001977A8
// Address: 0x1977a8 - 0x1977e0
void sub_001977A8_0x1977a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001977A8_0x1977a8");
#endif

    switch (ctx->pc) {
        case 0x1977c8u: goto label_1977c8;
        default: break;
    }

    ctx->pc = 0x1977a8u;

    // 0x1977a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1977ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1977acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1977b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1977b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1977b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1977b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977b8: 0xae0709e0  sw          $a3, 0x9E0($s0)
    ctx->pc = 0x1977b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2528), GPR_U32(ctx, 7));
    // 0x1977bc: 0xae0609e4  sw          $a2, 0x9E4($s0)
    ctx->pc = 0x1977bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2532), GPR_U32(ctx, 6));
    // 0x1977c0: 0xc065e02  jal         func_197808
    ctx->pc = 0x1977C0u;
    SET_GPR_U32(ctx, 31, 0x1977C8u);
    ctx->pc = 0x1977C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1977C0u;
    // 0x1977c4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197808u, 0x1977C0u, 0x1977C8u)) {
        return;
    }
    ctx->pc = 0x1977C8u;
label_1977c8:
    // 0x1977c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1977c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1977ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1977d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1977d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1977D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1977D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977D4u;
        // 0x1977d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1977D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1977DCu;
    // 0x1977dc: 0x0  nop
    ctx->pc = 0x1977dcu;
    // NOP
    ctx->pc = 0x1977e0u;
}
