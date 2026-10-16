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

// Function: sub_00108988
// Address: 0x108988 - 0x1089b8
void sub_00108988_0x108988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108988_0x108988");
#endif

    switch (ctx->pc) {
        case 0x1089acu: goto label_1089ac;
        default: break;
    }

    ctx->pc = 0x108988u;

    // 0x108988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10898c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x108990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108998: 0xe48d0030  swc1        $f13, 0x30($a0)
    ctx->pc = 0x108998u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x10899c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1089a0: 0xe48c002c  swc1        $f12, 0x2C($a0)
    ctx->pc = 0x1089a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1089a4: 0xc06ca72  jal         func_1B29C8
    ctx->pc = 0x1089A4u;
    SET_GPR_U32(ctx, 31, 0x1089ACu);
    ctx->pc = 0x1089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089A4u;
    // 0x1089a8: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x1089A4u, 0x1089ACu)) {
        return;
    }
    ctx->pc = 0x1089ACu;
label_1089ac:
    // 0x1089ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1089acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1089B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B0u;
        // 0x1089b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089B8u;
}
