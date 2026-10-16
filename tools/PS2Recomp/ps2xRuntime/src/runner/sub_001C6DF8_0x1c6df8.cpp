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

// Function: sub_001C6DF8
// Address: 0x1c6df8 - 0x1c6ec8
void sub_001C6DF8_0x1c6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6DF8_0x1c6df8");
#endif

    switch (ctx->pc) {
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6dfcu: goto label_1c6dfc;
        case 0x1c6e00u: goto label_1c6e00;
        case 0x1c6e04u: goto label_1c6e04;
        case 0x1c6e08u: goto label_1c6e08;
        case 0x1c6e0cu: goto label_1c6e0c;
        case 0x1c6e10u: goto label_1c6e10;
        case 0x1c6e14u: goto label_1c6e14;
        case 0x1c6e18u: goto label_1c6e18;
        case 0x1c6e1cu: goto label_1c6e1c;
        case 0x1c6e20u: goto label_1c6e20;
        case 0x1c6e24u: goto label_1c6e24;
        case 0x1c6e28u: goto label_1c6e28;
        case 0x1c6e2cu: goto label_1c6e2c;
        case 0x1c6e30u: goto label_1c6e30;
        case 0x1c6e34u: goto label_1c6e34;
        case 0x1c6e38u: goto label_1c6e38;
        case 0x1c6e3cu: goto label_1c6e3c;
        case 0x1c6e40u: goto label_1c6e40;
        case 0x1c6e44u: goto label_1c6e44;
        case 0x1c6e48u: goto label_1c6e48;
        case 0x1c6e4cu: goto label_1c6e4c;
        case 0x1c6e50u: goto label_1c6e50;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6e58u: goto label_1c6e58;
        case 0x1c6e5cu: goto label_1c6e5c;
        case 0x1c6e60u: goto label_1c6e60;
        case 0x1c6e64u: goto label_1c6e64;
        case 0x1c6e68u: goto label_1c6e68;
        case 0x1c6e6cu: goto label_1c6e6c;
        case 0x1c6e70u: goto label_1c6e70;
        case 0x1c6e74u: goto label_1c6e74;
        case 0x1c6e78u: goto label_1c6e78;
        case 0x1c6e7cu: goto label_1c6e7c;
        case 0x1c6e80u: goto label_1c6e80;
        case 0x1c6e84u: goto label_1c6e84;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e8cu: goto label_1c6e8c;
        case 0x1c6e90u: goto label_1c6e90;
        case 0x1c6e94u: goto label_1c6e94;
        case 0x1c6e98u: goto label_1c6e98;
        case 0x1c6e9cu: goto label_1c6e9c;
        case 0x1c6ea0u: goto label_1c6ea0;
        case 0x1c6ea4u: goto label_1c6ea4;
        case 0x1c6ea8u: goto label_1c6ea8;
        case 0x1c6eacu: goto label_1c6eac;
        case 0x1c6eb0u: goto label_1c6eb0;
        case 0x1c6eb4u: goto label_1c6eb4;
        case 0x1c6eb8u: goto label_1c6eb8;
        case 0x1c6ebcu: goto label_1c6ebc;
        case 0x1c6ec0u: goto label_1c6ec0;
        case 0x1c6ec4u: goto label_1c6ec4;
        default: break;
    }

    ctx->pc = 0x1c6df8u;

label_1c6df8:
    // 0x1c6df8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c6dfc:
    // 0x1c6dfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c6e00:
    // 0x1c6e00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c6e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c6e04:
    // 0x1c6e04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6e08:
    // 0x1c6e08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c6e0c:
    // 0x1c6e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6e10:
    // 0x1c6e10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c6e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c6e14:
    // 0x1c6e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6e18:
    // 0x1c6e18: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c6e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1c6e1c:
    // 0x1c6e1c: 0x0  nop
    ctx->pc = 0x1c6e1cu;
    // NOP
label_1c6e20:
    // 0x1c6e20: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c6e24:
    // 0x1c6e24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c6e28:
    // 0x1c6e28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c6e2c:
    // 0x1c6e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6e30:
    // 0x1c6e30: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c6e34:
    // 0x1c6e34: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1c6e38:
    if (ctx->pc == 0x1C6E38u) {
        ctx->pc = 0x1C6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E34u;
        // 0x1c6e38: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E3Cu;
        goto label_1c6e3c;
    }
    ctx->pc = 0x1C6E34u;
    {
        const bool branch_taken_0x1c6e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E34u;
        // 0x1c6e38: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e34) {
            ctx->pc = 0x1C6E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6e20;
        }
    }
    ctx->pc = 0x1C6E3Cu;
