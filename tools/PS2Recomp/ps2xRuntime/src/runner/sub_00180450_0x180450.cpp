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

// Function: sub_00180450
// Address: 0x180450 - 0x1804a8
void sub_00180450_0x180450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180450_0x180450");
#endif

    switch (ctx->pc) {
        case 0x18046cu: goto label_18046c;
        case 0x180478u: goto label_180478;
        default: break;
    }

    ctx->pc = 0x180450u;

    // 0x180450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180454: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18045c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18045cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180464: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x180464u;
    SET_GPR_U32(ctx, 31, 0x18046Cu);
    ctx->pc = 0x180468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180464u;
    // 0x180468: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x180464u, 0x18046Cu)) {
        return;
    }
    ctx->pc = 0x18046Cu;
label_18046c:
    // 0x18046c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180470: 0xc05fe3c  jal         func_17F8F0
    ctx->pc = 0x180470u;
    SET_GPR_U32(ctx, 31, 0x180478u);
    ctx->pc = 0x180474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180470u;
    // 0x180474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F8F0u, 0x180470u, 0x180478u)) {
        return;
    }
    ctx->pc = 0x180478u;
label_180478:
    // 0x180478: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18047c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18047cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180480: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x180480u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x180484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180488: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x180488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18048c: 0x3e00008  jr          $ra
    ctx->pc = 0x18048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18048Cu;
        // 0x180490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18048Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180494u;
    // 0x180494: 0x0  nop
    ctx->pc = 0x180494u;
    // NOP
    // 0x180498: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18049c: 0x0  nop
    ctx->pc = 0x18049cu;
    // NOP
    // 0x1804a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804a4: 0x0  nop
    ctx->pc = 0x1804a4u;
    // NOP
    ctx->pc = 0x1804a8u;
}
