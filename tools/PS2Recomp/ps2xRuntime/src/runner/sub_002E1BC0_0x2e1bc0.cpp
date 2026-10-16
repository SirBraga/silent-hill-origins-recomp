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

// Function: sub_002E1BC0
// Address: 0x2e1bc0 - 0x2e1d30
void sub_002E1BC0_0x2e1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1BC0_0x2e1bc0");
#endif

    switch (ctx->pc) {
        case 0x2e1becu: goto label_2e1bec;
        case 0x2e1c00u: goto label_2e1c00;
        case 0x2e1c18u: goto label_2e1c18;
        case 0x2e1c28u: goto label_2e1c28;
        case 0x2e1c40u: goto label_2e1c40;
        case 0x2e1c5cu: goto label_2e1c5c;
        case 0x2e1c74u: goto label_2e1c74;
        case 0x2e1ca0u: goto label_2e1ca0;
        case 0x2e1cb8u: goto label_2e1cb8;
        default: break;
    }

    ctx->pc = 0x2e1bc0u;

    // 0x2e1bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e1bc4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e1bc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e1bcc: 0x24a5f590  addiu       $a1, $a1, -0xA70
    ctx->pc = 0x2e1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
    // 0x2e1bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1bd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e1bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e1bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1bdc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e1bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e1be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1be4: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2E1BE4u;
    SET_GPR_U32(ctx, 31, 0x2E1BECu);
    ctx->pc = 0x2E1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BE4u;
    // 0x2e1be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2E1BE4u, 0x2E1BECu)) {
        return;
    }
    ctx->pc = 0x2E1BECu;
label_2e1bec:
    // 0x2e1bec: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x2e1becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1bf0: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x2e1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x2e1bf4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e1bf8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1BF8u;
    SET_GPR_U32(ctx, 31, 0x2E1C00u);
    ctx->pc = 0x2E1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BF8u;
    // 0x2e1bfc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1BF8u, 0x2E1C00u)) {
        return;
    }
    ctx->pc = 0x2E1C00u;
label_2e1c00:
    // 0x2e1c00: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1c04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1C08u;
    {
        const bool branch_taken_0x2e1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C08u;
        // 0x2e1c0c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c08) {
            ctx->pc = 0x2E1C20u;
            goto label_2e1c20;
        }
    }
    ctx->pc = 0x2E1C10u;
    // 0x2e1c10: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C10u;
    SET_GPR_U32(ctx, 31, 0x2E1C18u);
    ctx->pc = 0x2E1C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C10u;
    // 0x2e1c14: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C10u, 0x2E1C18u)) {
        return;
    }
    ctx->pc = 0x2E1C18u;
label_2e1c18:
    // 0x2e1c18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e1c1c: 0x0  nop
    ctx->pc = 0x2e1c1cu;
    // NOP
label_2e1c20:
    // 0x2e1c20: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C20u;
    SET_GPR_U32(ctx, 31, 0x2E1C28u);
    ctx->pc = 0x2E1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C20u;
    // 0x2e1c24: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C20u, 0x2E1C28u)) {
        return;
    }
    ctx->pc = 0x2E1C28u;
label_2e1c28:
    // 0x2e1c28: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1c2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1c30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1C30u;
    {
        const bool branch_taken_0x2e1c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C30u;
        // 0x2e1c34: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c30) {
            ctx->pc = 0x2E1C90u;
            goto label_2e1c90;
        }
    }
    ctx->pc = 0x2E1C38u;
    // 0x2e1c38: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C38u;
    SET_GPR_U32(ctx, 31, 0x2E1C40u);
    ctx->pc = 0x2E1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C38u;
    // 0x2e1c3c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C38u, 0x2E1C40u)) {
        return;
    }
    ctx->pc = 0x2E1C40u;
