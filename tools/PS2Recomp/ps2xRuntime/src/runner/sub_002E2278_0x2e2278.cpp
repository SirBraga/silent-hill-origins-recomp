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

// Function: sub_002E2278
// Address: 0x2e2278 - 0x2e22c0
void sub_002E2278_0x2e2278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2278_0x2e2278");
#endif

    switch (ctx->pc) {
        case 0x2e22a8u: goto label_2e22a8;
        default: break;
    }

    ctx->pc = 0x2e2278u;

    // 0x2e2278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e227c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2288: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e2288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e228c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e2290: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2290u;
    {
        const bool branch_taken_0x2e2290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2290u;
        // 0x2e2294: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2290) {
            ctx->pc = 0x2E22A8u;
            goto label_2e22a8;
        }
    }
    ctx->pc = 0x2E2298u;
    // 0x2e2298: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x2e2298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e229c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e22a0: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2E22A0u;
    SET_GPR_U32(ctx, 31, 0x2E22A8u);
    ctx->pc = 0x2E22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22A0u;
    // 0x2e22a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2E22A0u, 0x2E22A8u)) {
        return;
    }
    ctx->pc = 0x2E22A8u;
label_2e22a8:
    // 0x2e22a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e22a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e22acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e22b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e22b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e22b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E22B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22B4u;
        // 0x2e22b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E22B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E22BCu;
    // 0x2e22bc: 0x0  nop
    ctx->pc = 0x2e22bcu;
    // NOP
    ctx->pc = 0x2e22c0u;
}
