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

// Function: sub_0029FDD0
// Address: 0x29fdd0 - 0x2a0008
void sub_0029FDD0_0x29fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FDD0_0x29fdd0");
#endif

    switch (ctx->pc) {
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe68u: goto label_29fe68;
        case 0x29feb8u: goto label_29feb8;
        case 0x29fed8u: goto label_29fed8;
        case 0x29ff58u: goto label_29ff58;
        case 0x29ffc0u: goto label_29ffc0;
        default: break;
    }

    ctx->pc = 0x29fdd0u;

    // 0x29fdd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29fdd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29fdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fddc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29fddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fde0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29fde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29fde4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29fde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fde8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29fdec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29fdf0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29fdf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29fdf8: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29fdfc: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x29fdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29fe00: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x29fe00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29fe04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FE04u;
    {
        const bool branch_taken_0x29fe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE04u;
        // 0x29fe08: 0x80c82d  daddu       $t9, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe04) {
            ctx->pc = 0x29FE20u;
            goto label_29fe20;
        }
    }
    ctx->pc = 0x29FE0Cu;
    // 0x29fe0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29fe0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29fe10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29fe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe18: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29fe1c: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x29fe1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_29fe20:
    // 0x29fe20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29fe24: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x29fe28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fe2c: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x29fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe30: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x29fe30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29fe34: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x29FE34u;
    SET_GPR_U32(ctx, 31, 0x29FE3Cu);
    ctx->pc = 0x29FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE34u;
    // 0x29fe38: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x29FE34u, 0x29FE3Cu)) {
        return;
    }
    ctx->pc = 0x29FE3Cu;
label_29fe3c:
    // 0x29fe3c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x29fe3cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe40: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x29fe40u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x29fe44: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x29fe48: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x29fe4c: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x29fe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29fe50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FE50u;
    {
        const bool branch_taken_0x29fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE50u;
        // 0x29fe54: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe50) {
            ctx->pc = 0x29FE8Cu;
            goto label_29fe8c;
        }
    }
    ctx->pc = 0x29FE58u;
    // 0x29fe58: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x29fe58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29fe5c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29fe60: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x29fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x29fe64: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x29fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_29fe68:
    // 0x29fe68: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x29fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x29fe6c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x29fe70: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29fe74: 0x0  nop
    ctx->pc = 0x29fe74u;
    // NOP
    // 0x29fe78: 0x0  nop
    ctx->pc = 0x29fe78u;
    // NOP
    // 0x29fe7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29FE7Cu;
    {
        const bool branch_taken_0x29fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe7c) {
            ctx->pc = 0x29FE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fe68;
        }
    }
    ctx->pc = 0x29FE84u;
    // 0x29fe84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29FE84u;
    {
        const bool branch_taken_0x29fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE84u;
        // 0x29fe88: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe84) {
            ctx->pc = 0x29FEA0u;
            goto label_29fea0;
        }
    }
    ctx->pc = 0x29FE8Cu;
label_29fe8c:
    // 0x29fe8c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x29fe90: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29fe94: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x29fe94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x29fe98: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x29fe9c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x29fe9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29fea0:
    // 0x29fea0: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x29fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x29fea4: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x29fea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x29fea8: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x29fea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x29feac: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x29FEACu;
    {
        const bool branch_taken_0x29feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEACu;
        // 0x29feb0: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29feac) {
            ctx->pc = 0x29FFBCu;
            goto label_29ffbc;
        }
    }
    ctx->pc = 0x29FEB4u;
    // 0x29feb4: 0x0  nop
    ctx->pc = 0x29feb4u;
    // NOP
