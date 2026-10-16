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

// Function: sub_002675E8
// Address: 0x2675e8 - 0x267630
void sub_002675E8_0x2675e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002675E8_0x2675e8");
#endif

    switch (ctx->pc) {
        case 0x267610u: goto label_267610;
        default: break;
    }

    ctx->pc = 0x2675e8u;

    // 0x2675e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2675e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2675ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2675ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2675f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2675f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2675f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2675f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2675f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2675f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267600: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x267600u;
    {
        const bool branch_taken_0x267600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267600) {
            ctx->pc = 0x267604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267600u;
            // 0x267604: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267620u;
            goto label_267620;
        }
    }
    ctx->pc = 0x267608u;
    // 0x267608: 0xc099e9a  jal         func_267A68
    ctx->pc = 0x267608u;
    SET_GPR_U32(ctx, 31, 0x267610u);
    ctx->pc = 0x26760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267608u;
    // 0x26760c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267A68u, 0x267608u, 0x267610u)) {
        return;
    }
    ctx->pc = 0x267610u;
label_267610:
    // 0x267610: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x267610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x267614: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x267614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x267618: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x267618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x26761c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26761cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_267620:
    // 0x267620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267624: 0x3e00008  jr          $ra
    ctx->pc = 0x267624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267624u;
        // 0x267628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26762Cu;
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
    ctx->pc = 0x267630u;
}
