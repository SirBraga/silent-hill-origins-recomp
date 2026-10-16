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

// Function: sub_0017AA98
// Address: 0x17aa98 - 0x17ac68
void sub_0017AA98_0x17aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA98_0x17aa98");
#endif

    switch (ctx->pc) {
        case 0x17aae0u: goto label_17aae0;
        case 0x17ab08u: goto label_17ab08;
        case 0x17ab34u: goto label_17ab34;
        case 0x17ab54u: goto label_17ab54;
        case 0x17ab5cu: goto label_17ab5c;
        case 0x17ab70u: goto label_17ab70;
        case 0x17abb0u: goto label_17abb0;
        case 0x17abd0u: goto label_17abd0;
        case 0x17abf0u: goto label_17abf0;
        case 0x17abf8u: goto label_17abf8;
        case 0x17ac18u: goto label_17ac18;
        case 0x17ac24u: goto label_17ac24;
        default: break;
    }

    ctx->pc = 0x17aa98u;

    // 0x17aa98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17aa9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17aaa0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17aaa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17aaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aaa8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17aaac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17aaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17aab0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17aab4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x17aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x17aab8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x17aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x17aabc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x17aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x17aac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aac4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17aac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AAC8u;
    {
        const bool branch_taken_0x17aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAC8u;
        // 0x17aacc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aac8) {
            ctx->pc = 0x17AAD8u;
            goto label_17aad8;
        }
    }
    ctx->pc = 0x17AAD0u;
    // 0x17aad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17AAD0u;
    {
        const bool branch_taken_0x17aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAD0u;
        // 0x17aad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aad0) {
            ctx->pc = 0x17AAE4u;
            goto label_17aae4;
        }
    }
    ctx->pc = 0x17AAD8u;
label_17aad8:
    // 0x17aad8: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17AAD8u;
    SET_GPR_U32(ctx, 31, 0x17AAE0u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17AAD8u, 0x17AAE0u)) {
        return;
    }
    ctx->pc = 0x17AAE0u;
label_17aae0:
    // 0x17aae0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17aae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17aae4:
    // 0x17aae4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x17AAE4u;
    {
        const bool branch_taken_0x17aae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAE4u;
        // 0x17aae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aae4) {
            ctx->pc = 0x17AC38u;
            goto label_17ac38;
        }
    }
    ctx->pc = 0x17AAECu;
    // 0x17aaec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17aaf0: 0x261500c8  addiu       $s5, $s0, 0xC8
    ctx->pc = 0x17aaf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x17aaf4: 0x24576a48  addiu       $s7, $v0, 0x6A48
    ctx->pc = 0x17aaf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x17aaf8: 0x2636000c  addiu       $s6, $s1, 0xC
    ctx->pc = 0x17aaf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x17aafc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17aafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab00: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17ab04: 0x0  nop
    ctx->pc = 0x17ab04u;
    // NOP
label_17ab08:
    // 0x17ab08: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x17ab08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17ab0c: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x17ab0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17ab10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ab14: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x17AB14u;
    {
        const bool branch_taken_0x17ab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB14u;
        // 0x17ab18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab14) {
            ctx->pc = 0x17ABD8u;
            goto label_17abd8;
        }
    }
    ctx->pc = 0x17AB1Cu;
    // 0x17ab1c: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x17ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x17ab20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ab24: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AB24u;
    {
        const bool branch_taken_0x17ab24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab24) {
            ctx->pc = 0x17AB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AB24u;
            // 0x17ab28: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AB40u;
            goto label_17ab40;
        }
    }
    ctx->pc = 0x17AB2Cu;
    // 0x17ab2c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x17AB2Cu;
    SET_GPR_U32(ctx, 31, 0x17AB34u);
    ctx->pc = 0x17AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB2Cu;
    // 0x17ab30: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x17AB2Cu, 0x17AB34u)) {
        return;
    }
    ctx->pc = 0x17AB34u;
label_17ab34:
    // 0x17ab34: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x17AB34u;
    {
        const bool branch_taken_0x17ab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab34) {
            ctx->pc = 0x17AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AB34u;
            // 0x17ab38: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ABDCu;
            goto label_17abdc;
        }
    }
    ctx->pc = 0x17AB3Cu;
    // 0x17ab3c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x17ab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17ab40:
    // 0x17ab40: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17AB40u;
    {
        const bool branch_taken_0x17ab40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB40u;
        // 0x17ab44: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab40) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17AB48u;
    // 0x17ab48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab4c: 0xc080dd6  jal         func_203758
    ctx->pc = 0x17AB4Cu;
    SET_GPR_U32(ctx, 31, 0x17AB54u);
    ctx->pc = 0x17AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB4Cu;
    // 0x17ab50: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x17AB4Cu, 0x17AB54u)) {
        return;
    }
    ctx->pc = 0x17AB54u;
label_17ab54:
    // 0x17ab54: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17AB54u;
    SET_GPR_U32(ctx, 31, 0x17AB5Cu);
    ctx->pc = 0x17AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB54u;
    // 0x17ab58: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17AB54u, 0x17AB5Cu)) {
        return;
    }
    ctx->pc = 0x17AB5Cu;
