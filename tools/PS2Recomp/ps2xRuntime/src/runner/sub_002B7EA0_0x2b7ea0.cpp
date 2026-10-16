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

// Function: sub_002B7EA0
// Address: 0x2b7ea0 - 0x2b80a0
void sub_002B7EA0_0x2b7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7EA0_0x2b7ea0");
#endif

    switch (ctx->pc) {
        case 0x2b7ed0u: goto label_2b7ed0;
        case 0x2b7f30u: goto label_2b7f30;
        case 0x2b7ff0u: goto label_2b7ff0;
        default: break;
    }

    ctx->pc = 0x2b7ea0u;

    // 0x2b7ea0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b7ea0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ea4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7ea8: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2b7eac: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2b7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b7eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7eb4: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b7eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7eb8: 0x10450018  beq         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7EB8u;
    {
        const bool branch_taken_0x2b7eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EB8u;
        // 0x2b7ebc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7eb8) {
            ctx->pc = 0x2B7F1Cu;
            goto label_2b7f1c;
        }
    }
    ctx->pc = 0x2B7EC0u;
    // 0x2b7ec0: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x2b7ec0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ec4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7ec8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2b7ec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ecc: 0x250c0  sll         $t2, $v0, 3
    ctx->pc = 0x2b7eccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b7ed0:
    // 0x2b7ed0: 0x14d1021  addu        $v0, $t2, $t5
    ctx->pc = 0x2b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x2b7ed4: 0x94490004  lhu         $t1, 0x4($v0)
    ctx->pc = 0x2b7ed4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7ed8: 0x91942  srl         $v1, $t1, 5
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
    // 0x2b7edc: 0x3124001f  andi        $a0, $t1, 0x1F
    ctx->pc = 0x2b7edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x2b7ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7ee4: 0x8f2004  sllv        $a0, $t7, $a0
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b7ee8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b7ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b7eec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7ef0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b7ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b7ef4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7EF4u;
    {
        const bool branch_taken_0x2b7ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ef4) {
            ctx->pc = 0x2B7EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7EF4u;
            // 0x2b7ef8: 0x8d820008  lw          $v0, 0x8($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F0Cu;
            goto label_2b7f0c;
        }
    }
    ctx->pc = 0x2B7EFCu;
    // 0x2b7efc: 0xa5690000  sh          $t1, 0x0($t3)
    ctx->pc = 0x2b7efcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7f00: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2b7f00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2b7f04: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x2b7f04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2b7f08: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x2b7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_2b7f0c:
    // 0x2b7f0c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2b7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2b7f10: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x2b7f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7f14: 0x1445ffee  bne         $v0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B7F14u;
    {
        const bool branch_taken_0x2b7f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2B7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F14u;
        // 0x2b7f18: 0x250c0  sll         $t2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f14) {
            ctx->pc = 0x2B7ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7ed0;
        }
    }
    ctx->pc = 0x2B7F1Cu;
label_2b7f1c:
    // 0x2b7f1c: 0x1100005d  beqz        $t0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2B7F1Cu;
    {
        const bool branch_taken_0x2b7f1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F1Cu;
        // 0x2b7f20: 0x2dc20002  sltiu       $v0, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f1c) {
            ctx->pc = 0x2B8094u;
            goto label_2b8094;
        }
    }
    ctx->pc = 0x2B7F24u;
    // 0x2b7f24: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B7F24u;
    {
        const bool branch_taken_0x2b7f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F24u;
        // 0x2b7f28: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f24) {
            ctx->pc = 0x2B8094u;
            goto label_2b8094;
        }
    }
    ctx->pc = 0x2B7F2Cu;
    // 0x2b7f2c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2b7f30:
    // 0x2b7f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b7f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f34: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2B7F34u;
    {
        const bool branch_taken_0x2b7f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F34u;
        // 0x2b7f38: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f34) {
            ctx->pc = 0x2B8084u;
            goto label_2b8084;
        }
    }
    ctx->pc = 0x2B7F3Cu;
    // 0x2b7f3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b7f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f40: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b7f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2b7f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f48: 0x1920001c  blez        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B7F48u;
    {
        const bool branch_taken_0x2b7f48 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2B7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F48u;
        // 0x2b7f4c: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f48) {
            ctx->pc = 0x2B7FBCu;
            goto label_2b7fbc;
        }
    }
    ctx->pc = 0x2B7F50u;
    // 0x2b7f50: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B7F50u;
    {
        const bool branch_taken_0x2b7f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F50u;
        // 0x2b7f54: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f50) {
            ctx->pc = 0x2B7FE8u;
            goto label_2b7fe8;
        }
    }
    ctx->pc = 0x2B7F58u;
    // 0x2b7f58: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B7F58u;
    {
        const bool branch_taken_0x2b7f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f58) {
            ctx->pc = 0x2B7F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F58u;
            // 0x2b7f5c: 0x94640002  lhu         $a0, 0x2($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7FC0u;
            goto label_2b7fc0;
        }
    }
    ctx->pc = 0x2B7F60u;
    // 0x2b7f60: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b7f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b7f64: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7F64u;
    {
        const bool branch_taken_0x2b7f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f64) {
            ctx->pc = 0x2B7F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F64u;
            // 0x2b7f68: 0x94640002  lhu         $a0, 0x2($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F98u;
            goto label_2b7f98;
        }
    }
    ctx->pc = 0x2B7F6Cu;
    // 0x2b7f6c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2b7f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b7f70: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b7f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7f74: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2b7f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7f78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7F78u;
    {
        const bool branch_taken_0x2b7f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f78) {
            ctx->pc = 0x2B7F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F78u;
            // 0x2b7f7c: 0x24a30002  addiu       $v1, $a1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F90u;
            goto label_2b7f90;
        }
    }
    ctx->pc = 0x2B7F80u;
    // 0x2b7f80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b7f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7f84: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2b7f84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7f88: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x2b7f88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7f8c: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2b7f90:
    // 0x2b7f90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b7f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7f94: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2b7f94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2b7f98:
    // 0x2b7f98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7f9c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b7f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7fa0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7FA0u;
    {
        const bool branch_taken_0x2b7fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fa0) {
            ctx->pc = 0x2B7FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7FA0u;
            // 0x2b7fa4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7FB8u;
            goto label_2b7fb8;
        }
    }
    ctx->pc = 0x2B7FA8u;
    // 0x2b7fa8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7fac: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b7facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7fb0: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x2b7fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7fb4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2b7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2b7fb8:
    // 0x2b7fb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b7fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2b7fbc:
    // 0x2b7fbc: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2b7fbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2b7fc0:
    // 0x2b7fc0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7fc4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b7fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7FC8u;
    {
        const bool branch_taken_0x2b7fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FC8u;
        // 0x2b7fcc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fc8) {
            ctx->pc = 0x2B7FDCu;
            goto label_2b7fdc;
        }
    }
    ctx->pc = 0x2B7FD0u;
    // 0x2b7fd0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7fd4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7fd8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x2b7fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b7fdc:
    // 0x2b7fdc: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2b7fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2b7fe0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B7FE0u;
    {
        const bool branch_taken_0x2b7fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FE0u;
        // 0x2b7fe4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fe0) {
            ctx->pc = 0x2B8084u;
            goto label_2b8084;
        }
    }
    ctx->pc = 0x2B7FE8u;
