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

// Function: sub_0015D470
// Address: 0x15d470 - 0x15d4e0
void sub_0015D470_0x15d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D470_0x15d470");
#endif

    switch (ctx->pc) {
        case 0x15d48cu: goto label_15d48c;
        case 0x15d498u: goto label_15d498;
        default: break;
    }

    ctx->pc = 0x15d470u;

    // 0x15d470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d474: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d484: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15D484u;
    SET_GPR_U32(ctx, 31, 0x15D48Cu);
    ctx->pc = 0x15D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D484u;
    // 0x15d488: 0x24040238  addiu       $a0, $zero, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15D484u, 0x15D48Cu)) {
        return;
    }
    ctx->pc = 0x15D48Cu;
label_15d48c:
    // 0x15d48c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d490: 0xc057538  jal         func_15D4E0
    ctx->pc = 0x15D490u;
    SET_GPR_U32(ctx, 31, 0x15D498u);
    ctx->pc = 0x15D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D490u;
    // 0x15d494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D4E0u, 0x15D490u, 0x15D498u)) {
        return;
    }
    ctx->pc = 0x15D498u;
label_15d498:
    // 0x15d498: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x15d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15d49c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d4a0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15d4a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15d4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d4a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15d4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4ACu;
        // 0x15d4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D4B4u;
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
    // 0x15d4b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15d4bc: 0x0  nop
    ctx->pc = 0x15d4bcu;
    // NOP
    // 0x15d4c0: 0x0  nop
    ctx->pc = 0x15d4c0u;
    // NOP
    // 0x15d4c4: 0x0  nop
    ctx->pc = 0x15d4c4u;
    // NOP
    // 0x15d4c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15d4cc: 0x0  nop
    ctx->pc = 0x15d4ccu;
    // NOP
    // 0x15d4d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d4d4: 0x0  nop
    ctx->pc = 0x15d4d4u;
    // NOP
    // 0x15d4d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15d4dc: 0x0  nop
    ctx->pc = 0x15d4dcu;
    // NOP
    ctx->pc = 0x15d4e0u;
}
