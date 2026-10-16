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

// Function: sub_0021DAB8
// Address: 0x21dab8 - 0x21db58
void sub_0021DAB8_0x21dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DAB8_0x21dab8");
#endif

    switch (ctx->pc) {
        case 0x21dadcu: goto label_21dadc;
        case 0x21dae8u: goto label_21dae8;
        case 0x21daf8u: goto label_21daf8;
        case 0x21db20u: goto label_21db20;
        default: break;
    }

    ctx->pc = 0x21dab8u;

    // 0x21dab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21dab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21dabc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21dabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21dac4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dac8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dacc: 0x8c490070  lw          $t1, 0x70($v0)
    ctx->pc = 0x21daccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x21dad0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21dad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dad4: 0xc084874  jal         func_2121D0
    ctx->pc = 0x21DAD4u;
    SET_GPR_U32(ctx, 31, 0x21DADCu);
    ctx->pc = 0x21DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAD4u;
    // 0x21dad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121D0u, 0x21DAD4u, 0x21DADCu)) {
        return;
    }
    ctx->pc = 0x21DADCu;
label_21dadc:
    // 0x21dadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21dadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dae0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAE0u;
        // 0x21dae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DAE8u;
label_21dae8:
    // 0x21dae8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21dae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21daec: 0x5000017  bltz        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21DAECu;
    {
        const bool branch_taken_0x21daec = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x21DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAECu;
        // 0x21daf0: 0x8c8b0070  lw          $t3, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daec) {
            ctx->pc = 0x21DB4Cu;
            goto label_21db4c;
        }
    }
    ctx->pc = 0x21DAF4u;
    // 0x21daf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21daf8:
    // 0x21daf8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21dafc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x21dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21db00: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21db04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21db08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21db0c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x21db0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db10: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x21db10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x21db14: 0x1160000b  beqz        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x21DB14u;
    {
        const bool branch_taken_0x21db14 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB14u;
        // 0x21db18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db14) {
            ctx->pc = 0x21DB44u;
            goto label_21db44;
        }
    }
    ctx->pc = 0x21DB1Cu;
    // 0x21db1c: 0x0  nop
    ctx->pc = 0x21db1cu;
    // NOP
label_21db20:
    // 0x21db20: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x21db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x21db24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21db24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21db2c: 0x12b102b  sltu        $v0, $t1, $t3
    ctx->pc = 0x21db2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x21db30: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21db30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x21db34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db38: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x21db38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21DB3Cu;
    {
        const bool branch_taken_0x21db3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB3Cu;
        // 0x21db40: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db3c) {
            ctx->pc = 0x21DB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21db20;
        }
    }
    ctx->pc = 0x21DB44u;
label_21db44:
    // 0x21db44: 0x503ffec  bgezl       $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21DB44u;
    {
        const bool branch_taken_0x21db44 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x21db44) {
            ctx->pc = 0x21DB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DB44u;
            // 0x21db48: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21daf8;
        }
    }
    ctx->pc = 0x21DB4Cu;
label_21db4c:
    // 0x21db4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DB54u;
    // 0x21db54: 0x0  nop
    ctx->pc = 0x21db54u;
    // NOP
    ctx->pc = 0x21db58u;
}
