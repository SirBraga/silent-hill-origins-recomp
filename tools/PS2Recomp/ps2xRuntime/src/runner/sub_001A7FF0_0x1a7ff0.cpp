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

// Function: sub_001A7FF0
// Address: 0x1a7ff0 - 0x1a8020
void sub_001A7FF0_0x1a7ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7FF0_0x1a7ff0");
#endif

    switch (ctx->pc) {
        case 0x1a8014u: goto label_1a8014;
        default: break;
    }

    ctx->pc = 0x1a7ff0u;

    // 0x1a7ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7ff4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7ffc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a7ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8000: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8004: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a8004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8008: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a800c: 0xc069d9e  jal         func_1A7678
    ctx->pc = 0x1A800Cu;
    SET_GPR_U32(ctx, 31, 0x1A8014u);
    ctx->pc = 0x1A8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A800Cu;
    // 0x1a8010: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7678u, 0x1A800Cu, 0x1A8014u)) {
        return;
    }
    ctx->pc = 0x1A8014u;
label_1a8014:
    // 0x1a8014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8018: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8018u;
        // 0x1a801c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8020u;
}
