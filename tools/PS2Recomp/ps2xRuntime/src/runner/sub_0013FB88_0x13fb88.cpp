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

// Function: sub_0013FB88
// Address: 0x13fb88 - 0x13fbd0
void sub_0013FB88_0x13fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB88_0x13fb88");
#endif

    switch (ctx->pc) {
        case 0x13fba4u: goto label_13fba4;
        case 0x13fbb0u: goto label_13fbb0;
        default: break;
    }

    ctx->pc = 0x13fb88u;

    // 0x13fb88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13fb8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fb90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13fb94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fb9c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13FB9Cu;
    SET_GPR_U32(ctx, 31, 0x13FBA4u);
    ctx->pc = 0x13FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB9Cu;
    // 0x13fba0: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13FB9Cu, 0x13FBA4u)) {
        return;
    }
    ctx->pc = 0x13FBA4u;
label_13fba4:
    // 0x13fba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fba8: 0xc04fef4  jal         func_13FBD0
    ctx->pc = 0x13FBA8u;
    SET_GPR_U32(ctx, 31, 0x13FBB0u);
    ctx->pc = 0x13FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBA8u;
    // 0x13fbac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13FBD0u, 0x13FBA8u, 0x13FBB0u)) {
        return;
    }
    ctx->pc = 0x13FBB0u;
label_13fbb0:
    // 0x13fbb0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13fbb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13fbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fbb8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13fbb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13fbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fbc0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13fbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBC4u;
        // 0x13fbc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FBCCu;
    // 0x13fbcc: 0x0  nop
    ctx->pc = 0x13fbccu;
    // NOP
    ctx->pc = 0x13fbd0u;
}
