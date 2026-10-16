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

// Function: sub_00153738
// Address: 0x153738 - 0x1537a0
void sub_00153738_0x153738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153738_0x153738");
#endif

    switch (ctx->pc) {
        case 0x15374cu: goto label_15374c;
        case 0x15376cu: goto label_15376c;
        case 0x153774u: goto label_153774;
        case 0x15377cu: goto label_15377c;
        case 0x153784u: goto label_153784;
        case 0x15378cu: goto label_15378c;
        default: break;
    }

    ctx->pc = 0x153738u;

    // 0x153738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15373c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153744: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x153744u;
    SET_GPR_U32(ctx, 31, 0x15374Cu);
    ctx->pc = 0x153748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153744u;
    // 0x153748: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x153744u, 0x15374Cu)) {
        return;
    }
    ctx->pc = 0x15374Cu;
label_15374c:
    // 0x15374c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15374cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x153750: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x153754: 0x246326b8  addiu       $v1, $v1, 0x26B8
    ctx->pc = 0x153754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9912));
    // 0x153758: 0x244226d8  addiu       $v0, $v0, 0x26D8
    ctx->pc = 0x153758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9944));
    // 0x15375c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x15375cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x153760: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x153760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x153764: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x153764u;
    SET_GPR_U32(ctx, 31, 0x15376Cu);
    ctx->pc = 0x153768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153764u;
    // 0x153768: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x153764u, 0x15376Cu)) {
        return;
    }
    ctx->pc = 0x15376Cu;
label_15376c:
    // 0x15376c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15376Cu;
    SET_GPR_U32(ctx, 31, 0x153774u);
    ctx->pc = 0x153770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15376Cu;
    // 0x153770: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15376Cu, 0x153774u)) {
        return;
    }
    ctx->pc = 0x153774u;
label_153774:
    // 0x153774: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x153774u;
    SET_GPR_U32(ctx, 31, 0x15377Cu);
    ctx->pc = 0x153778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153774u;
    // 0x153778: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x153774u, 0x15377Cu)) {
        return;
    }
    ctx->pc = 0x15377Cu;
label_15377c:
    // 0x15377c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15377Cu;
    SET_GPR_U32(ctx, 31, 0x153784u);
    ctx->pc = 0x153780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15377Cu;
    // 0x153780: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15377Cu, 0x153784u)) {
        return;
    }
    ctx->pc = 0x153784u;
label_153784:
    // 0x153784: 0xc054e02  jal         func_153808
    ctx->pc = 0x153784u;
    SET_GPR_U32(ctx, 31, 0x15378Cu);
    ctx->pc = 0x153788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153784u;
    // 0x153788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153808u, 0x153784u, 0x15378Cu)) {
        return;
    }
    ctx->pc = 0x15378Cu;
label_15378c:
    // 0x15378c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15378cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153794: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153798: 0x3e00008  jr          $ra
    ctx->pc = 0x153798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153798u;
        // 0x15379c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1537A0u;
}
