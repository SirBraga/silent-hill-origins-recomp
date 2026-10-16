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

// Function: sub_00216DC8
// Address: 0x216dc8 - 0x216ea0
void sub_00216DC8_0x216dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216DC8_0x216dc8");
#endif

    switch (ctx->pc) {
        case 0x216e20u: goto label_216e20;
        case 0x216e60u: goto label_216e60;
        default: break;
    }

    ctx->pc = 0x216dc8u;

    // 0x216dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216dcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x216dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x216dd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x216dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x216dd4: 0x14a20028  bne         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x216DD4u;
    {
        const bool branch_taken_0x216dd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x216DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD4u;
        // 0x216dd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dd4) {
            ctx->pc = 0x216E78u;
            goto label_216e78;
        }
    }
    ctx->pc = 0x216DDCu;
    // 0x216ddc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216DDCu;
    {
        const bool branch_taken_0x216ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DDCu;
        // 0x216de0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ddc) {
            ctx->pc = 0x216E04u;
            goto label_216e04;
        }
    }
    ctx->pc = 0x216DE4u;
    // 0x216de4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x216de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x216de8: 0x24442d30  addiu       $a0, $v0, 0x2D30
    ctx->pc = 0x216de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11568));
    // 0x216dec: 0x24636570  addiu       $v1, $v1, 0x6570
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25968));
    // 0x216df0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x216df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x216df4: 0xac402d30  sw          $zero, 0x2D30($v0)
    ctx->pc = 0x216df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11568), GPR_U32(ctx, 0));
    // 0x216df8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x216df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x216dfc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x216DFCu;
    {
        const bool branch_taken_0x216dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DFCu;
        // 0x216e00: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dfc) {
            ctx->pc = 0x216E78u;
            goto label_216e78;
        }
    }
    ctx->pc = 0x216E04u;
label_216e04:
    // 0x216e04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x216e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x216e08: 0x24502d30  addiu       $s0, $v0, 0x2D30
    ctx->pc = 0x216e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11568));
    // 0x216e0c: 0x24636570  addiu       $v1, $v1, 0x6570
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25968));
    // 0x216e10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216e14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x216E14u;
    {
        const bool branch_taken_0x216e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E14u;
        // 0x216e18: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e14) {
            ctx->pc = 0x216E78u;
            goto label_216e78;
        }
    }
    ctx->pc = 0x216E1Cu;
    // 0x216e1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_216e20:
    // 0x216e20: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x216E20u;
    {
        const bool branch_taken_0x216e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e20) {
            ctx->pc = 0x216E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E20u;
            // 0x216e24: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E70u;
            goto label_216e70;
        }
    }
    ctx->pc = 0x216E28u;
    // 0x216e28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x216e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x216e2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216E2Cu;
    {
        const bool branch_taken_0x216e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E2Cu;
        // 0x216e30: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e2c) {
            ctx->pc = 0x216E3Cu;
            goto label_216e3c;
        }
    }
    ctx->pc = 0x216E34u;
    // 0x216e34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216E34u;
    {
        const bool branch_taken_0x216e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E34u;
        // 0x216e38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e34) {
            ctx->pc = 0x216E40u;
            goto label_216e40;
        }
    }
    ctx->pc = 0x216E3Cu;
label_216e3c:
    // 0x216e3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x216e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_216e40:
    // 0x216e40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x216e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216e44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216E44u;
    {
        const bool branch_taken_0x216e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E44u;
        // 0x216e48: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e44) {
            ctx->pc = 0x216E54u;
            goto label_216e54;
        }
    }
    ctx->pc = 0x216E4Cu;
    // 0x216e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216E4Cu;
    {
        const bool branch_taken_0x216e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E4Cu;
        // 0x216e50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e4c) {
            ctx->pc = 0x216E58u;
            goto label_216e58;
        }
    }
    ctx->pc = 0x216E54u;
label_216e54:
    // 0x216e54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x216e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_216e58:
    // 0x216e58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x216E58u;
    SET_GPR_U32(ctx, 31, 0x216E60u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x216E58u, 0x216E60u)) {
        return;
    }
    ctx->pc = 0x216E60u;
label_216e60:
    // 0x216e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216e64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x216e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216e68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x216e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x216e6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_216e70:
    // 0x216e70: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x216E70u;
    {
        const bool branch_taken_0x216e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e70) {
            ctx->pc = 0x216E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E70u;
            // 0x216e74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216e20;
        }
    }
    ctx->pc = 0x216E78u;
label_216e78:
    // 0x216e78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x216e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e80: 0x3e00008  jr          $ra
    ctx->pc = 0x216E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E80u;
        // 0x216e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216E88u;
    // 0x216e88: 0xac830298  sw          $v1, 0x298($a0)
    ctx->pc = 0x216e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 3));
    // 0x216e8c: 0x0  nop
    ctx->pc = 0x216e8cu;
    // NOP
    // 0x216e90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x216e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x216e94: 0x0  nop
    ctx->pc = 0x216e94u;
    // NOP
    // 0x216e98: 0x0  nop
    ctx->pc = 0x216e98u;
    // NOP
    // 0x216e9c: 0x0  nop
    ctx->pc = 0x216e9cu;
    // NOP
    ctx->pc = 0x216ea0u;
}
