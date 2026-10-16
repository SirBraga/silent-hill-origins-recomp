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

// Function: sub_00175438
// Address: 0x175438 - 0x175498
void sub_00175438_0x175438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175438_0x175438");
#endif

    switch (ctx->pc) {
        case 0x17544cu: goto label_17544c;
        case 0x175474u: goto label_175474;
        case 0x175484u: goto label_175484;
        default: break;
    }

    ctx->pc = 0x175438u;

    // 0x175438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17543c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175444: 0xc05d80c  jal         func_176030
    ctx->pc = 0x175444u;
    SET_GPR_U32(ctx, 31, 0x17544Cu);
    ctx->pc = 0x175448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175444u;
    // 0x175448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x175444u, 0x17544Cu)) {
        return;
    }
    ctx->pc = 0x17544Cu;
label_17544c:
    // 0x17544c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x175450: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x175454: 0x24636078  addiu       $v1, $v1, 0x6078
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24696));
    // 0x175458: 0x24426058  addiu       $v0, $v0, 0x6058
    ctx->pc = 0x175458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24664));
    // 0x17545c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x17545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x175460: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x175460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x175464: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x175464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x175468: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x175468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17546c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17546Cu;
    SET_GPR_U32(ctx, 31, 0x175474u);
    ctx->pc = 0x175470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17546Cu;
    // 0x175470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17546Cu, 0x175474u)) {
        return;
    }
    ctx->pc = 0x175474u;
label_175474:
    // 0x175474: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x175474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x175478: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17547c: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x17547Cu;
    SET_GPR_U32(ctx, 31, 0x175484u);
    ctx->pc = 0x175480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17547Cu;
    // 0x175480: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x17547Cu, 0x175484u)) {
        return;
    }
    ctx->pc = 0x175484u;
label_175484:
    // 0x175484: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17548c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17548cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175490: 0x3e00008  jr          $ra
    ctx->pc = 0x175490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175490u;
        // 0x175494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175498u;
}