label_2e1c40:
    // 0x2e1c40: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1c44: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e1c48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1C48u;
    {
        const bool branch_taken_0x2e1c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C48u;
        // 0x2e1c4c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c48) {
            ctx->pc = 0x2E1C90u;
            goto label_2e1c90;
        }
    }
    ctx->pc = 0x2E1C50u;
    // 0x2e1c50: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e1c54: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C54u;
    SET_GPR_U32(ctx, 31, 0x2E1C5Cu);
    ctx->pc = 0x2E1C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C54u;
    // 0x2e1c58: 0x24530300  addiu       $s3, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C54u, 0x2E1C5Cu)) {
        return;
    }
    ctx->pc = 0x2E1C5Cu;
label_2e1c5c:
    // 0x2e1c5c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1c60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1c64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1C64u;
    {
        const bool branch_taken_0x2e1c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c64) {
            ctx->pc = 0x2E1C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1C64u;
            // 0x2e1c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1C80u;
            goto label_2e1c80;
        }
    }
    ctx->pc = 0x2E1C6Cu;
    // 0x2e1c6c: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C74u);
    ctx->pc = 0x2E1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C6Cu;
    // 0x2e1c70: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C6Cu, 0x2E1C74u)) {
        return;
    }
    ctx->pc = 0x2E1C74u;
label_2e1c74:
    // 0x2e1c74: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1c78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1c7c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e1c7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2e1c80:
    // 0x2e1c80: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e1c84: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e1c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1c88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1C88u;
    {
        const bool branch_taken_0x2e1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C88u;
        // 0x2e1c8c: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c88) {
            ctx->pc = 0x2E1CCCu;
            goto label_2e1ccc;
        }
    }
    ctx->pc = 0x2E1C90u;
label_2e1c90:
    // 0x2e1c90: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e1c94: 0x24530300  addiu       $s3, $v0, 0x300
    ctx->pc = 0x2e1c94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2e1c98: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1C98u;
    SET_GPR_U32(ctx, 31, 0x2E1CA0u);
    ctx->pc = 0x2E1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C98u;
    // 0x2e1c9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1C98u, 0x2E1CA0u)) {
        return;
    }
    ctx->pc = 0x2E1CA0u;
label_2e1ca0:
    // 0x2e1ca0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1ca4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e1ca8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1CA8u;
    {
        const bool branch_taken_0x2e1ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ca8) {
            ctx->pc = 0x2E1CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1CA8u;
            // 0x2e1cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1CC0u;
            goto label_2e1cc0;
        }
    }
    ctx->pc = 0x2E1CB0u;
    // 0x2e1cb0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E1CB0u;
    SET_GPR_U32(ctx, 31, 0x2E1CB8u);
    ctx->pc = 0x2E1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1CB0u;
    // 0x2e1cb4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E1CB0u, 0x2E1CB8u)) {
        return;
    }
    ctx->pc = 0x2E1CB8u;
label_2e1cb8:
    // 0x2e1cb8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e1cbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e1cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2e1cc0:
    // 0x2e1cc0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2e1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e1cc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1cc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e1ccc:
    // 0x2e1ccc: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e1cd0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2e1cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2e1cd4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2e1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2e1cd8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e1cdc: 0x24421f48  addiu       $v0, $v0, 0x1F48
    ctx->pc = 0x2e1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8008));
    // 0x2e1ce0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2e1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2e1ce4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e1ce8: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x2e1cec: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2e1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2e1cf0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e1cf4: 0x24422050  addiu       $v0, $v0, 0x2050
    ctx->pc = 0x2e1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8272));
    // 0x2e1cf8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2e1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2e1cfc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e1d00: 0x246320d0  addiu       $v1, $v1, 0x20D0
    ctx->pc = 0x2e1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8400));
    // 0x2e1d04: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2e1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2e1d08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e1d0c: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x2e1d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e1d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1d14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e1d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1d1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e1d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D24u;
        // 0x2e1d28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D2Cu;
    // 0x2e1d2c: 0x0  nop
    ctx->pc = 0x2e1d2cu;
    // NOP
    ctx->pc = 0x2e1d30u;
}
