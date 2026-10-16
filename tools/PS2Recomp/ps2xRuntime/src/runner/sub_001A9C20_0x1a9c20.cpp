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

// Function: sub_001A9C20
// Address: 0x1a9c20 - 0x1a9d40
void sub_001A9C20_0x1a9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9C20_0x1a9c20");
#endif

    switch (ctx->pc) {
        case 0x1a9c40u: goto label_1a9c40;
        case 0x1a9cd8u: goto label_1a9cd8;
        default: break;
    }

    ctx->pc = 0x1a9c20u;

    // 0x1a9c20: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a9c20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c24: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x1a9c24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c28: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1a9c2c: 0x24680002  addiu       $t0, $v1, 0x2
    ctx->pc = 0x1a9c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a9c30: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1a9c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9c34: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A9C34u;
    {
        const bool branch_taken_0x1a9c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C34u;
        // 0x1a9c38: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c34) {
            ctx->pc = 0x1A9C9Cu;
            goto label_1a9c9c;
        }
    }
    ctx->pc = 0x1A9C3Cu;
    // 0x1a9c3c: 0x0  nop
    ctx->pc = 0x1a9c3cu;
    // NOP
label_1a9c40:
    // 0x1a9c40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1a9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a9c44: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a9c48: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1a9c4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9c50: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1a9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9c54: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1a9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9c5c: 0x0  nop
    ctx->pc = 0x1a9c5cu;
    // NOP
    // 0x1a9c60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9C60u;
    {
        const bool branch_taken_0x1a9c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C60u;
        // 0x1a9c64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c60) {
            ctx->pc = 0x1A9C6Cu;
            goto label_1a9c6c;
        }
    }
    ctx->pc = 0x1A9C68u;
    // 0x1a9c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c6c:
    // 0x1a9c6c: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x1a9c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1a9c70: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1a9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a9c74: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1a9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a9c78: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1a9c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c7c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a9c80: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1a9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a9c84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9c88: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a9c8c: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x1a9c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a9c90: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1a9c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9c94: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A9C94u;
    {
        const bool branch_taken_0x1a9c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C94u;
        // 0x1a9c98: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c94) {
            ctx->pc = 0x1A9C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9c40;
        }
    }
    ctx->pc = 0x1A9C9Cu;
label_1a9c9c:
    // 0x1a9c9c: 0x15060009  bne         $t0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9C9Cu;
    {
        const bool branch_taken_0x1a9c9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C9Cu;
        // 0x1a9ca0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c9c) {
            ctx->pc = 0x1A9CC4u;
            goto label_1a9cc4;
        }
    }
    ctx->pc = 0x1A9CA4u;
    // 0x1a9ca4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a9ca8: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a9cac: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a9cb0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a9cb4: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1a9cb8: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x1a9cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a9cbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a9cc0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a9cc4:
    // 0x1a9cc4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1a9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9cc8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1a9ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9CD0u;
    {
        const bool branch_taken_0x1a9cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CD0u;
        // 0x1a9cd4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cd0) {
            ctx->pc = 0x1A9CF4u;
            goto label_1a9cf4;
        }
    }
    ctx->pc = 0x1A9CD8u;
label_1a9cd8:
    // 0x1a9cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a9cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cdc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1a9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1a9ce0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1a9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9ce4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a9ce8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1a9cec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9cf0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1a9cf4:
    // 0x1a9cf4: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x1a9cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a9cf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9CF8u;
    {
        const bool branch_taken_0x1a9cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CF8u;
        // 0x1a9cfc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cf8) {
            ctx->pc = 0x1A9D2Cu;
            goto label_1a9d2c;
        }
    }
    ctx->pc = 0x1A9D00u;
    // 0x1a9d00: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1a9d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9d04: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a9d08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9d0c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9d14: 0x0  nop
    ctx->pc = 0x1a9d14u;
    // NOP
    // 0x1a9d18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9D18u;
    {
        const bool branch_taken_0x1a9d18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D18u;
        // 0x1a9d1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d18) {
            ctx->pc = 0x1A9D24u;
            goto label_1a9d24;
        }
    }
    ctx->pc = 0x1A9D20u;
    // 0x1a9d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a9d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d24:
    // 0x1a9d24: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A9D24u;
    {
        const bool branch_taken_0x1a9d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D24u;
        // 0x1a9d28: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d24) {
            ctx->pc = 0x1A9CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9cd8;
        }
    }
    ctx->pc = 0x1A9D2Cu;
label_1a9d2c:
    // 0x1a9d2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a9d30: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a9d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D34u;
        // 0x1a9d38: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9D3Cu;
    // 0x1a9d3c: 0x0  nop
    ctx->pc = 0x1a9d3cu;
    // NOP
    ctx->pc = 0x1a9d40u;
}
