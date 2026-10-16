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

// Function: sub_00102D98
// Address: 0x102d98 - 0x102e60
void sub_00102D98_0x102d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102D98_0x102d98");
#endif

    switch (ctx->pc) {
        case 0x102dc4u: goto label_102dc4;
        case 0x102de8u: goto label_102de8;
        case 0x102df4u: goto label_102df4;
        default: break;
    }

    ctx->pc = 0x102d98u;

    // 0x102d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102d9c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x102d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x102da0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x102da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x102da4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x102da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x102da8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x102da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x102dac: 0x24528280  addiu       $s2, $v0, -0x7D80
    ctx->pc = 0x102dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935168));
    // 0x102db0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x102db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x102db4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x102db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102dbc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x102DBCu;
    SET_GPR_U32(ctx, 31, 0x102DC4u);
    ctx->pc = 0x102DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DBCu;
    // 0x102dc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x102DBCu, 0x102DC4u)) {
        return;
    }
    ctx->pc = 0x102DC4u;
label_102dc4:
    // 0x102dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102dc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x102dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x102dcc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x102dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x102dd0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x102dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x102dd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x102dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x102dd8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x102dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x102ddc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x102ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x102de0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x102de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x102de4: 0x0  nop
    ctx->pc = 0x102de4u;
    // NOP
label_102de8:
    // 0x102de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102dec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x102DECu;
    SET_GPR_U32(ctx, 31, 0x102DF4u);
    ctx->pc = 0x102DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DECu;
    // 0x102df0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x102DECu, 0x102DF4u)) {
        return;
    }
    ctx->pc = 0x102DF4u;
label_102df4:
    // 0x102df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102df8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102dfc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x102dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x102e00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102E00u;
    {
        const bool branch_taken_0x102e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E00u;
        // 0x102e04: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e00) {
            ctx->pc = 0x102E0Cu;
            goto label_102e0c;
        }
    }
    ctx->pc = 0x102E08u;
    // 0x102e08: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x102e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_102e0c:
    // 0x102e0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x102e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x102e10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x102e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102e18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x102e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102e20: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x102e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x102e24: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x102e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x102e28: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x102e28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x102e2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x102e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x102e30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x102E30u;
    {
        const bool branch_taken_0x102e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e30) {
            ctx->pc = 0x102DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102de8;
        }
    }
    ctx->pc = 0x102E38u;
    // 0x102e38: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x102e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x102e3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x102e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102e40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x102e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102e44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x102e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x102E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E4Cu;
        // 0x102e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E54u;
    // 0x102e54: 0x0  nop
    ctx->pc = 0x102e54u;
    // NOP
    // 0x102e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102e5c: 0x0  nop
    ctx->pc = 0x102e5cu;
    // NOP
    ctx->pc = 0x102e60u;
}
