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

// Function: sub_001AF120
// Address: 0x1af120 - 0x1af170
void sub_001AF120_0x1af120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF120_0x1af120");
#endif

    switch (ctx->pc) {
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        case 0x1af134u: goto label_1af134;
        case 0x1af138u: goto label_1af138;
        case 0x1af13cu: goto label_1af13c;
        case 0x1af140u: goto label_1af140;
        case 0x1af144u: goto label_1af144;
        case 0x1af148u: goto label_1af148;
        case 0x1af14cu: goto label_1af14c;
        case 0x1af150u: goto label_1af150;
        case 0x1af154u: goto label_1af154;
        case 0x1af158u: goto label_1af158;
        case 0x1af15cu: goto label_1af15c;
        case 0x1af160u: goto label_1af160;
        case 0x1af164u: goto label_1af164;
        case 0x1af168u: goto label_1af168;
        case 0x1af16cu: goto label_1af16c;
        default: break;
    }

    ctx->pc = 0x1af120u;

label_1af120:
    // 0x1af120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1af124:
    // 0x1af124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1af124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1af128:
    // 0x1af128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af12c:
    // 0x1af12c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1af130:
    if (ctx->pc == 0x1AF130u) {
        ctx->pc = 0x1AF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF12Cu;
        // 0x1af130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF134u;
        goto label_1af134;
    }
    ctx->pc = 0x1AF12Cu;
    {
        const bool branch_taken_0x1af12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF12Cu;
        // 0x1af130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af12c) {
            ctx->pc = 0x1AF148u;
            goto label_1af148;
        }
    }
    ctx->pc = 0x1AF134u;
label_1af134:
    // 0x1af134: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1af138:
    // 0x1af138: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1af138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1af13c:
    // 0x1af13c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1af13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1af140:
    // 0x1af140: 0x60f809  jalr        $v1
label_1af144:
    if (ctx->pc == 0x1AF144u) {
        ctx->pc = 0x1AF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF140u;
        // 0x1af144: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF148u;
        goto label_1af148;
    }
    ctx->pc = 0x1AF140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF148u);
        ctx->pc = 0x1AF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF140u;
        // 0x1af144: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF140u, 0x1AF148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF148u;
label_1af148:
    // 0x1af148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af14c:
    // 0x1af14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af150:
    // 0x1af150: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1af150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1af154:
    // 0x1af154: 0xc06bd3c  jal         func_1AF4F0
label_1af158:
    if (ctx->pc == 0x1AF158u) {
        ctx->pc = 0x1AF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF154u;
        // 0x1af158: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF15Cu;
        goto label_1af15c;
    }
    ctx->pc = 0x1AF154u;
    SET_GPR_U32(ctx, 31, 0x1AF15Cu);
    ctx->pc = 0x1AF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF154u;
    // 0x1af158: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF4F0u, 0x1AF154u, 0x1AF15Cu)) {
        return;
    }
    ctx->pc = 0x1AF15Cu;
label_1af15c:
    // 0x1af15c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1af15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af160:
    // 0x1af160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af164:
    // 0x1af164: 0x3e00008  jr          $ra
label_1af168:
    if (ctx->pc == 0x1AF168u) {
        ctx->pc = 0x1AF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF164u;
        // 0x1af168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF16Cu;
        goto label_1af16c;
    }
    ctx->pc = 0x1AF164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF164u;
        // 0x1af168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF16Cu;
label_1af16c:
    // 0x1af16c: 0x0  nop
    ctx->pc = 0x1af16cu;
    // NOP
    ctx->pc = 0x1af170u;
}
