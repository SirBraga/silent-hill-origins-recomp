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

// Function: sub_0025FE80
// Address: 0x25fe80 - 0x25ffa8
void sub_0025FE80_0x25fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE80_0x25fe80");
#endif

    ctx->pc = 0x25fe80u;

    // 0x25fe80: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x25fe80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe84: 0x8d6a0018  lw          $t2, 0x18($t3)
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x25fe88: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x25fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x25fe8c: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x25fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x25fe90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25fe94: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x25FE94u;
    {
        const bool branch_taken_0x25fe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE94u;
        // 0x25fe98: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe94) {
            ctx->pc = 0x25FFA0u;
            goto label_25ffa0;
        }
    }
    ctx->pc = 0x25FE9Cu;
    // 0x25fe9c: 0x91420008  lbu         $v0, 0x8($t2)
    ctx->pc = 0x25fe9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x25fea0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x25fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x25fea4: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x25fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x25fea8: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x25fea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x25feac: 0x91440018  lbu         $a0, 0x18($t2)
    ctx->pc = 0x25feacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x25feb0: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x25feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
    // 0x25feb4: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x25feb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x25feb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25febc: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x25febcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x25fec0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x25fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x25fec4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25fec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25fec8: 0x8d270010  lw          $a3, 0x10($t1)
    ctx->pc = 0x25fec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x25fecc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x25feccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x25fed0: 0x644025  or          $t0, $v1, $a0
    ctx->pc = 0x25fed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25fed4: 0xad280018  sw          $t0, 0x18($t1)
    ctx->pc = 0x25fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x25fed8: 0xad260014  sw          $a2, 0x14($t1)
    ctx->pc = 0x25fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 6));
    // 0x25fedc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25fee0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x25FEE0u;
    {
        const bool branch_taken_0x25fee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE0u;
        // 0x25fee4: 0x24470018  addiu       $a3, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fee0) {
            ctx->pc = 0x25FFA0u;
            goto label_25ffa0;
        }
    }
    ctx->pc = 0x25FEE8u;
    // 0x25fee8: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x25fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x25feec: 0x1105000d  beq         $t0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x25FEECu;
    {
        const bool branch_taken_0x25feec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x25FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEECu;
        // 0x25fef0: 0x2564004c  addiu       $a0, $t3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25feec) {
            ctx->pc = 0x25FF24u;
            goto label_25ff24;
        }
    }
    ctx->pc = 0x25FEF4u;
    // 0x25fef4: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x25fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x25fef8: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x25fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x25fefc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25ff00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ff04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FF04u;
    {
        const bool branch_taken_0x25ff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF04u;
        // 0x25ff08: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff04) {
            ctx->pc = 0x25FF20u;
            goto label_25ff20;
        }
    }
    ctx->pc = 0x25FF0Cu;
    // 0x25ff0c: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x25ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x25ff10: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x25ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x25ff14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25FF14u;
    {
        const bool branch_taken_0x25ff14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF14u;
        // 0x25ff18: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff14) {
            ctx->pc = 0x25FF20u;
            goto label_25ff20;
        }
    }
    ctx->pc = 0x25FF1Cu;
    // 0x25ff1c: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x25ff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_25ff20:
    // 0x25ff20: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x25ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_25ff24:
    // 0x25ff24: 0x9542000c  lhu         $v0, 0xC($t2)
    ctx->pc = 0x25ff24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x25ff28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25FF28u;
    {
        const bool branch_taken_0x25ff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF28u;
        // 0x25ff2c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff28) {
            ctx->pc = 0x25FF60u;
            goto label_25ff60;
        }
    }
    ctx->pc = 0x25FF30u;
    // 0x25ff30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FF30u;
    {
        const bool branch_taken_0x25ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff30) {
            ctx->pc = 0x25FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FF30u;
            // 0x25ff34: 0x8d230014  lw          $v1, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FF48u;
            goto label_25ff48;
        }
    }
    ctx->pc = 0x25FF38u;
    // 0x25ff38: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x25ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x25ff3c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25ff40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25FF40u;
    {
        const bool branch_taken_0x25ff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF40u;
        // 0x25ff44: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff40) {
            ctx->pc = 0x25FF60u;
            goto label_25ff60;
        }
    }
    ctx->pc = 0x25FF48u;
label_25ff48:
    // 0x25ff48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x25ff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25ff4c: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x25ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x25ff50: 0x9542000c  lhu         $v0, 0xC($t2)
    ctx->pc = 0x25ff50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x25ff54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x25ff58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25ff58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25ff5c: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x25ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
label_25ff60:
    // 0x25ff60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ff64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ff68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25FF68u;
    {
        const bool branch_taken_0x25ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff68) {
            ctx->pc = 0x25FFA0u;
            goto label_25ffa0;
        }
    }
    ctx->pc = 0x25FF70u;
    // 0x25ff70: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x25ff70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x25ff74: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x25ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x25ff78: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FF78u;
    {
        const bool branch_taken_0x25ff78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25ff78) {
            ctx->pc = 0x25FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FF78u;
            // 0x25ff7c: 0x8d220014  lw          $v0, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FF98u;
            goto label_25ff98;
        }
    }
    ctx->pc = 0x25FF80u;
    // 0x25ff80: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25ff84: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x25ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x25ff88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FF88u;
    {
        const bool branch_taken_0x25ff88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25ff88) {
            ctx->pc = 0x25FFA0u;
            goto label_25ffa0;
        }
    }
    ctx->pc = 0x25FF90u;
    // 0x25ff90: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x25ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x25ff94: 0x0  nop
    ctx->pc = 0x25ff94u;
    // NOP
label_25ff98:
    // 0x25ff98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x25ff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x25ff9c: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x25ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_25ffa0:
    // 0x25ffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x25FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FFA8u;
}
