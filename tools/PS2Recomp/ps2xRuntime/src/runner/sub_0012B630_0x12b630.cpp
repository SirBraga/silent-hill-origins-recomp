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

// Function: sub_0012B630
// Address: 0x12b630 - 0x12b678
void sub_0012B630_0x12b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B630_0x12b630");
#endif

    switch (ctx->pc) {
        case 0x12b64cu: goto label_12b64c;
        case 0x12b658u: goto label_12b658;
        default: break;
    }

    ctx->pc = 0x12b630u;

    // 0x12b630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b634: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12b634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b644: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x12B644u;
    SET_GPR_U32(ctx, 31, 0x12B64Cu);
    ctx->pc = 0x12B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B644u;
    // 0x12b648: 0x24042d90  addiu       $a0, $zero, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x12B644u, 0x12B64Cu)) {
        return;
    }
    ctx->pc = 0x12B64Cu;
label_12b64c:
    // 0x12b64c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b650: 0xc049dc6  jal         func_127718
    ctx->pc = 0x12B650u;
    SET_GPR_U32(ctx, 31, 0x12B658u);
    ctx->pc = 0x12B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B650u;
    // 0x12b654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127718u, 0x12B650u, 0x12B658u)) {
        return;
    }
    ctx->pc = 0x12B658u;
label_12b658:
    // 0x12b658: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x12b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x12b65c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b660: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x12b660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x12b664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b668: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12b668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B66Cu;
        // 0x12b670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B674u;
    // 0x12b674: 0x0  nop
    ctx->pc = 0x12b674u;
    // NOP
    ctx->pc = 0x12b678u;
}
