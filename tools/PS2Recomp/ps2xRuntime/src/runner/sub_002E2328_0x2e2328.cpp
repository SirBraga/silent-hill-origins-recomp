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

// Function: sub_002E2328
// Address: 0x2e2328 - 0x2e2370
void sub_002E2328_0x2e2328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2328_0x2e2328");
#endif

    switch (ctx->pc) {
        case 0x2e2358u: goto label_2e2358;
        default: break;
    }

    ctx->pc = 0x2e2328u;

    // 0x2e2328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e232c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2338: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e233c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e2340: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2340u;
    {
        const bool branch_taken_0x2e2340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2340u;
        // 0x2e2344: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2340) {
            ctx->pc = 0x2E2358u;
            goto label_2e2358;
        }
    }
    ctx->pc = 0x2E2348u;
    // 0x2e2348: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x2e2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e234c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e234cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e2350: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2E2350u;
    SET_GPR_U32(ctx, 31, 0x2E2358u);
    ctx->pc = 0x2E2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2350u;
    // 0x2e2354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2E2350u, 0x2E2358u)) {
        return;
    }
    ctx->pc = 0x2E2358u;
label_2e2358:
    // 0x2e2358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e235c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2364: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2364u;
        // 0x2e2368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E236Cu;
    // 0x2e236c: 0x0  nop
    ctx->pc = 0x2e236cu;
    // NOP
    ctx->pc = 0x2e2370u;
}
