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

// Function: sub_00141748
// Address: 0x141748 - 0x141790
void sub_00141748_0x141748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141748_0x141748");
#endif

    switch (ctx->pc) {
        case 0x141764u: goto label_141764;
        case 0x141770u: goto label_141770;
        default: break;
    }

    ctx->pc = 0x141748u;

    // 0x141748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14174c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14175c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14175Cu;
    SET_GPR_U32(ctx, 31, 0x141764u);
    ctx->pc = 0x141760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14175Cu;
    // 0x141760: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14175Cu, 0x141764u)) {
        return;
    }
    ctx->pc = 0x141764u;
label_141764:
    // 0x141764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141768: 0xc05047c  jal         func_1411F0
    ctx->pc = 0x141768u;
    SET_GPR_U32(ctx, 31, 0x141770u);
    ctx->pc = 0x14176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141768u;
    // 0x14176c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1411F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1411F0u, 0x141768u, 0x141770u)) {
        return;
    }
    ctx->pc = 0x141770u;
label_141770:
    // 0x141770: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x141770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141774: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141778: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x141778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x14177c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14177cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141780: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x141780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141784: 0x3e00008  jr          $ra
    ctx->pc = 0x141784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141784u;
        // 0x141788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14178Cu;
    // 0x14178c: 0x0  nop
    ctx->pc = 0x14178cu;
    // NOP
    ctx->pc = 0x141790u;
}
