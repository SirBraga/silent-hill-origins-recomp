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

// Function: sub_0030DD70
// Address: 0x30dd70 - 0x30de68
void sub_0030DD70_0x30dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD70_0x30dd70");
#endif

    switch (ctx->pc) {
        case 0x30dd9cu: goto label_30dd9c;
        case 0x30ddccu: goto label_30ddcc;
        case 0x30ddf8u: goto label_30ddf8;
        case 0x30de38u: goto label_30de38;
        default: break;
    }

    ctx->pc = 0x30dd70u;

    // 0x30dd70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30dd74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30dd78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30dd7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30dd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30dd84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30dd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30dd8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dd90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dd94: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DD94u;
    SET_GPR_U32(ctx, 31, 0x30DD9Cu);
    ctx->pc = 0x30DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD94u;
    // 0x30dd98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DD94u, 0x30DD9Cu)) {
        return;
    }
    ctx->pc = 0x30DD9Cu;
label_30dd9c:
    // 0x30dd9c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30DD9Cu;
    {
        const bool branch_taken_0x30dd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD9Cu;
        // 0x30dda0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd9c) {
            ctx->pc = 0x30DE28u;
            goto label_30de28;
        }
    }
    ctx->pc = 0x30DDA4u;
    // 0x30dda4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x30dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30dda8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30ddac: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DDACu;
    {
        const bool branch_taken_0x30ddac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDACu;
        // 0x30ddb0: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddac) {
            ctx->pc = 0x30DE28u;
            goto label_30de28;
        }
    }
    ctx->pc = 0x30DDB4u;
    // 0x30ddb4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DDB4u;
    {
        const bool branch_taken_0x30ddb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDB4u;
        // 0x30ddb8: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddb4) {
            ctx->pc = 0x30DE28u;
            goto label_30de28;
        }
    }
    ctx->pc = 0x30DDBCu;
    // 0x30ddbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ddc0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ddc4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DDC4u;
    SET_GPR_U32(ctx, 31, 0x30DDCCu);
    ctx->pc = 0x30DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDC4u;
    // 0x30ddc8: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DDC4u, 0x30DDCCu)) {
        return;
    }
    ctx->pc = 0x30DDCCu;
label_30ddcc:
    // 0x30ddcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30DDCCu;
    {
        const bool branch_taken_0x30ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDCCu;
        // 0x30ddd0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddcc) {
            ctx->pc = 0x30DE00u;
            goto label_30de00;
        }
    }
    ctx->pc = 0x30DDD4u;
    // 0x30ddd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ddd8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30dddc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30DDDCu;
    {
        const bool branch_taken_0x30dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDDCu;
        // 0x30dde0: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dddc) {
            ctx->pc = 0x30DE00u;
            goto label_30de00;
        }
    }
    ctx->pc = 0x30DDE4u;
    // 0x30dde4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DDE4u;
    {
        const bool branch_taken_0x30dde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDE4u;
        // 0x30dde8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dde4) {
            ctx->pc = 0x30DE00u;
            goto label_30de00;
        }
    }
    ctx->pc = 0x30DDECu;
    // 0x30ddec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ddf0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DDF0u;
    SET_GPR_U32(ctx, 31, 0x30DDF8u);
    ctx->pc = 0x30DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDF0u;
    // 0x30ddf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DDF0u, 0x30DDF8u)) {
        return;
    }
    ctx->pc = 0x30DDF8u;
label_30ddf8:
    // 0x30ddf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DDF8u;
    {
        const bool branch_taken_0x30ddf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ddf8) {
            ctx->pc = 0x30DE08u;
            goto label_30de08;
        }
    }
    ctx->pc = 0x30DE00u;
label_30de00:
    // 0x30de00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DE00u;
    {
        const bool branch_taken_0x30de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE00u;
        // 0x30de04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de00) {
            ctx->pc = 0x30DE20u;
            goto label_30de20;
        }
    }
    ctx->pc = 0x30DE08u;
label_30de08:
    // 0x30de08: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DE08u;
    {
        const bool branch_taken_0x30de08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE08u;
        // 0x30de0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de08) {
            ctx->pc = 0x30DE20u;
            goto label_30de20;
        }
    }
    ctx->pc = 0x30DE10u;
    // 0x30de10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30de14: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30de18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30de18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30de1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30de20:
    // 0x30de20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DE20u;
    {
        const bool branch_taken_0x30de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30de20) {
            ctx->pc = 0x30DE30u;
            goto label_30de30;
        }
    }
    ctx->pc = 0x30DE28u;
label_30de28:
    // 0x30de28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30DE28u;
    {
        const bool branch_taken_0x30de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE28u;
        // 0x30de2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de28) {
            ctx->pc = 0x30DE50u;
            goto label_30de50;
        }
    }
    ctx->pc = 0x30DE30u;
label_30de30:
    // 0x30de30: 0xc0b5ac6  jal         func_2D6B18
    ctx->pc = 0x30DE30u;
    SET_GPR_U32(ctx, 31, 0x30DE38u);
    ctx->pc = 0x30DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DE30u;
    // 0x30de34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x30DE30u, 0x30DE38u)) {
        return;
    }
    ctx->pc = 0x30DE38u;
label_30de38:
    // 0x30de38: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DE38u;
    {
        const bool branch_taken_0x30de38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE38u;
        // 0x30de3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de38) {
            ctx->pc = 0x30DE50u;
            goto label_30de50;
        }
    }
    ctx->pc = 0x30DE40u;
    // 0x30de40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30de44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30de48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30de48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30de4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30de50:
    // 0x30de50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30de50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30de54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30de54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30de58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30de58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30de5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30de5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30de60: 0x3e00008  jr          $ra
    ctx->pc = 0x30DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE60u;
        // 0x30de64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DE68u;
}