label_2b7fe8:
    // 0x2b7fe8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b7fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7fec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b7fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ff0:
    // 0x2b7ff0: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2b7ff4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b7ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7ff8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b7ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7ffc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7FFCu;
    {
        const bool branch_taken_0x2b7ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ffc) {
            ctx->pc = 0x2B8000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7FFCu;
            // 0x2b8000: 0x94e40004  lhu         $a0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8014u;
            goto label_2b8014;
        }
    }
    ctx->pc = 0x2B8004u;
    // 0x2b8004: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b8004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8008: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b8008u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b800c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x2b800cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8010: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x2b8010u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_2b8014:
    // 0x2b8014: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2b8014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b8018: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b8018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b801c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B801Cu;
    {
        const bool branch_taken_0x2b801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b801c) {
            ctx->pc = 0x2B8020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B801Cu;
            // 0x2b8020: 0x94e40006  lhu         $a0, 0x6($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8034u;
            goto label_2b8034;
        }
    }
    ctx->pc = 0x2B8024u;
    // 0x2b8024: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2b8024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b8028: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x2b8028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b802c: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x2b802cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8030: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x2b8030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_2b8034:
    // 0x2b8034: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2b8034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b8038: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b8038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b803c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B803Cu;
    {
        const bool branch_taken_0x2b803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b803c) {
            ctx->pc = 0x2B8040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B803Cu;
            // 0x2b8040: 0x94e40008  lhu         $a0, 0x8($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8054u;
            goto label_2b8054;
        }
    }
    ctx->pc = 0x2B8044u;
    // 0x2b8044: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2b8044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b8048: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x2b8048u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b804c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x2b804cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b8050: 0x94e40008  lhu         $a0, 0x8($a3)
    ctx->pc = 0x2b8050u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_2b8054:
    // 0x2b8054: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2b8054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2b8058: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b8058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b805c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B805Cu;
    {
        const bool branch_taken_0x2b805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B805Cu;
        // 0x2b8060: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b805c) {
            ctx->pc = 0x2B8070u;
            goto label_2b8070;
        }
    }
    ctx->pc = 0x2B8064u;
    // 0x2b8064: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2b8064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2b8068: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x2b8068u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b806c: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x2b806cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
label_2b8070:
    // 0x2b8070: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2b8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2b8074: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b8074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b8078: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x2b8078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2b807c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B807Cu;
    {
        const bool branch_taken_0x2b807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B807Cu;
        // 0x2b8080: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b807c) {
            ctx->pc = 0x2B7FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7ff0;
        }
    }
    ctx->pc = 0x2B8084u;
label_2b8084:
    // 0x2b8084: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2b8084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8088: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2b8088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b808c: 0x1040ffa8  beqz        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x2B808Cu;
    {
        const bool branch_taken_0x2b808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B808Cu;
        // 0x2b8090: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b808c) {
            ctx->pc = 0x2B7F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7f30;
        }
    }
    ctx->pc = 0x2B8094u;
label_2b8094:
    // 0x2b8094: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8094u;
        // 0x2b8098: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B809Cu;
    // 0x2b809c: 0x0  nop
    ctx->pc = 0x2b809cu;
    // NOP
    ctx->pc = 0x2b80a0u;
}
