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

// Function: sub_001A51B8
// Address: 0x1a51b8 - 0x1a5210
void sub_001A51B8_0x1a51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A51B8_0x1a51b8");
#endif

    switch (ctx->pc) {
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51e0u: goto label_1a51e0;
        default: break;
    }

    ctx->pc = 0x1a51b8u;

    // 0x1a51b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a51bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a51c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a51c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a51c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a51cc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1A51CCu;
    SET_GPR_U32(ctx, 31, 0x1A51D4u);
    ctx->pc = 0x1A51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51CCu;
    // 0x1a51d0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1A51CCu, 0x1A51D4u)) {
        return;
    }
    ctx->pc = 0x1A51D4u;
label_1a51d4:
    // 0x1a51d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51d8: 0xc069484  jal         func_1A5210
    ctx->pc = 0x1A51D8u;
    SET_GPR_U32(ctx, 31, 0x1A51E0u);
    ctx->pc = 0x1A51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51D8u;
    // 0x1a51dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5210u, 0x1A51D8u, 0x1A51E0u)) {
        return;
    }
    ctx->pc = 0x1A51E0u;
label_1a51e0:
    // 0x1a51e0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1a51e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a51e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a51e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a51e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a51e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1a51ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a51ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a51f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a51f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A51F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51F4u;
        // 0x1a51f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A51FCu;
    // 0x1a51fc: 0x0  nop
    ctx->pc = 0x1a51fcu;
    // NOP
    // 0x1a5200: 0x0  nop
    ctx->pc = 0x1a5200u;
    // NOP
    // 0x1a5204: 0x0  nop
    ctx->pc = 0x1a5204u;
    // NOP
    // 0x1a5208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a520c: 0x0  nop
    ctx->pc = 0x1a520cu;
    // NOP
    ctx->pc = 0x1a5210u;
}
