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

// Function: sub_00190DF0
// Address: 0x190df0 - 0x190e98
void sub_00190DF0_0x190df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190DF0_0x190df0");
#endif

    switch (ctx->pc) {
        case 0x190e1cu: goto label_190e1c;
        case 0x190e30u: goto label_190e30;
        case 0x190e50u: goto label_190e50;
        case 0x190e68u: goto label_190e68;
        default: break;
    }

    ctx->pc = 0x190df0u;

    // 0x190df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190df4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190df8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190e08: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x190e0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190E0Cu;
    {
        const bool branch_taken_0x190e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E0Cu;
        // 0x190e10: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e0c) {
            ctx->pc = 0x190E20u;
            goto label_190e20;
        }
    }
    ctx->pc = 0x190E14u;
    // 0x190e14: 0xc0643f8  jal         func_190FE0
    ctx->pc = 0x190E14u;
    SET_GPR_U32(ctx, 31, 0x190E1Cu);
    ctx->pc = 0x190FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190FE0u, 0x190E14u, 0x190E1Cu)) {
        return;
    }
    ctx->pc = 0x190E1Cu;
label_190e1c:
    // 0x190e1c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x190e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_190e20:
    // 0x190e20: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x190E20u;
    {
        const bool branch_taken_0x190e20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E20u;
        // 0x190e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e20) {
            ctx->pc = 0x190E38u;
            goto label_190e38;
        }
    }
    ctx->pc = 0x190E28u;
    // 0x190e28: 0xc065c40  jal         func_197100
    ctx->pc = 0x190E28u;
    SET_GPR_U32(ctx, 31, 0x190E30u);
    ctx->pc = 0x190E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E28u;
    // 0x190e2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x190E28u, 0x190E30u)) {
        return;
    }
    ctx->pc = 0x190E30u;
label_190e30:
    // 0x190e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190E30u;
    {
        const bool branch_taken_0x190e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e30) {
            ctx->pc = 0x190E3Cu;
            goto label_190e3c;
        }
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x190e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190e3c:
    // 0x190e3c: 0x8e1000a0  lw          $s0, 0xA0($s0)
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x190e40: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x190E40u;
    {
        const bool branch_taken_0x190e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E40u;
        // 0x190e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e40) {
            ctx->pc = 0x190E80u;
            goto label_190e80;
        }
    }
    ctx->pc = 0x190E48u;
    // 0x190e48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190e4c: 0x0  nop
    ctx->pc = 0x190e4cu;
    // NOP
label_190e50:
    // 0x190e50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x190e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x190e54: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190E54u;
    {
        const bool branch_taken_0x190e54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e54) {
            ctx->pc = 0x190E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E54u;
            // 0x190e58: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190E74u;
            goto label_190e74;
        }
    }
    ctx->pc = 0x190E5Cu;
    // 0x190e5c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190e60: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x190E60u;
    SET_GPR_U32(ctx, 31, 0x190E68u);
    ctx->pc = 0x190E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E60u;
    // 0x190e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x190E60u, 0x190E68u)) {
        return;
    }
    ctx->pc = 0x190E68u;
label_190e68:
    // 0x190e68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190E68u;
    {
        const bool branch_taken_0x190e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E68u;
        // 0x190e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e68) {
            ctx->pc = 0x190E80u;
            goto label_190e80;
        }
    }
    ctx->pc = 0x190E70u;
    // 0x190e70: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190e74:
    // 0x190e74: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x190E74u;
    {
        const bool branch_taken_0x190e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190e74) {
            ctx->pc = 0x190E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190E74u;
            // 0x190e78: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190e50;
        }
    }
    ctx->pc = 0x190E7Cu;
    // 0x190e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190e80:
    // 0x190e80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190e84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190e88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e90: 0x3e00008  jr          $ra
    ctx->pc = 0x190E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E90u;
        // 0x190e94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190E98u;
}
