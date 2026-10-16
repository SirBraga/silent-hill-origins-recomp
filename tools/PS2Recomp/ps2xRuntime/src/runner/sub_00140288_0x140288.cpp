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

// Function: sub_00140288
// Address: 0x140288 - 0x1402d0
void sub_00140288_0x140288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140288_0x140288");
#endif

    switch (ctx->pc) {
        case 0x1402a0u: goto label_1402a0;
        case 0x1402b4u: goto label_1402b4;
        case 0x1402bcu: goto label_1402bc;
        default: break;
    }

    ctx->pc = 0x140288u;

    // 0x140288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14028c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140298: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x140298u;
    SET_GPR_U32(ctx, 31, 0x1402A0u);
    ctx->pc = 0x14029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140298u;
    // 0x14029c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x140298u, 0x1402A0u)) {
        return;
    }
    ctx->pc = 0x1402A0u;
label_1402a0:
    // 0x1402a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1402A0u;
    {
        const bool branch_taken_0x1402a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1402a0) {
            ctx->pc = 0x1402A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1402A0u;
            // 0x1402a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402C0u;
            goto label_1402c0;
        }
    }
    ctx->pc = 0x1402A8u;
    // 0x1402a8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1402ac: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1402ACu;
    SET_GPR_U32(ctx, 31, 0x1402B4u);
    ctx->pc = 0x1402B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402ACu;
    // 0x1402b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1402ACu, 0x1402B4u)) {
        return;
    }
    ctx->pc = 0x1402B4u;
label_1402b4:
    // 0x1402b4: 0xc050442  jal         func_141108
    ctx->pc = 0x1402B4u;
    SET_GPR_U32(ctx, 31, 0x1402BCu);
    ctx->pc = 0x1402B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402B4u;
    // 0x1402b8: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141108u, 0x1402B4u, 0x1402BCu)) {
        return;
    }
    ctx->pc = 0x1402BCu;
label_1402bc:
    // 0x1402bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1402bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1402c0:
    // 0x1402c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1402c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1402c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1402C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1402C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402C4u;
        // 0x1402c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1402CCu;
    // 0x1402cc: 0x0  nop
    ctx->pc = 0x1402ccu;
    // NOP
    ctx->pc = 0x1402d0u;
}
