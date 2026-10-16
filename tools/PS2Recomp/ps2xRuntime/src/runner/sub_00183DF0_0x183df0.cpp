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

// Function: sub_00183DF0
// Address: 0x183df0 - 0x183e40
void sub_00183DF0_0x183df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183DF0_0x183df0");
#endif

    switch (ctx->pc) {
        case 0x183e10u: goto label_183e10;
        case 0x183e24u: goto label_183e24;
        default: break;
    }

    ctx->pc = 0x183df0u;

    // 0x183df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183df4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x183df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x183df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183dfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x183dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183e08: 0xc060fbc  jal         func_183EF0
    ctx->pc = 0x183E08u;
    SET_GPR_U32(ctx, 31, 0x183E10u);
    ctx->pc = 0x183E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E08u;
    // 0x183e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183EF0u, 0x183E08u, 0x183E10u)) {
        return;
    }
    ctx->pc = 0x183E10u;
label_183e10:
    // 0x183e10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x183e14: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183e18: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x183e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x183e1c: 0xc09d926  jal         func_276498
    ctx->pc = 0x183E1Cu;
    SET_GPR_U32(ctx, 31, 0x183E24u);
    ctx->pc = 0x183E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E1Cu;
    // 0x183e20: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x183E1Cu, 0x183E24u)) {
        return;
    }
    ctx->pc = 0x183E24u;
label_183e24:
    // 0x183e24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x183e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x183e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183e34: 0x3e00008  jr          $ra
    ctx->pc = 0x183E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E34u;
        // 0x183e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183E3Cu;
    // 0x183e3c: 0x0  nop
    ctx->pc = 0x183e3cu;
    // NOP
    ctx->pc = 0x183e40u;
}