label_29feb8:
    // 0x29feb8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x29feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x29febc: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x29febcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29fec0: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x29FEC0u;
    {
        const bool branch_taken_0x29fec0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEC0u;
        // 0x29fec4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fec0) {
            ctx->pc = 0x29FF34u;
            goto label_29ff34;
        }
    }
    ctx->pc = 0x29FEC8u;
    // 0x29fec8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x29fec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fecc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x29feccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fed0: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x29fed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x29fed4: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x29fed4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_29fed8:
    // 0x29fed8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29fedc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29fee0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x29fee4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x29fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29fee8: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x29fee8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x29feec: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x29feecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29fef0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x29fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x29fef4: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x29fef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29fef8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x29fef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29fefc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x29fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x29ff00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ff04: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x29ff08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29ff0c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x29ff0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x29ff10: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x29ff10u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x29ff14: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x29ff14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29ff18: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x29ff18u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x29ff1c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x29ff1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x29ff20: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29FF20u;
    {
        const bool branch_taken_0x29ff20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF20u;
        // 0x29ff24: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff20) {
            ctx->pc = 0x29FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fed8;
        }
    }
    ctx->pc = 0x29FF28u;
    // 0x29ff28: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x29ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x29ff2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29FF2Cu;
    {
        const bool branch_taken_0x29ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF2Cu;
        // 0x29ff30: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff2c) {
            ctx->pc = 0x29FF3Cu;
            goto label_29ff3c;
        }
    }
    ctx->pc = 0x29FF34u;
label_29ff34:
    // 0x29ff34: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x29ff34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x29ff38: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x29ff38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_29ff3c:
    // 0x29ff3c: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x29ff3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x29ff40: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x29FF40u;
    {
        const bool branch_taken_0x29ff40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF40u;
        // 0x29ff44: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff40) {
            ctx->pc = 0x29FFACu;
            goto label_29ffac;
        }
    }
    ctx->pc = 0x29FF48u;
    // 0x29ff48: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x29ff48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff4c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29ff50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x29ff50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff54: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x29ff54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ff58:
    // 0x29ff58: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ff5c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x29ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x29ff60: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x29ff60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x29ff64: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x29ff64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x29ff68: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x29ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29ff6c: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x29ff6cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x29ff70: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x29ff70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29ff74: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x29ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x29ff78: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x29ff78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29ff7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ff80: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x29ff84: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x29ff84u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x29ff88: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x29ff88u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x29ff8c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x29ff8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x29ff90: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29ff94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x29ff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29ff98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29ff9c: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x29ff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x29ffa0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29FFA0u;
    {
        const bool branch_taken_0x29ffa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFA0u;
        // 0x29ffa4: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffa0) {
            ctx->pc = 0x29FF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ff58;
        }
    }
    ctx->pc = 0x29FFA8u;
    // 0x29ffa8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x29ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_29ffac:
    // 0x29ffac: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x29ffacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffb0: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x29ffb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x29ffb4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x29FFB4u;
    {
        const bool branch_taken_0x29ffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFB4u;
        // 0x29ffb8: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffb4) {
            ctx->pc = 0x29FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29feb8;
        }
    }
    ctx->pc = 0x29FFBCu;
label_29ffbc:
    // 0x29ffbc: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x29ffbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_29ffc0:
    // 0x29ffc0: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FFC0u;
    {
        const bool branch_taken_0x29ffc0 = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x29ffc0) {
            ctx->pc = 0x29FFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FFC0u;
            // 0x29ffc4: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FFDCu;
            goto label_29ffdc;
        }
    }
    ctx->pc = 0x29FFC8u;
    // 0x29ffc8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x29ffcc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x29ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29ffd0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29FFD0u;
    {
        const bool branch_taken_0x29ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ffd0) {
            ctx->pc = 0x29FFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FFD0u;
            // 0x29ffd4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ffc0;
        }
    }
    ctx->pc = 0x29FFD8u;
    // 0x29ffd8: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x29ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_29ffdc:
    // 0x29ffdc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x29ffdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffe0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29ffe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ffe4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29ffe4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ffe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29ffe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ffec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29ffecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29fff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fff4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29fff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fffc: 0x3e00008  jr          $ra
    ctx->pc = 0x29FFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFFCu;
        // 0x2a0000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0004u;
    // 0x2a0004: 0x0  nop
    ctx->pc = 0x2a0004u;
    // NOP
    ctx->pc = 0x2a0008u;
}
