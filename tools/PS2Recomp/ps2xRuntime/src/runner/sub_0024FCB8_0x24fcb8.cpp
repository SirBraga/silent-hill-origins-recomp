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

// Function: sub_0024FCB8
// Address: 0x24fcb8 - 0x24fdc0
void sub_0024FCB8_0x24fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FCB8_0x24fcb8");
#endif

    switch (ctx->pc) {
        case 0x24fd1cu: goto label_24fd1c;
        case 0x24fd30u: goto label_24fd30;
        default: break;
    }

    ctx->pc = 0x24fcb8u;

    // 0x24fcb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fcbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24fcc0: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x24fcc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24fcc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24fccc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24fcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24fcd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24fcd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24fcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fcdc: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x24fcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24fce0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24fce4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x24fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x24fce8: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x24fce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24fcec: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x24FCECu;
    {
        const bool branch_taken_0x24fcec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCECu;
        // 0x24fcf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcec) {
            ctx->pc = 0x24FDA4u;
            goto label_24fda4;
        }
    }
    ctx->pc = 0x24FCF4u;
    // 0x24fcf4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fcf8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x24fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x24fcfc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x24FCFCu;
    {
        const bool branch_taken_0x24fcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCFCu;
        // 0x24fd00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcfc) {
            ctx->pc = 0x24FDA4u;
            goto label_24fda4;
        }
    }
    ctx->pc = 0x24FD04u;
    // 0x24fd04: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24fd08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x24fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fd10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24fd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd14: 0xc094094  jal         func_250250
    ctx->pc = 0x24FD14u;
    SET_GPR_U32(ctx, 31, 0x24FD1Cu);
    ctx->pc = 0x24FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD14u;
    // 0x24fd18: 0x8c480020  lw          $t0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250250u, 0x24FD14u, 0x24FD1Cu)) {
        return;
    }
    ctx->pc = 0x24FD1Cu;
label_24fd1c:
    // 0x24fd1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24fd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd20: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24fd24: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24FD24u;
    {
        const bool branch_taken_0x24fd24 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD24u;
        // 0x24fd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd24) {
            ctx->pc = 0x24FD98u;
            goto label_24fd98;
        }
    }
    ctx->pc = 0x24FD2Cu;
    // 0x24fd2c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x24fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_24fd30:
    // 0x24fd30: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x24fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x24fd34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24fd38: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24fd3c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x24fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x24fd40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24fd44: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x24fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24fd48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24fd4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24fd50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24fd54: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x24fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x24fd58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24fd5c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x24fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24fd60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24fd64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24fd68: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24fd6c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x24fd70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24fd74: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x24fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24fd78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24fd7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fd80: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x24fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24fd84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24fd88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24fd8c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x24fd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24fd90: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x24FD90u;
    {
        const bool branch_taken_0x24fd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fd90) {
            ctx->pc = 0x24FD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD90u;
            // 0x24fd94: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fd30;
        }
    }
    ctx->pc = 0x24FD98u;
label_24fd98:
    // 0x24fd98: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x24fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x24fd9c: 0xacd10014  sw          $s1, 0x14($a2)
    ctx->pc = 0x24fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 17));
    // 0x24fda0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24fda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24fda4:
    // 0x24fda4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24fda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fda8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24fda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fdac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24fdacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24FDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDB4u;
        // 0x24fdb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FDBCu;
    // 0x24fdbc: 0x0  nop
    ctx->pc = 0x24fdbcu;
    // NOP
    ctx->pc = 0x24fdc0u;
}
