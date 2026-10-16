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

// Function: sub_002E7C18
// Address: 0x2e7c18 - 0x2e7da0
void sub_002E7C18_0x2e7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7C18_0x2e7c18");
#endif

    switch (ctx->pc) {
        case 0x2e7c58u: goto label_2e7c58;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d18u: goto label_2e7d18;
        default: break;
    }

    ctx->pc = 0x2e7c18u;

    // 0x2e7c18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e7c1c: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x2e7c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e7c20: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e7c24: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e7c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e7c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e7c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c2c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e7c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e7c30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c34: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e7c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e7c38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e7c3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e7c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e7c40: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e7c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e7c44: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2e7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2e7c48: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2e7c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2e7c4c: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2E7C4Cu;
    {
        const bool branch_taken_0x2e7c4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C4Cu;
        // 0x2e7c50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c4c) {
            ctx->pc = 0x2E7D68u;
            goto label_2e7d68;
        }
    }
    ctx->pc = 0x2E7C54u;
    // 0x2e7c54: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2e7c54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7c58:
    // 0x2e7c58: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e7c58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7c5c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2e7c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7c60: 0x122c02  srl         $a1, $s2, 16
    ctx->pc = 0x2e7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x2e7c64: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x2e7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x2e7c68: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x2e7c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2e7c6c: 0x111c02  srl         $v1, $s1, 16
    ctx->pc = 0x2e7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x2e7c70: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x2e7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2e7c74: 0x3066007f  andi        $a2, $v1, 0x7F
    ctx->pc = 0x2e7c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2e7c78: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2e7c78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2e7c7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e7c7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e7c80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e7c84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2e7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e7c88: 0x2ca30059  sltiu       $v1, $a1, 0x59
    ctx->pc = 0x2e7c88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e7c8c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e7c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7c90: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e7c94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7C94u;
    {
        const bool branch_taken_0x2e7c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C94u;
        // 0x2e7c98: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c94) {
            ctx->pc = 0x2E7CACu;
            goto label_2e7cac;
        }
    }
    ctx->pc = 0x2E7C9Cu;
    // 0x2e7c9c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C9Cu;
    {
        const bool branch_taken_0x2e7c9c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2E7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C9Cu;
        // 0x2e7ca0: 0x28c20059  slti        $v0, $a2, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c9c) {
            ctx->pc = 0x2E7CACu;
            goto label_2e7cac;
        }
    }
    ctx->pc = 0x2E7CA4u;
    // 0x2e7ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7CA4u;
    {
        const bool branch_taken_0x2e7ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CA4u;
        // 0x2e7ca8: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ca4) {
            ctx->pc = 0x2E7CB4u;
            goto label_2e7cb4;
        }
    }
    ctx->pc = 0x2E7CACu;
label_2e7cac:
    // 0x2e7cac: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E7CACu;
    {
        const bool branch_taken_0x2e7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CACu;
        // 0x2e7cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cac) {
            ctx->pc = 0x2E7D6Cu;
            goto label_2e7d6c;
        }
    }
    ctx->pc = 0x2E7CB4u;
label_2e7cb4:
    // 0x2e7cb4: 0x24f7ffff  addiu       $s7, $a3, -0x1
    ctx->pc = 0x2e7cb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e7cb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e7cb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cbc: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7cc0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e7cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7cc4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e7cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2e7cc8: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x2e7cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7ccc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e7cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7cd0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e7cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2e7cd4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2e7cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7cd8:
    // 0x2e7cd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e7cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cdc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e7cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7ce0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2e7ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7ce4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e7ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e7ce8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7CE8u;
    {
        const bool branch_taken_0x2e7ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CE8u;
        // 0x2e7cec: 0x26b60001  addiu       $s6, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ce8) {
            ctx->pc = 0x2E7D30u;
            goto label_2e7d30;
        }
    }
    ctx->pc = 0x2E7CF0u;
label_2e7cf0:
    // 0x2e7cf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7cf4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2e7cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2e7cf8: 0xc0ba124  jal         func_2E8490
    ctx->pc = 0x2E7CF8u;
    SET_GPR_U32(ctx, 31, 0x2E7D00u);
    ctx->pc = 0x2E7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CF8u;
    // 0x2e7cfc: 0x129102  srl         $s2, $s2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8490u, 0x2E7CF8u, 0x2E7D00u)) {
        return;
    }
    ctx->pc = 0x2E7D00u;
label_2e7d00:
    // 0x2e7d00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e7d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e7d04: 0x3224000f  andi        $a0, $s1, 0xF
    ctx->pc = 0x2e7d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2e7d08: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x2e7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2e7d0c: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x2e7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2e7d10: 0xc0ba124  jal         func_2E8490
    ctx->pc = 0x2E7D10u;
    SET_GPR_U32(ctx, 31, 0x2E7D18u);
    ctx->pc = 0x2E7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D10u;
    // 0x2e7d14: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8490u, 0x2E7D10u, 0x2E7D18u)) {
        return;
    }
    ctx->pc = 0x2E7D18u;
label_2e7d18:
    // 0x2e7d18: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2e7d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7d1c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e7d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7d20: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e7d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2e7d24: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x2e7d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7d28: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2e7d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7d2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2e7d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2e7d30:
    // 0x2e7d30: 0x16be0002  bne         $s5, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7D30u;
    {
        const bool branch_taken_0x2e7d30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2E7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D30u;
        // 0x2e7d34: 0x2a820008  slti        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d30) {
            ctx->pc = 0x2E7D3Cu;
            goto label_2e7d3c;
        }
    }
    ctx->pc = 0x2E7D38u;
    // 0x2e7d38: 0x2a820007  slti        $v0, $s4, 0x7
    ctx->pc = 0x2e7d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
label_2e7d3c:
    // 0x2e7d3c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E7D3Cu;
    {
        const bool branch_taken_0x2e7d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D3Cu;
        // 0x2e7d40: 0x3244000f  andi        $a0, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d3c) {
            ctx->pc = 0x2E7CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7cf0;
        }
    }
    ctx->pc = 0x2E7D44u;
    // 0x2e7d44: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x2e7d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d48: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x2e7d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e7d4c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E7D4Cu;
    {
        const bool branch_taken_0x2e7d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d4c) {
            ctx->pc = 0x2E7D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7D4Cu;
            // 0x2e7d50: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7cd8;
        }
    }
    ctx->pc = 0x2E7D54u;
    // 0x2e7d54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7d58: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2e7d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e7d60: 0x54e2ffbd  bnel        $a3, $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2E7D60u;
    {
        const bool branch_taken_0x2e7d60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7d60) {
            ctx->pc = 0x2E7D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7D60u;
            // 0x2e7d64: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7c58;
        }
    }
    ctx->pc = 0x2E7D68u;
label_2e7d68:
    // 0x2e7d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7d6c:
    // 0x2e7d6c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e7d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7d70: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e7d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7d74: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e7d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7d78: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e7d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7d7c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e7d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7d80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e7d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7d84: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e7d84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7d88: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2e7d88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7d8c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2e7d8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D94u;
        // 0x2e7d98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7D9Cu;
    // 0x2e7d9c: 0x0  nop
    ctx->pc = 0x2e7d9cu;
    // NOP
    ctx->pc = 0x2e7da0u;
}
