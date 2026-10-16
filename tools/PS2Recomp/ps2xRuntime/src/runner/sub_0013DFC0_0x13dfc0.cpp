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

// Function: sub_0013DFC0
// Address: 0x13dfc0 - 0x13e080
void sub_0013DFC0_0x13dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DFC0_0x13dfc0");
#endif

    switch (ctx->pc) {
        case 0x13dfd8u: goto label_13dfd8;
        case 0x13e018u: goto label_13e018;
        case 0x13e020u: goto label_13e020;
        case 0x13e028u: goto label_13e028;
        case 0x13e030u: goto label_13e030;
        case 0x13e038u: goto label_13e038;
        case 0x13e040u: goto label_13e040;
        case 0x13e04cu: goto label_13e04c;
        case 0x13e054u: goto label_13e054;
        case 0x13e05cu: goto label_13e05c;
        default: break;
    }

    ctx->pc = 0x13dfc0u;

    // 0x13dfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dfc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13dfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dfcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dfd0: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13DFD0u;
    SET_GPR_U32(ctx, 31, 0x13DFD8u);
    ctx->pc = 0x13DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFD0u;
    // 0x13dfd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13DFD0u, 0x13DFD8u)) {
        return;
    }
    ctx->pc = 0x13DFD8u;
label_13dfd8:
    // 0x13dfd8: 0x2611004c  addiu       $s1, $s0, 0x4C
    ctx->pc = 0x13dfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13dfdc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13dfe0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13dfe4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13dfe8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13dfec: 0x2463fdd0  addiu       $v1, $v1, -0x230
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966736));
    // 0x13dff0: 0x24c6fdf0  addiu       $a2, $a2, -0x210
    ctx->pc = 0x13dff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966768));
    // 0x13dff4: 0x24a5fc70  addiu       $a1, $a1, -0x390
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966384));
    // 0x13dff8: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x13dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x13dffc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x13dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x13e000: 0x260400ec  addiu       $a0, $s0, 0xEC
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x13e004: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13e004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13e008: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13e008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13e00c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13e010: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E010u;
    SET_GPR_U32(ctx, 31, 0x13E018u);
    ctx->pc = 0x13E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E010u;
    // 0x13e014: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E010u, 0x13E018u)) {
        return;
    }
    ctx->pc = 0x13E018u;
label_13e018:
    // 0x13e018: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E018u;
    SET_GPR_U32(ctx, 31, 0x13E020u);
    ctx->pc = 0x13E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E018u;
    // 0x13e01c: 0x260400f4  addiu       $a0, $s0, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E018u, 0x13E020u)) {
        return;
    }
    ctx->pc = 0x13E020u;
label_13e020:
    // 0x13e020: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E020u;
    SET_GPR_U32(ctx, 31, 0x13E028u);
    ctx->pc = 0x13E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E020u;
    // 0x13e024: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E020u, 0x13E028u)) {
        return;
    }
    ctx->pc = 0x13E028u;
label_13e028:
    // 0x13e028: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E028u;
    SET_GPR_U32(ctx, 31, 0x13E030u);
    ctx->pc = 0x13E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E028u;
    // 0x13e02c: 0x26040104  addiu       $a0, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E028u, 0x13E030u)) {
        return;
    }
    ctx->pc = 0x13E030u;
label_13e030:
    // 0x13e030: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E030u;
    SET_GPR_U32(ctx, 31, 0x13E038u);
    ctx->pc = 0x13E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E030u;
    // 0x13e034: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E030u, 0x13E038u)) {
        return;
    }
    ctx->pc = 0x13E038u;
label_13e038:
    // 0x13e038: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x13E038u;
    SET_GPR_U32(ctx, 31, 0x13E040u);
    ctx->pc = 0x13E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E038u;
    // 0x13e03c: 0x26040114  addiu       $a0, $s0, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x13E038u, 0x13E040u)) {
        return;
    }
    ctx->pc = 0x13E040u;
label_13e040:
    // 0x13e040: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e044: 0xc041f0c  jal         func_107C30
    ctx->pc = 0x13E044u;
    SET_GPR_U32(ctx, 31, 0x13E04Cu);
    ctx->pc = 0x13E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E044u;
    // 0x13e048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C30u, 0x13E044u, 0x13E04Cu)) {
        return;
    }
    ctx->pc = 0x13E04Cu;
label_13e04c:
    // 0x13e04c: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x13E04Cu;
    SET_GPR_U32(ctx, 31, 0x13E054u);
    ctx->pc = 0x13E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E04Cu;
    // 0x13e050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x13E04Cu, 0x13E054u)) {
        return;
    }
    ctx->pc = 0x13E054u;
label_13e054:
    // 0x13e054: 0xc0420a6  jal         func_108298
    ctx->pc = 0x13E054u;
    SET_GPR_U32(ctx, 31, 0x13E05Cu);
    ctx->pc = 0x13E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E054u;
    // 0x13e058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108298u, 0x13E054u, 0x13E05Cu)) {
        return;
    }
    ctx->pc = 0x13E05Cu;
label_13e05c:
    // 0x13e05c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x13e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x13e060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e064: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x13e064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x13e068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13e068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e06c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e074: 0x3e00008  jr          $ra
    ctx->pc = 0x13E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E074u;
        // 0x13e078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E07Cu;
    // 0x13e07c: 0x0  nop
    ctx->pc = 0x13e07cu;
    // NOP
    ctx->pc = 0x13e080u;
}
