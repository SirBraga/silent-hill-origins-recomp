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

// Function: sub_0015D088
// Address: 0x15d088 - 0x15d170
void sub_0015D088_0x15d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D088_0x15d088");
#endif

    switch (ctx->pc) {
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d134u: goto label_15d134;
        default: break;
    }

    ctx->pc = 0x15d088u;

    // 0x15d088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d08c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15d090: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15d090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15d094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d098: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15d09c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15d09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0a0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x15D0A0u;
    {
        const bool branch_taken_0x15d0a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0A0u;
        // 0x15d0a4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0a0) {
            ctx->pc = 0x15D150u;
            goto label_15d150;
        }
    }
    ctx->pc = 0x15D0A8u;
    // 0x15d0a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d0ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15D0ACu;
    {
        const bool branch_taken_0x15d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0ACu;
        // 0x15d0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0ac) {
            ctx->pc = 0x15D154u;
            goto label_15d154;
        }
    }
    ctx->pc = 0x15D0B4u;
    // 0x15d0b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15d0b8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15D0B8u;
    {
        const bool branch_taken_0x15d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0B8u;
        // 0x15d0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0b8) {
            ctx->pc = 0x15D154u;
            goto label_15d154;
        }
    }
    ctx->pc = 0x15D0C0u;
    // 0x15d0c0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D0C0u;
    {
        const bool branch_taken_0x15d0c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0C0u;
        // 0x15d0c4: 0x6802b  sltu        $s0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0c0) {
            ctx->pc = 0x15D0D0u;
            goto label_15d0d0;
        }
    }
    ctx->pc = 0x15D0C8u;
    // 0x15d0c8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x15d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x15d0cc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x15d0ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d0d0:
    // 0x15d0d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15D0D8u;
    SET_GPR_U32(ctx, 31, 0x15D0E0u);
    ctx->pc = 0x15D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0D8u;
    // 0x15d0dc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15D0D8u, 0x15D0E0u)) {
        return;
    }
    ctx->pc = 0x15D0E0u;
label_15d0e0:
    // 0x15d0e0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x15d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x15d0e4: 0x3c090016  lui         $t1, 0x16
    ctx->pc = 0x15d0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)22 << 16));
    // 0x15d0e8: 0x8ca48668  lw          $a0, -0x7998($a1)
    ctx->pc = 0x15d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338668u));
    // 0x15d0ec: 0x2529d010  addiu       $t1, $t1, -0x2FF0
    ctx->pc = 0x15d0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955024));
    // 0x15d0f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d0f4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x15d0f8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15d0fc: 0x3c0a0016  lui         $t2, 0x16
    ctx->pc = 0x15d0fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)22 << 16));
    // 0x15d100: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x15d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x15d104: 0x2442cf88  addiu       $v0, $v0, -0x3078
    ctx->pc = 0x15d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954888));
    // 0x15d108: 0x254ad068  addiu       $t2, $t2, -0x2F98
    ctx->pc = 0x15d108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955112));
    // 0x15d10c: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x15d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x15d110: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x15d110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x15d114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15d114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d118: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d11c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15d120: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15d120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15d124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d128: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x15d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x15d12c: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x15D12Cu;
    SET_GPR_U32(ctx, 31, 0x15D134u);
    ctx->pc = 0x15D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D12Cu;
    // 0x15d130: 0xafb1001c  sw          $s1, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x15D12Cu, 0x15D134u)) {
        return;
    }
    ctx->pc = 0x15D134u;
label_15d134:
    // 0x15d134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15d134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d138: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d13c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D13Cu;
    {
        const bool branch_taken_0x15d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D13Cu;
        // 0x15d140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d13c) {
            ctx->pc = 0x15D150u;
            goto label_15d150;
        }
    }
    ctx->pc = 0x15D144u;
    // 0x15d144: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15D148u;
    {
        const bool branch_taken_0x15d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D148u;
        // 0x15d14c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d148) {
            ctx->pc = 0x15D154u;
            goto label_15d154;
        }
    }
    ctx->pc = 0x15D150u;
label_15d150:
    // 0x15d150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15d150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d154:
    // 0x15d154: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15d154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d158: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15d158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d15c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15d15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d164: 0x3e00008  jr          $ra
    ctx->pc = 0x15D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D164u;
        // 0x15d168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D16Cu;
    // 0x15d16c: 0x0  nop
    ctx->pc = 0x15d16cu;
    // NOP
    ctx->pc = 0x15d170u;
}
