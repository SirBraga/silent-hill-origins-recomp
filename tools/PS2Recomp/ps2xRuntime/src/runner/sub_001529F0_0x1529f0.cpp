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

// Function: sub_001529F0
// Address: 0x1529f0 - 0x152a38
void sub_001529F0_0x1529f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001529F0_0x1529f0");
#endif

    switch (ctx->pc) {
        case 0x152a0cu: goto label_152a0c;
        case 0x152a18u: goto label_152a18;
        default: break;
    }

    ctx->pc = 0x1529f0u;

    // 0x1529f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1529f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1529f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1529f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1529f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1529f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1529fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1529fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152a04: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x152A04u;
    SET_GPR_U32(ctx, 31, 0x152A0Cu);
    ctx->pc = 0x152A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A04u;
    // 0x152a08: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x152A04u, 0x152A0Cu)) {
        return;
    }
    ctx->pc = 0x152A0Cu;
label_152a0c:
    // 0x152a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a10: 0xc0548d6  jal         func_152358
    ctx->pc = 0x152A10u;
    SET_GPR_U32(ctx, 31, 0x152A18u);
    ctx->pc = 0x152A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A10u;
    // 0x152a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152358u, 0x152A10u, 0x152A18u)) {
        return;
    }
    ctx->pc = 0x152A18u;
label_152a18:
    // 0x152a18: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x152a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a20: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x152a20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x152a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x152a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x152A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A2Cu;
        // 0x152a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152A34u;
    // 0x152a34: 0x0  nop
    ctx->pc = 0x152a34u;
    // NOP
    ctx->pc = 0x152a38u;
}
