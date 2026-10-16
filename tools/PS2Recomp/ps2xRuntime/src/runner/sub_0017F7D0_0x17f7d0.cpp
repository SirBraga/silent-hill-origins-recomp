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

// Function: sub_0017F7D0
// Address: 0x17f7d0 - 0x17f820
void sub_0017F7D0_0x17f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F7D0_0x17f7d0");
#endif

    switch (ctx->pc) {
        case 0x17f7e8u: goto label_17f7e8;
        case 0x17f810u: goto label_17f810;
        default: break;
    }

    ctx->pc = 0x17f7d0u;

    // 0x17f7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f7d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f7d8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17f7dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f7e0: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x17F7E0u;
    SET_GPR_U32(ctx, 31, 0x17F7E8u);
    ctx->pc = 0x17F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7E0u;
    // 0x17f7e4: 0xae048994  sw          $a0, -0x766C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936980), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x17F7E0u, 0x17F7E8u)) {
        return;
    }
    ctx->pc = 0x17F7E8u;
label_17f7e8:
    // 0x17f7e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f7f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17f7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17f7f4: 0x8e028994  lw          $v0, -0x766C($s0)
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936980)));
    // 0x17f7f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F7F8u;
    {
        const bool branch_taken_0x17f7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7f8) {
            ctx->pc = 0x17F808u;
            goto label_17f808;
        }
    }
    ctx->pc = 0x17F800u;
    // 0x17f800: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x17f804: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17f804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17f808:
    // 0x17f808: 0xc056202  jal         func_158808
    ctx->pc = 0x17F808u;
    SET_GPR_U32(ctx, 31, 0x17F810u);
    ctx->pc = 0x158808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158808u, 0x17F808u, 0x17F810u)) {
        return;
    }
    ctx->pc = 0x17F810u;
label_17f810:
    // 0x17f810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f818: 0x3e00008  jr          $ra
    ctx->pc = 0x17F818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F818u;
        // 0x17f81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F820u;
}
