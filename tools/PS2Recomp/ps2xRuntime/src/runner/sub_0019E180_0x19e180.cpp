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

// Function: sub_0019E180
// Address: 0x19e180 - 0x19e1f0
void sub_0019E180_0x19e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E180_0x19e180");
#endif

    switch (ctx->pc) {
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1dcu: goto label_19e1dc;
        default: break;
    }

    ctx->pc = 0x19e180u;

    // 0x19e180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e184: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19e188: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e18c: 0x2442aa68  addiu       $v0, $v0, -0x5598
    ctx->pc = 0x19e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945384));
    // 0x19e190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e19c: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19e19cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19e1a0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19e1a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1a8: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19e1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19e1ac: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19e1b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19e1b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e1b8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19e1bc: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19e1c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e1c4: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19e1c8: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x19E1C8u;
    SET_GPR_U32(ctx, 31, 0x19E1D0u);
    ctx->pc = 0x19E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1C8u;
    // 0x19e1cc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ABB0u, 0x19E1C8u, 0x19E1D0u)) {
        return;
    }
    ctx->pc = 0x19E1D0u;
label_19e1d0:
    // 0x19e1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1d4: 0xc080596  jal         func_201658
    ctx->pc = 0x19E1D4u;
    SET_GPR_U32(ctx, 31, 0x19E1DCu);
    ctx->pc = 0x19E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1D4u;
    // 0x19e1d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E1D4u, 0x19E1DCu)) {
        return;
    }
    ctx->pc = 0x19E1DCu;
label_19e1dc:
    // 0x19e1dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e1e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1E8u;
        // 0x19e1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E1F0u;
}
