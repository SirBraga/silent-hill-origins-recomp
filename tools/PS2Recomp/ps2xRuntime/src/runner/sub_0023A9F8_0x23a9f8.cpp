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

// Function: sub_0023A9F8
// Address: 0x23a9f8 - 0x23aad0
void sub_0023A9F8_0x23a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9F8_0x23a9f8");
#endif

    switch (ctx->pc) {
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab8u: goto label_23aab8;
        default: break;
    }

    ctx->pc = 0x23a9f8u;

    // 0x23a9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a9fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23aa00: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x23aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x23aa04: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x23AA04u;
    {
        const bool branch_taken_0x23aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA04u;
        // 0x23aa08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa04) {
            ctx->pc = 0x23AAC0u;
            goto label_23aac0;
        }
    }
    ctx->pc = 0x23AA0Cu;
    // 0x23aa0c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x23aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x23aa10: 0x3c0d0073  lui         $t5, 0x73
    ctx->pc = 0x23aa10u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)115 << 16));
    // 0x23aa14: 0xdc655120  ld          $a1, 0x5120($v1)
    ctx->pc = 0x23aa14u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x735120u));
    // 0x23aa18: 0x24625120  addiu       $v0, $v1, 0x5120
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20768));
    // 0x23aa1c: 0xdc440170  ld          $a0, 0x170($v0)
    ctx->pc = 0x23aa1cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x735290u));
    // 0x23aa20: 0x3c0c0073  lui         $t4, 0x73
    ctx->pc = 0x23aa20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)115 << 16));
    // 0x23aa24: 0xdc43ffb0  ld          $v1, -0x50($v0)
    ctx->pc = 0x23aa24u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x7350D0u));
    // 0x23aa28: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x23aa2c: 0xdc46ffd8  ld          $a2, -0x28($v0)
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x7350F8u));
    // 0x23aa30: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x23aa30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x23aa34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x23aa38: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23aa38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x23aa3c: 0x25a255d0  addiu       $v0, $t5, 0x55D0
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 21968));
    // 0x23aa40: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x23aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x23aa44: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x23aa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x23aa48: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23aa48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23aa4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23aa4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x23aa50: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x23aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x23aa54: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x23aa54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x23aa58: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x23aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x23aa5c: 0x258755f0  addiu       $a3, $t4, 0x55F0
    ctx->pc = 0x23aa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 22000));
    // 0x23aa60: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x23aa60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x23aa64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23aa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23aa68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23aa68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x23aa6c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x23aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x23aa70: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x23aa70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x23aa74: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x23aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x23aa78: 0x254855c0  addiu       $t0, $t2, 0x55C0
    ctx->pc = 0x23aa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 21952));
    // 0x23aa7c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x23aa7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x23aa80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x23aa80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x23aa84: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x23aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x23aa88: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x23aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x23aa8c: 0x256955e0  addiu       $t1, $t3, 0x55E0
    ctx->pc = 0x23aa8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 21984));
    // 0x23aa90: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x23aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x23aa94: 0xada055d0  sw          $zero, 0x55D0($t5)
    ctx->pc = 0x23aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 21968), GPR_U32(ctx, 0));
    // 0x23aa98: 0xad8055f0  sw          $zero, 0x55F0($t4)
    ctx->pc = 0x23aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 22000), GPR_U32(ctx, 0));
    // 0x23aa9c: 0xad4055c0  sw          $zero, 0x55C0($t2)
    ctx->pc = 0x23aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 21952), GPR_U32(ctx, 0));
    // 0x23aaa0: 0xc08e9ce  jal         func_23A738
    ctx->pc = 0x23AAA0u;
    SET_GPR_U32(ctx, 31, 0x23AAA8u);
    ctx->pc = 0x23AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAA0u;
    // 0x23aaa4: 0xad6055e0  sw          $zero, 0x55E0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 21984), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A738u, 0x23AAA0u, 0x23AAA8u)) {
        return;
    }
    ctx->pc = 0x23AAA8u;
label_23aaa8:
    // 0x23aaa8: 0xc08ea24  jal         func_23A890
    ctx->pc = 0x23AAA8u;
    SET_GPR_U32(ctx, 31, 0x23AAB0u);
    ctx->pc = 0x23AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAA8u;
    // 0x23aaac: 0xaf82849c  sw          $v0, -0x7B64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A890u, 0x23AAA8u, 0x23AAB0u)) {
        return;
    }
    ctx->pc = 0x23AAB0u;
label_23aab0:
    // 0x23aab0: 0xc08e962  jal         func_23A588
    ctx->pc = 0x23AAB0u;
    SET_GPR_U32(ctx, 31, 0x23AAB8u);
    ctx->pc = 0x23AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAB0u;
    // 0x23aab4: 0xaf828498  sw          $v0, -0x7B68($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A588u, 0x23AAB0u, 0x23AAB8u)) {
        return;
    }
    ctx->pc = 0x23AAB8u;
label_23aab8:
    // 0x23aab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23AAB8u;
    {
        const bool branch_taken_0x23aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAB8u;
        // 0x23aabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aab8) {
            ctx->pc = 0x23AAC4u;
            goto label_23aac4;
        }
    }
    ctx->pc = 0x23AAC0u;
label_23aac0:
    // 0x23aac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23aac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aac4:
    // 0x23aac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAC8u;
        // 0x23aacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AAD0u;
}
