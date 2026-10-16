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

// Function: sub_00194410
// Address: 0x194410 - 0x194458
void sub_00194410_0x194410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194410_0x194410");
#endif

    switch (ctx->pc) {
        case 0x194434u: goto label_194434;
        default: break;
    }

    ctx->pc = 0x194410u;

    // 0x194410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194418: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x19441c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19441cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194420: 0x8e028b48  lw          $v0, -0x74B8($s0)
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338B48u));
    // 0x194424: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x194424u;
    {
        const bool branch_taken_0x194424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194424) {
            ctx->pc = 0x194428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194424u;
            // 0x194428: 0xae008b48  sw          $zero, -0x74B8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294937416), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194438u;
            goto label_194438;
        }
    }
    ctx->pc = 0x19442Cu;
    // 0x19442c: 0xc0603b6  jal         func_180ED8
    ctx->pc = 0x19442Cu;
    SET_GPR_U32(ctx, 31, 0x194434u);
    ctx->pc = 0x180ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180ED8u, 0x19442Cu, 0x194434u)) {
        return;
    }
    ctx->pc = 0x194434u;
label_194434:
    // 0x194434: 0xae008b48  sw          $zero, -0x74B8($s0)
    ctx->pc = 0x194434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937416), GPR_U32(ctx, 0));
label_194438:
    // 0x194438: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19443c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19443cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194444: 0xac408b40  sw          $zero, -0x74C0($v0)
    ctx->pc = 0x194444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B40u, _value); } while (0);
    // 0x194448: 0x3e00008  jr          $ra
    ctx->pc = 0x194448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194448u;
        // 0x19444c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194450u;
    // 0x194450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x194450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x194454: 0x0  nop
    ctx->pc = 0x194454u;
    // NOP
    ctx->pc = 0x194458u;
}
