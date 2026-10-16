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

// Function: sub_002DF588
// Address: 0x2df588 - 0x2df5d8
void sub_002DF588_0x2df588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF588_0x2df588");
#endif

    switch (ctx->pc) {
        case 0x2df5a4u: goto label_2df5a4;
        default: break;
    }

    ctx->pc = 0x2df588u;

    // 0x2df588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df58c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2df58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2df590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df59c: 0xc0b7d9a  jal         func_2DF668
    ctx->pc = 0x2DF59Cu;
    SET_GPR_U32(ctx, 31, 0x2DF5A4u);
    ctx->pc = 0x2DF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF59Cu;
    // 0x2df5a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF668u, 0x2DF59Cu, 0x2DF5A4u)) {
        return;
    }
    ctx->pc = 0x2DF5A4u;
label_2df5a4:
    // 0x2df5a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2df5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df5a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df5ac: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2df5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2df5b0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2df5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2df5b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2df5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df5bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df5c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2df5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2df5c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2df5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5CCu;
        // 0x2df5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF5D4u;
    // 0x2df5d4: 0x0  nop
    ctx->pc = 0x2df5d4u;
    // NOP
    ctx->pc = 0x2df5d8u;
}