label_17ab5c:
    // 0x17ab5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ab60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17AB60u;
    {
        const bool branch_taken_0x17ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB60u;
        // 0x17ab64: 0xae17000c  sw          $s7, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab60) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AB68u;
    // 0x17ab68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ab6c: 0x0  nop
    ctx->pc = 0x17ab6cu;
    // NOP
label_17ab70:
    // 0x17ab70: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17AB70u;
    {
        const bool branch_taken_0x17ab70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab70) {
            ctx->pc = 0x17AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AB70u;
            // 0x17ab74: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ABC0u;
            goto label_17abc0;
        }
    }
    ctx->pc = 0x17AB78u;
    // 0x17ab78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17ab7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB7Cu;
    {
        const bool branch_taken_0x17ab7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB7Cu;
        // 0x17ab80: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab7c) {
            ctx->pc = 0x17AB8Cu;
            goto label_17ab8c;
        }
    }
    ctx->pc = 0x17AB84u;
    // 0x17ab84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AB84u;
    {
        const bool branch_taken_0x17ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB84u;
        // 0x17ab88: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab84) {
            ctx->pc = 0x17AB90u;
            goto label_17ab90;
        }
    }
    ctx->pc = 0x17AB8Cu;
label_17ab8c:
    // 0x17ab8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17ab90:
    // 0x17ab90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17ab94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB94u;
    {
        const bool branch_taken_0x17ab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB94u;
        // 0x17ab98: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab94) {
            ctx->pc = 0x17ABA4u;
            goto label_17aba4;
        }
    }
    ctx->pc = 0x17AB9Cu;
    // 0x17ab9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AB9Cu;
    {
        const bool branch_taken_0x17ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB9Cu;
        // 0x17aba0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab9c) {
            ctx->pc = 0x17ABA8u;
            goto label_17aba8;
        }
    }
    ctx->pc = 0x17ABA4u;
label_17aba4:
    // 0x17aba4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_17aba8:
    // 0x17aba8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17ABA8u;
    SET_GPR_U32(ctx, 31, 0x17ABB0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17ABA8u, 0x17ABB0u)) {
        return;
    }
    ctx->pc = 0x17ABB0u;
label_17abb0:
    // 0x17abb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17abb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17abb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17abbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17abc0:
    // 0x17abc0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17ABC0u;
    {
        const bool branch_taken_0x17abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17abc0) {
            ctx->pc = 0x17ABC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ABC0u;
            // 0x17abc4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17ABC8u;
label_17abc8:
    // 0x17abc8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17ABC8u;
    SET_GPR_U32(ctx, 31, 0x17ABD0u);
    ctx->pc = 0x17ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABC8u;
    // 0x17abcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17ABC8u, 0x17ABD0u)) {
        return;
    }
    ctx->pc = 0x17ABD0u;
label_17abd0:
    // 0x17abd0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x17abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x17abd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_17abd8:
    // 0x17abd8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x17abd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17abdc:
    // 0x17abdc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x17abdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17abe0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x17ABE0u;
    {
        const bool branch_taken_0x17abe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABE0u;
        // 0x17abe4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abe0) {
            ctx->pc = 0x17AB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab08;
        }
    }
    ctx->pc = 0x17ABE8u;
    // 0x17abe8: 0xc0804a8  jal         func_2012A0
    ctx->pc = 0x17ABE8u;
    SET_GPR_U32(ctx, 31, 0x17ABF0u);
    ctx->pc = 0x17ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABE8u;
    // 0x17abec: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2012A0u, 0x17ABE8u, 0x17ABF0u)) {
        return;
    }
    ctx->pc = 0x17ABF0u;
label_17abf0:
    // 0x17abf0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x17abf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17abf8:
    // 0x17abf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17abfc: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x17ABFCu;
    {
        const bool branch_taken_0x17abfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17abfc) {
            ctx->pc = 0x17AC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ABFCu;
            // 0x17ac00: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AC28u;
            goto label_17ac28;
        }
    }
    ctx->pc = 0x17AC04u;
    // 0x17ac04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ac08: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17AC08u;
    {
        const bool branch_taken_0x17ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac08) {
            ctx->pc = 0x17AC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AC08u;
            // 0x17ac0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AC28u;
            goto label_17ac28;
        }
    }
    ctx->pc = 0x17AC10u;
    // 0x17ac10: 0xc08180c  jal         func_206030
    ctx->pc = 0x17AC10u;
    SET_GPR_U32(ctx, 31, 0x17AC18u);
    ctx->pc = 0x17AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC10u;
    // 0x17ac14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206030u, 0x17AC10u, 0x17AC18u)) {
        return;
    }
    ctx->pc = 0x17AC18u;
label_17ac18:
    // 0x17ac18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac1c: 0xc08125c  jal         func_204970
    ctx->pc = 0x17AC1Cu;
    SET_GPR_U32(ctx, 31, 0x17AC24u);
    ctx->pc = 0x17AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC1Cu;
    // 0x17ac20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204970u, 0x17AC1Cu, 0x17AC24u)) {
        return;
    }
    ctx->pc = 0x17AC24u;
label_17ac24:
    // 0x17ac24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17ac24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17ac28:
    // 0x17ac28: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17ac28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17ac2c: 0x641fff2  bgez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x17AC2Cu;
    {
        const bool branch_taken_0x17ac2c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x17AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC2Cu;
        // 0x17ac30: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac2c) {
            ctx->pc = 0x17ABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17abf8;
        }
    }
    ctx->pc = 0x17AC34u;
    // 0x17ac34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ac38:
    // 0x17ac38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17ac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ac3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x17ac3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ac40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17ac40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ac44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17ac44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ac48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ac48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ac4c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x17ac4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ac50: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x17ac50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ac54: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x17ac54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC5Cu;
        // 0x17ac60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC64u;
    // 0x17ac64: 0x0  nop
    ctx->pc = 0x17ac64u;
    // NOP
    ctx->pc = 0x17ac68u;
}
