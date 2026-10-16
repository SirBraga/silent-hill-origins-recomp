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

// Function: sub_0019A570
// Address: 0x19a570 - 0x19a5b8
void sub_0019A570_0x19a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A570_0x19a570");
#endif

    switch (ctx->pc) {
        case 0x19a58cu: goto label_19a58c;
        case 0x19a598u: goto label_19a598;
        default: break;
    }

    ctx->pc = 0x19a570u;

    // 0x19a570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a584: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19A584u;
    SET_GPR_U32(ctx, 31, 0x19A58Cu);
    ctx->pc = 0x19A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A584u;
    // 0x19a588: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19A584u, 0x19A58Cu)) {
        return;
    }
    ctx->pc = 0x19A58Cu;
label_19a58c:
    // 0x19a58c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a590: 0xc0667da  jal         func_199F68
    ctx->pc = 0x19A590u;
    SET_GPR_U32(ctx, 31, 0x19A598u);
    ctx->pc = 0x19A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A590u;
    // 0x19a594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199F68u, 0x19A590u, 0x19A598u)) {
        return;
    }
    ctx->pc = 0x19A598u;
label_19a598:
    // 0x19a598: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19a59c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5a0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19a5a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x19a5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a5a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19a5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5ACu;
        // 0x19a5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A5B4u;
    // 0x19a5b4: 0x0  nop
    ctx->pc = 0x19a5b4u;
    // NOP
    ctx->pc = 0x19a5b8u;
}
