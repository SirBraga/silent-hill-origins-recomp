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

// Function: sub_00137118
// Address: 0x137118 - 0x137180
void sub_00137118_0x137118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137118_0x137118");
#endif

    switch (ctx->pc) {
        case 0x137148u: goto label_137148;
        case 0x137158u: goto label_137158;
        case 0x13716cu: goto label_13716c;
        default: break;
    }

    ctx->pc = 0x137118u;

    // 0x137118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13711c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137120: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13712c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137130: 0x8e031bb0  lw          $v1, 0x1BB0($s0)
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7088)));
    // 0x137134: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137134u;
    {
        const bool branch_taken_0x137134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x137138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137134u;
        // 0x137138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137134) {
            ctx->pc = 0x137160u;
            goto label_137160;
        }
    }
    ctx->pc = 0x13713Cu;
    // 0x13713c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x137140: 0xc0644e4  jal         func_191390
    ctx->pc = 0x137140u;
    SET_GPR_U32(ctx, 31, 0x137148u);
    ctx->pc = 0x137144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137140u;
    // 0x137144: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191390u, 0x137140u, 0x137148u)) {
        return;
    }
    ctx->pc = 0x137148u;
label_137148:
    // 0x137148: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x137148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x13714c: 0x26051bc8  addiu       $a1, $s0, 0x1BC8
    ctx->pc = 0x13714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7112));
    // 0x137150: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x137150u;
    SET_GPR_U32(ctx, 31, 0x137158u);
    ctx->pc = 0x137154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137150u;
    // 0x137154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x137150u, 0x137158u)) {
        return;
    }
    ctx->pc = 0x137158u;
label_137158:
    // 0x137158: 0xae001bb8  sw          $zero, 0x1BB8($s0)
    ctx->pc = 0x137158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7096), GPR_U32(ctx, 0));
    // 0x13715c: 0xae001bb0  sw          $zero, 0x1BB0($s0)
    ctx->pc = 0x13715cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7088), GPR_U32(ctx, 0));
label_137160:
    // 0x137160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137164: 0xc0490b0  jal         func_1242C0
    ctx->pc = 0x137164u;
    SET_GPR_U32(ctx, 31, 0x13716Cu);
    ctx->pc = 0x137168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137164u;
    // 0x137168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1242C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1242C0u, 0x137164u, 0x13716Cu)) {
        return;
    }
    ctx->pc = 0x13716Cu;
label_13716c:
    // 0x13716c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13716cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137178: 0x3e00008  jr          $ra
    ctx->pc = 0x137178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137178u;
        // 0x13717c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137180u;
}
