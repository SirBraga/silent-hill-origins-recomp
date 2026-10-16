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

// Function: sub_0017AF70
// Address: 0x17af70 - 0x17afa8
void sub_0017AF70_0x17af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AF70_0x17af70");
#endif

    switch (ctx->pc) {
        case 0x17af8cu: goto label_17af8c;
        case 0x17af94u: goto label_17af94;
        default: break;
    }

    ctx->pc = 0x17af70u;

    // 0x17af70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17af74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17af7c: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x17af80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17af84: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17AF84u;
    SET_GPR_U32(ctx, 31, 0x17AF8Cu);
    ctx->pc = 0x17AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF84u;
    // 0x17af88: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17AF84u, 0x17AF8Cu)) {
        return;
    }
    ctx->pc = 0x17AF8Cu;
label_17af8c:
    // 0x17af8c: 0xc05e5aa  jal         func_1796A8
    ctx->pc = 0x17AF8Cu;
    SET_GPR_U32(ctx, 31, 0x17AF94u);
    ctx->pc = 0x17AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF8Cu;
    // 0x17af90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1796A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1796A8u, 0x17AF8Cu, 0x17AF94u)) {
        return;
    }
    ctx->pc = 0x17AF94u;
label_17af94:
    // 0x17af94: 0xae02870c  sw          $v0, -0x78F4($s0)
    ctx->pc = 0x17af94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936332), GPR_U32(ctx, 2));
    // 0x17af98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17af98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17af9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17afa0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFA0u;
        // 0x17afa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AFA8u;
}
