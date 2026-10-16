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

// Function: sub_0030FAC8
// Address: 0x30fac8 - 0x30fb08
void sub_0030FAC8_0x30fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FAC8_0x30fac8");
#endif

    switch (ctx->pc) {
        case 0x30faf0u: goto label_30faf0;
        default: break;
    }

    ctx->pc = 0x30fac8u;

    // 0x30fac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30facc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30fad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30fad4: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x30fad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30fad8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x30fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x30fadc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30fadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30fae0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FAE0u;
    {
        const bool branch_taken_0x30fae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fae0) {
            ctx->pc = 0x30FAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FAE0u;
            // 0x30fae4: 0xc6000064  lwc1        $f0, 0x64($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FAF4u;
            goto label_30faf4;
        }
    }
    ctx->pc = 0x30FAE8u;
    // 0x30fae8: 0xc0c3fa4  jal         func_30FE90
    ctx->pc = 0x30FAE8u;
    SET_GPR_U32(ctx, 31, 0x30FAF0u);
    ctx->pc = 0x30FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAE8u;
    // 0x30faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30FE90u, 0x30FAE8u, 0x30FAF0u)) {
        return;
    }
    ctx->pc = 0x30FAF0u;
label_30faf0:
    // 0x30faf0: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x30faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30faf4:
    // 0x30faf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30faf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30faf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x30FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAFCu;
        // 0x30fb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FB04u;
    // 0x30fb04: 0x0  nop
    ctx->pc = 0x30fb04u;
    // NOP
    ctx->pc = 0x30fb08u;
}
