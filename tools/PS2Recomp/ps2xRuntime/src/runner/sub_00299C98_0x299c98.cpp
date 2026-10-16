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

// Function: sub_00299C98
// Address: 0x299c98 - 0x299d78
void sub_00299C98_0x299c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299C98_0x299c98");
#endif

    switch (ctx->pc) {
        case 0x299d4cu: goto label_299d4c;
        case 0x299d60u: goto label_299d60;
        default: break;
    }

    ctx->pc = 0x299c98u;

    // 0x299c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299c9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x299c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x299ca0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x299ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x299ca4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299ca8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x299cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cb4: 0x2444d838  addiu       $a0, $v0, -0x27C8
    ctx->pc = 0x299cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957112));
    // 0x299cb8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x299cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299cbc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x299cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cc0: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x299CC0u;
    {
        const bool branch_taken_0x299cc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x299CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CC0u;
        // 0x299cc4: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cc0) {
            ctx->pc = 0x299CF4u;
            goto label_299cf4;
        }
    }
    ctx->pc = 0x299CC8u;
    // 0x299cc8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x299cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299ccc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x299cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299cd0: 0xdc46d838  ld          $a2, -0x27C8($v0)
    ctx->pc = 0x299cd0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957112)));
    // 0x299cd4: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x299cd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299cd8: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x299cdc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x299cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x299ce0: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x299ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x299ce4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x299ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x299ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299cec: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x299cecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x299cf0: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x299cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_299cf4:
    // 0x299cf4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x299cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x299cf8: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x299cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x299cfc: 0x24e2d878  addiu       $v0, $a3, -0x2788
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957176));
    // 0x299d00: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299d04: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x299d04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x299d08: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x299d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x299d0c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x299d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299d10: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x299d10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299d14: 0xdce5d878  ld          $a1, -0x2788($a3)
    ctx->pc = 0x299d14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294957176)));
    // 0x299d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x299d1c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x299d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x299d20: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x299d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x299d24: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x299d24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x299d28: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299D28u;
    {
        const bool branch_taken_0x299d28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D28u;
        // 0x299d2c: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d28) {
            ctx->pc = 0x299D4Cu;
            goto label_299d4c;
        }
    }
    ctx->pc = 0x299D30u;
    // 0x299d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x299d34: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x299d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x299d38: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x299d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x299d3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299D3Cu;
    {
        const bool branch_taken_0x299d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D3Cu;
        // 0x299d40: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d3c) {
            ctx->pc = 0x299D4Cu;
            goto label_299d4c;
        }
    }
    ctx->pc = 0x299D44u;
    // 0x299d44: 0xc0808d4  jal         func_202350
    ctx->pc = 0x299D44u;
    SET_GPR_U32(ctx, 31, 0x299D4Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x299D44u, 0x299D4Cu)) {
        return;
    }
    ctx->pc = 0x299D4Cu;
label_299d4c:
    // 0x299d4c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x299d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x299d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299D50u;
    {
        const bool branch_taken_0x299d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D50u;
        // 0x299d54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d50) {
            ctx->pc = 0x299D64u;
            goto label_299d64;
        }
    }
    ctx->pc = 0x299D58u;
    // 0x299d58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x299D58u;
    SET_GPR_U32(ctx, 31, 0x299D60u);
    ctx->pc = 0x299D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D58u;
    // 0x299d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x299D58u, 0x299D60u)) {
        return;
    }
    ctx->pc = 0x299D60u;
label_299d60:
    // 0x299d60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x299d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_299d64:
    // 0x299d64: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x299d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299d68: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x299D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D6Cu;
        // 0x299d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D74u;
    // 0x299d74: 0x0  nop
    ctx->pc = 0x299d74u;
    // NOP
    ctx->pc = 0x299d78u;
}