label_1c6e3c:
    // 0x1c6e3c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c6e40:
    // 0x1c6e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6e44:
    // 0x1c6e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6e48:
    // 0x1c6e48: 0x26110278  addiu       $s1, $s0, 0x278
    ctx->pc = 0x1c6e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_1c6e4c:
    // 0x1c6e4c: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1c6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1c6e50:
    // 0x1c6e50: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c6e54:
    // 0x1c6e54: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1c6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1c6e58:
    // 0x1c6e58: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c6e5c:
    // 0x1c6e5c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1c6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1c6e60:
    // 0x1c6e60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6e64:
    // 0x1c6e64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1c6e68:
    if (ctx->pc == 0x1C6E68u) {
        ctx->pc = 0x1C6E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E64u;
        // 0x1c6e68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E6Cu;
        goto label_1c6e6c;
    }
    ctx->pc = 0x1C6E64u;
    {
        const bool branch_taken_0x1c6e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e64) {
            ctx->pc = 0x1C6E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6E64u;
            // 0x1c6e68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6E7Cu;
            goto label_1c6e7c;
        }
    }
    ctx->pc = 0x1C6E6Cu;
label_1c6e6c:
    // 0x1c6e6c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c6e70:
    // 0x1c6e70: 0xc05cd22  jal         func_173488
label_1c6e74:
    if (ctx->pc == 0x1C6E74u) {
        ctx->pc = 0x1C6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E70u;
        // 0x1c6e74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E78u;
        goto label_1c6e78;
    }
    ctx->pc = 0x1C6E70u;
    SET_GPR_U32(ctx, 31, 0x1C6E78u);
    ctx->pc = 0x1C6E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E70u;
    // 0x1c6e74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173488u, 0x1C6E70u, 0x1C6E78u)) {
        return;
    }
    ctx->pc = 0x1C6E78u;
label_1c6e78:
    // 0x1c6e78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c6e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c6e7c:
    // 0x1c6e7c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_1c6e80:
    // 0x1c6e80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c6e84:
    if (ctx->pc == 0x1C6E84u) {
        ctx->pc = 0x1C6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E80u;
        // 0x1c6e84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E88u;
        goto label_1c6e88;
    }
    ctx->pc = 0x1C6E80u;
    {
        const bool branch_taken_0x1c6e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E80u;
        // 0x1c6e84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e80) {
            ctx->pc = 0x1C6E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6e60;
        }
    }
    ctx->pc = 0x1C6E88u;
label_1c6e88:
    // 0x1c6e88: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x1c6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1c6e8c:
    // 0x1c6e8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1c6e90:
    if (ctx->pc == 0x1C6E90u) {
        ctx->pc = 0x1C6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E8Cu;
        // 0x1c6e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E94u;
        goto label_1c6e94;
    }
    ctx->pc = 0x1C6E8Cu;
    {
        const bool branch_taken_0x1c6e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e8c) {
            ctx->pc = 0x1C6E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6E8Cu;
            // 0x1c6e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6EB4u;
            goto label_1c6eb4;
        }
    }
    ctx->pc = 0x1C6E94u;
label_1c6e94:
    // 0x1c6e94: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1c6e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c6e98:
    // 0x1c6e98: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c6e9c:
    // 0x1c6e9c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1c6e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1c6ea0:
    // 0x1c6ea0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c6ea4:
    // 0x1c6ea4: 0x60f809  jalr        $v1
label_1c6ea8:
    if (ctx->pc == 0x1C6EA8u) {
        ctx->pc = 0x1C6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EA4u;
        // 0x1c6ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EACu;
        goto label_1c6eac;
    }
    ctx->pc = 0x1C6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6EACu);
        ctx->pc = 0x1C6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EA4u;
        // 0x1c6ea8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6EA4u, 0x1C6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6EACu;
label_1c6eac:
    // 0x1c6eac: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c6eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
label_1c6eb0:
    // 0x1c6eb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c6eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c6eb4:
    // 0x1c6eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c6eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6eb8:
    // 0x1c6eb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c6eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6ebc:
    // 0x1c6ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6ec0:
    // 0x1c6ec0: 0x3e00008  jr          $ra
label_1c6ec4:
    if (ctx->pc == 0x1C6EC4u) {
        ctx->pc = 0x1C6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC0u;
        // 0x1c6ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EC8u;
        goto label_fallthrough_0x1c6ec0;
    }
    ctx->pc = 0x1C6EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC0u;
        // 0x1c6ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c6ec0:
    ctx->pc = 0x1C6EC8u;
}
