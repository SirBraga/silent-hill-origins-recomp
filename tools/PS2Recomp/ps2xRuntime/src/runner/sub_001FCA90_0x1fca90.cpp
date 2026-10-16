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

// Function: sub_001FCA90
// Address: 0x1fca90 - 0x1fcb50
void sub_001FCA90_0x1fca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCA90_0x1fca90");
#endif

    switch (ctx->pc) {
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        case 0x1fcb20u: goto label_1fcb20;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb28u: goto label_1fcb28;
        case 0x1fcb2cu: goto label_1fcb2c;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb38u: goto label_1fcb38;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb40u: goto label_1fcb40;
        case 0x1fcb44u: goto label_1fcb44;
        case 0x1fcb48u: goto label_1fcb48;
        case 0x1fcb4cu: goto label_1fcb4c;
        default: break;
    }

    ctx->pc = 0x1fca90u;

label_1fca90:
    // 0x1fca90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fca94:
    // 0x1fca94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fca94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca98:
    // 0x1fca98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fca9c:
    // 0x1fca9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fcaa0:
    // 0x1fcaa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcaa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcaa4:
    // 0x1fcaa4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fcaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fcaa8:
    // 0x1fcaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fcaac:
    // 0x1fcaac: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1fcaacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1fcab0:
    // 0x1fcab0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1fcab4:
    if (ctx->pc == 0x1FCAB4u) {
        ctx->pc = 0x1FCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAB0u;
        // 0x1fcab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCAB8u;
        goto label_1fcab8;
    }
    ctx->pc = 0x1FCAB0u;
    {
        const bool branch_taken_0x1fcab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAB0u;
        // 0x1fcab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcab0) {
            ctx->pc = 0x1FCADCu;
            goto label_1fcadc;
        }
    }
    ctx->pc = 0x1FCAB8u;
label_1fcab8:
    // 0x1fcab8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fcabc:
    // 0x1fcabc: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcac0:
    // 0x1fcac0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fcac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fcac4:
    // 0x1fcac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fcac8:
    // 0x1fcac8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1fcac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_1fcacc:
    // 0x1fcacc: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1fcad0:
    // 0x1fcad0: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcad4:
    // 0x1fcad4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_1fcad8:
    if (ctx->pc == 0x1FCAD8u) {
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x431826  xor         $v1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCADCu;
        goto label_1fcadc;
    }
    ctx->pc = 0x1FCAD4u;
    {
        const bool branch_taken_0x1fcad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x431826  xor         $v1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad4) {
            ctx->pc = 0x1FCAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcab8;
        }
    }
    ctx->pc = 0x1FCADCu;
label_1fcadc:
    // 0x1fcadc: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_1fcae0:
    // 0x1fcae0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1fcae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_1fcae4:
    // 0x1fcae4: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x1fcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
label_1fcae8:
    // 0x1fcae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fcaec:
    // 0x1fcaec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fcaf0:
    // 0x1fcaf0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fcaf4:
    // 0x1fcaf4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1fcaf8:
    if (ctx->pc == 0x1FCAF8u) {
        ctx->pc = 0x1FCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF4u;
        // 0x1fcaf8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCAFCu;
        goto label_1fcafc;
    }
    ctx->pc = 0x1FCAF4u;
    {
        const bool branch_taken_0x1fcaf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF4u;
        // 0x1fcaf8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf4) {
            ctx->pc = 0x1FCB2Cu;
            goto label_1fcb2c;
        }
    }
    ctx->pc = 0x1FCAFCu;
label_1fcafc:
    // 0x1fcafc: 0x2452108c  addiu       $s2, $v0, 0x108C
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1fcb00:
    // 0x1fcb00: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1fcb04:
    // 0x1fcb04: 0x0  nop
    ctx->pc = 0x1fcb04u;
    // NOP
label_1fcb08:
    // 0x1fcb08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb0c:
    // 0x1fcb0c: 0x40f809  jalr        $v0
label_1fcb10:
    if (ctx->pc == 0x1FCB10u) {
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB14u;
        goto label_1fcb14;
    }
    ctx->pc = 0x1FCB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCB14u);
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB0Cu, 0x1FCB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCB14u;
label_1fcb14:
    // 0x1fcb14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1fcb18:
    if (ctx->pc == 0x1FCB18u) {
        ctx->pc = 0x1FCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB14u;
        // 0x1fcb18: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB1Cu;
        goto label_1fcb1c;
    }
    ctx->pc = 0x1FCB14u;
    {
        const bool branch_taken_0x1fcb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb14) {
            ctx->pc = 0x1FCB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCB14u;
            // 0x1fcb18: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCB24u;
            goto label_1fcb24;
        }
    }
    ctx->pc = 0x1FCB1Cu;
label_1fcb1c:
    // 0x1fcb1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fcb20:
    if (ctx->pc == 0x1FCB20u) {
        ctx->pc = 0x1FCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB1Cu;
        // 0x1fcb20: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB24u;
        goto label_1fcb24;
    }
    ctx->pc = 0x1FCB1Cu;
    {
        const bool branch_taken_0x1fcb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB1Cu;
        // 0x1fcb20: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb1c) {
            ctx->pc = 0x1FCB34u;
            goto label_1fcb34;
        }
    }
    ctx->pc = 0x1FCB24u;
label_1fcb24:
    // 0x1fcb24: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1fcb28:
    if (ctx->pc == 0x1FCB28u) {
        ctx->pc = 0x1FCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB24u;
        // 0x1fcb28: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB2Cu;
        goto label_1fcb2c;
    }
    ctx->pc = 0x1FCB24u;
    {
        const bool branch_taken_0x1fcb24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb24) {
            ctx->pc = 0x1FCB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCB24u;
            // 0x1fcb28: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcb08;
        }
    }
    ctx->pc = 0x1FCB2Cu;
label_1fcb2c:
    // 0x1fcb2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fcb30:
    // 0x1fcb30: 0x244232b8  addiu       $v0, $v0, 0x32B8
    ctx->pc = 0x1fcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12984));
label_1fcb34:
    // 0x1fcb34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fcb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcb38:
    // 0x1fcb38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fcb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcb3c:
    // 0x1fcb3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fcb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcb40:
    // 0x1fcb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcb44:
    // 0x1fcb44: 0x3e00008  jr          $ra
label_1fcb48:
    if (ctx->pc == 0x1FCB48u) {
        ctx->pc = 0x1FCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB44u;
        // 0x1fcb48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB4Cu;
        goto label_1fcb4c;
    }
    ctx->pc = 0x1FCB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB44u;
        // 0x1fcb48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCB4Cu;
label_1fcb4c:
    // 0x1fcb4c: 0x0  nop
    ctx->pc = 0x1fcb4cu;
    // NOP
    ctx->pc = 0x1fcb50u;
}
