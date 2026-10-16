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

// Function: sub_0017DD18
// Address: 0x17dd18 - 0x17dd80
void sub_0017DD18_0x17dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD18_0x17dd18");
#endif

    switch (ctx->pc) {
        case 0x17dd2cu: goto label_17dd2c;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17dd68u: goto label_17dd68;
        default: break;
    }

    ctx->pc = 0x17dd18u;

    // 0x17dd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dd1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17dd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17dd24: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17DD24u;
    SET_GPR_U32(ctx, 31, 0x17DD2Cu);
    ctx->pc = 0x17DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD24u;
    // 0x17dd28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17DD24u, 0x17DD2Cu)) {
        return;
    }
    ctx->pc = 0x17DD2Cu;
label_17dd2c:
    // 0x17dd2c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17dd30: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17dd34: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x17dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
    // 0x17dd38: 0x24427620  addiu       $v0, $v0, 0x7620
    ctx->pc = 0x17dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30240));
    // 0x17dd3c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x17dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x17dd40: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x17dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17dd44: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17DD44u;
    SET_GPR_U32(ctx, 31, 0x17DD4Cu);
    ctx->pc = 0x17DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD44u;
    // 0x17dd48: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17DD44u, 0x17DD4Cu)) {
        return;
    }
    ctx->pc = 0x17DD4Cu;
label_17dd4c:
    // 0x17dd4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17dd50: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17dd54: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17dd58: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    // 0x17dd5c: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x17dd60: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17DD60u;
    SET_GPR_U32(ctx, 31, 0x17DD68u);
    ctx->pc = 0x17DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD60u;
    // 0x17dd64: 0x24c675f0  addiu       $a2, $a2, 0x75F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17DD60u, 0x17DD68u)) {
        return;
    }
    ctx->pc = 0x17DD68u;
label_17dd68:
    // 0x17dd68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17dd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17dd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd74: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD74u;
        // 0x17dd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD7Cu;
    // 0x17dd7c: 0x0  nop
    ctx->pc = 0x17dd7cu;
    // NOP
    ctx->pc = 0x17dd80u;
}
