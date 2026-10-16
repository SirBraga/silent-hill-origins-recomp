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

// Function: sub_002EABD0
// Address: 0x2eabd0 - 0x2ead20
void sub_002EABD0_0x2eabd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EABD0_0x2eabd0");
#endif

    switch (ctx->pc) {
        case 0x2eabf4u: goto label_2eabf4;
        case 0x2eac24u: goto label_2eac24;
        case 0x2eac58u: goto label_2eac58;
        case 0x2eac7cu: goto label_2eac7c;
        case 0x2eaca0u: goto label_2eaca0;
        default: break;
    }

    ctx->pc = 0x2eabd0u;

    // 0x2eabd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eabd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eabd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eabd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eabdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eabdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabe0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2eabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2eabe4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2eabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2eabe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eabec: 0xc0b6a70  jal         func_2DA9C0
    ctx->pc = 0x2EABECu;
    SET_GPR_U32(ctx, 31, 0x2EABF4u);
    ctx->pc = 0x2EABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABECu;
    // 0x2eabf0: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA9C0u, 0x2EABECu, 0x2EABF4u)) {
        return;
    }
    ctx->pc = 0x2EABF4u;
label_2eabf4:
    // 0x2eabf4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2eabf8: 0x262313b0  addiu       $v1, $s1, 0x13B0
    ctx->pc = 0x2eabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5040));
    // 0x2eabfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eabfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eac00: 0x8f84908c  lw          $a0, -0x6F74($gp)
    ctx->pc = 0x2eac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x2eac04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eac08: 0x1444003f  bne         $v0, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EAC08u;
    {
        const bool branch_taken_0x2eac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC08u;
        // 0x2eac0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac08) {
            ctx->pc = 0x2EAD08u;
            goto label_2ead08;
        }
    }
    ctx->pc = 0x2EAC10u;
    // 0x2eac10: 0x262306c0  addiu       $v1, $s1, 0x6C0
    ctx->pc = 0x2eac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x2eac14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2eac14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2eac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac1c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2eac1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac20: 0x26250d3f  addiu       $a1, $s1, 0xD3F
    ctx->pc = 0x2eac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3391));
label_2eac24:
    // 0x2eac24: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2eac24u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eac28: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2eac28u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2eac2c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2eac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2eac30: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x2eac30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x2eac34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2eac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2eac38: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EAC38u;
    {
        const bool branch_taken_0x2eac38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC38u;
        // 0x2eac3c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac38) {
            ctx->pc = 0x2EAC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eac24;
        }
    }
    ctx->pc = 0x2EAC40u;
    // 0x2eac40: 0x8f82908c  lw          $v0, -0x6F74($gp)
    ctx->pc = 0x2eac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x2eac44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eac4c: 0xaf82908c  sw          $v0, -0x6F74($gp)
    ctx->pc = 0x2eac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 2));
    // 0x2eac50: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2EAC50u;
    SET_GPR_U32(ctx, 31, 0x2EAC58u);
    ctx->pc = 0x2EAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC50u;
    // 0x2eac54: 0xae020cf0  sw          $v0, 0xCF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2EAC50u, 0x2EAC58u)) {
        return;
    }
    ctx->pc = 0x2EAC58u;
label_2eac58:
    // 0x2eac58: 0x8e0413a4  lw          $a0, 0x13A4($s0)
    ctx->pc = 0x2eac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5028)));
    // 0x2eac5c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2eac5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eac60: 0x8f8a908c  lw          $t2, -0x6F74($gp)
    ctx->pc = 0x2eac60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x2eac64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eac64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac68: 0x24060680  addiu       $a2, $zero, 0x680
    ctx->pc = 0x2eac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x2eac6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eac70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac74: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EAC74u;
    SET_GPR_U32(ctx, 31, 0x2EAC7Cu);
    ctx->pc = 0x2EAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC74u;
    // 0x2eac78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EAC74u, 0x2EAC7Cu)) {
        return;
    }
    ctx->pc = 0x2EAC7Cu;
label_2eac7c:
    // 0x2eac7c: 0x8e0213a0  lw          $v0, 0x13A0($s0)
    ctx->pc = 0x2eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5024)));
    // 0x2eac80: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EAC80u;
    {
        const bool branch_taken_0x2eac80 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC80u;
        // 0x2eac84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac80) {
            ctx->pc = 0x2EAD04u;
            goto label_2ead04;
        }
    }
    ctx->pc = 0x2EAC88u;
    // 0x2eac88: 0x3c0b2000  lui         $t3, 0x2000
    ctx->pc = 0x2eac88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8192 << 16));
    // 0x2eac8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2eac8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eac90: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2eac90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eac94: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eac98: 0x26060d00  addiu       $a2, $s0, 0xD00
    ctx->pc = 0x2eac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x2eac9c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2eac9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eaca0:
    // 0x2eaca0: 0xcb2025  or          $a0, $a2, $t3
    ctx->pc = 0x2eaca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x2eaca4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eaca8: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EACA8u;
    {
        const bool branch_taken_0x2eaca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2EACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACA8u;
        // 0x2eacac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaca8) {
            ctx->pc = 0x2EACBCu;
            goto label_2eacbc;
        }
    }
    ctx->pc = 0x2EACB0u;
    // 0x2eacb0: 0x54480001  bnel        $v0, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EACB0u;
    {
        const bool branch_taken_0x2eacb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2eacb0) {
            ctx->pc = 0x2EACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EACB0u;
            // 0x2eacb4: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EACB8u;
            goto label_2eacb8;
        }
    }
    ctx->pc = 0x2EACB8u;
label_2eacb8:
    // 0x2eacb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2eacbc:
    // 0x2eacbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eacc0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EACC0u;
    {
        const bool branch_taken_0x2eacc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2eacc0) {
            ctx->pc = 0x2EACD0u;
            goto label_2eacd0;
        }
    }
    ctx->pc = 0x2EACC8u;
    // 0x2eacc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EACC8u;
    {
        const bool branch_taken_0x2eacc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACC8u;
        // 0x2eaccc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacc8) {
            ctx->pc = 0x2EACE8u;
            goto label_2eace8;
        }
    }
    ctx->pc = 0x2EACD0u;
label_2eacd0:
    // 0x2eacd0: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EACD0u;
    {
        const bool branch_taken_0x2eacd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2EACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACD0u;
        // 0x2eacd4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacd0) {
            ctx->pc = 0x2EACE8u;
            goto label_2eace8;
        }
    }
    ctx->pc = 0x2EACD8u;
    // 0x2eacd8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2eacd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2eacdc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2eacdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2eace0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EACE0u;
    {
        const bool branch_taken_0x2eace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACE0u;
        // 0x2eace4: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eace0) {
            ctx->pc = 0x2EACECu;
            goto label_2eacec;
        }
    }
    ctx->pc = 0x2EACE8u;
label_2eace8:
    // 0x2eace8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2eace8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2eacec:
    // 0x2eacec: 0x8e0213a0  lw          $v0, 0x13A0($s0)
    ctx->pc = 0x2eacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5024)));
    // 0x2eacf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2eacf4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2eacf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2eacf8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eacfc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EACFCu;
    {
        const bool branch_taken_0x2eacfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACFCu;
        // 0x2ead00: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacfc) {
            ctx->pc = 0x2EACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaca0;
        }
    }
    ctx->pc = 0x2EAD04u;
label_2ead04:
    // 0x2ead04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ead04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ead08:
    // 0x2ead08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ead08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ead0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ead0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ead10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ead10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ead14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ead18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD18u;
        // 0x2ead1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAD20u;
}
