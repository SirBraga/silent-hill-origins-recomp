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

// Function: sub_001753F0
// Address: 0x1753f0 - 0x175438
void sub_001753F0_0x1753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001753F0_0x1753f0");
#endif

    switch (ctx->pc) {
        case 0x17540cu: goto label_17540c;
        case 0x175418u: goto label_175418;
        default: break;
    }

    ctx->pc = 0x1753f0u;

    // 0x1753f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1753f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1753f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1753f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1753f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1753fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1753fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175404: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x175404u;
    SET_GPR_U32(ctx, 31, 0x17540Cu);
    ctx->pc = 0x175408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175404u;
    // 0x175408: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x175404u, 0x17540Cu)) {
        return;
    }
    ctx->pc = 0x17540Cu;
label_17540c:
    // 0x17540c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17540cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175410: 0xc05d50e  jal         func_175438
    ctx->pc = 0x175410u;
    SET_GPR_U32(ctx, 31, 0x175418u);
    ctx->pc = 0x175414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175410u;
    // 0x175414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175438u, 0x175410u, 0x175418u)) {
        return;
    }
    ctx->pc = 0x175418u;
label_175418:
    // 0x175418: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17541c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17541cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175420: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x175420u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x175424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175428: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x175428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17542c: 0x3e00008  jr          $ra
    ctx->pc = 0x17542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17542Cu;
        // 0x175430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175434u;
    // 0x175434: 0x0  nop
    ctx->pc = 0x175434u;
    // NOP
    ctx->pc = 0x175438u;
}
