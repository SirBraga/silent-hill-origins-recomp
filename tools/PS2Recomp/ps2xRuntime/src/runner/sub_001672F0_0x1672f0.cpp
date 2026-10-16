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

// Function: sub_001672F0
// Address: 0x1672f0 - 0x167328
void sub_001672F0_0x1672f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672F0_0x1672f0");
#endif

    switch (ctx->pc) {
        case 0x16731cu: goto label_16731c;
        default: break;
    }

    ctx->pc = 0x1672f0u;

    // 0x1672f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1672f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1672f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1672f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1672f8: 0xe48c0050  swc1        $f12, 0x50($a0)
    ctx->pc = 0x1672f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1672fc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1672fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x167300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x167300u;
    {
        const bool branch_taken_0x167300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167300u;
        // 0x167304: 0xe48d004c  swc1        $f13, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167300) {
            ctx->pc = 0x16731Cu;
            goto label_16731c;
        }
    }
    ctx->pc = 0x167308u;
    // 0x167308: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x167308u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16730c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167310: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x167310u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x167314: 0xc089456  jal         func_225158
    ctx->pc = 0x167314u;
    SET_GPR_U32(ctx, 31, 0x16731Cu);
    ctx->pc = 0x167318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167314u;
    // 0x167318: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x167314u, 0x16731Cu)) {
        return;
    }
    ctx->pc = 0x16731Cu;
label_16731c:
    // 0x16731c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16731cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167320: 0x3e00008  jr          $ra
    ctx->pc = 0x167320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167320u;
        // 0x167324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167328u;
}
