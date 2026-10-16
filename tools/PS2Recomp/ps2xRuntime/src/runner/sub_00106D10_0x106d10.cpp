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

// Function: sub_00106D10
// Address: 0x106d10 - 0x106d88
void sub_00106D10_0x106d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D10_0x106d10");
#endif

    switch (ctx->pc) {
        case 0x106d24u: goto label_106d24;
        case 0x106d74u: goto label_106d74;
        default: break;
    }

    ctx->pc = 0x106d10u;

    // 0x106d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x106d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106d1c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x106D1Cu;
    SET_GPR_U32(ctx, 31, 0x106D24u);
    ctx->pc = 0x106D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D1Cu;
    // 0x106d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x106D1Cu, 0x106D24u)) {
        return;
    }
    ctx->pc = 0x106D24u;
label_106d24:
    // 0x106d24: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x106d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x106d28: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x106d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x106d2c: 0x24429958  addiu       $v0, $v0, -0x66A8
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941016));
    // 0x106d30: 0x24639938  addiu       $v1, $v1, -0x66C8
    ctx->pc = 0x106d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940984));
    // 0x106d34: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x106d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x106d38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x106d3c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x106d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x106d40: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x106d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x106d44: 0x24a599c0  addiu       $a1, $a1, -0x6640
    ctx->pc = 0x106d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941120));
    // 0x106d48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x106d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x106d4c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x106d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x106d50: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x106d54: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x106d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x106d58: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x106d5c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x106d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x106d60: 0x24a59928  addiu       $a1, $a1, -0x66D8
    ctx->pc = 0x106d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940968));
    // 0x106d64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x106d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x106d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d6c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x106D6Cu;
    SET_GPR_U32(ctx, 31, 0x106D74u);
    ctx->pc = 0x106D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D6Cu;
    // 0x106d70: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x106D6Cu, 0x106D74u)) {
        return;
    }
    ctx->pc = 0x106D74u;
label_106d74:
    // 0x106d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x106d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106d80: 0x3e00008  jr          $ra
    ctx->pc = 0x106D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D80u;
        // 0x106d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D88u;
}
