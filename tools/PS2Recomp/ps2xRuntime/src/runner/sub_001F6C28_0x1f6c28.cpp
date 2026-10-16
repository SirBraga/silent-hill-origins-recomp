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

// Function: sub_001F6C28
// Address: 0x1f6c28 - 0x1f71f8
void sub_001F6C28_0x1f6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6C28_0x1f6c28");
#endif

    ctx->pc = 0x1f6c28u;

    // 0x1f6c28: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1f6c28u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1f6c2c: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1f6c30: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1f6c30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1f6c34: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1f6c34u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1f6c38: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x1f6c38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f6c3c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1f6c3cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1f6c40: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1F6C40u;
    {
        const bool branch_taken_0x1f6c40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C40u;
        // 0x1f6c44: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c40) {
            ctx->pc = 0x1F700Cu;
            goto label_1f700c;
        }
    }
    ctx->pc = 0x1F6C48u;
    // 0x1f6c48: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1f6c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6c4c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1F6C4Cu;
    {
        const bool branch_taken_0x1f6c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C4Cu;
        // 0x1f6c50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c4c) {
            ctx->pc = 0x1F6D9Cu;
            goto label_1f6d9c;
        }
    }
    ctx->pc = 0x1F6C54u;
    // 0x1f6c54: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1f6c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6C58u;
    {
        const bool branch_taken_0x1f6c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C58u;
        // 0x1f6c5c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c58) {
            ctx->pc = 0x1F6C70u;
            goto label_1f6c70;
        }
    }
    ctx->pc = 0x1F6C60u;
    // 0x1f6c60: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1f6c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f6c64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f6c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6C68u;
    {
        const bool branch_taken_0x1f6c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C68u;
        // 0x1f6c6c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c68) {
            ctx->pc = 0x1F6C88u;
            goto label_1f6c88;
        }
    }
    ctx->pc = 0x1F6C70u;
label_1f6c70:
    // 0x1f6c70: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f6c74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6c78: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6c7c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1f6c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6c80: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1f6c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1f6c84: 0x0  nop
    ctx->pc = 0x1f6c84u;
    // NOP
label_1f6c88:
    // 0x1f6c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f6c8c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x1f6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x1f6c90: 0x24422ba0  addiu       $v0, $v0, 0x2BA0
    ctx->pc = 0x1f6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11168));
    // 0x1f6c94: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f6c98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f6c9c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f6c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6ca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6ca4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x1f6ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f6ca8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6CA8u;
    {
        const bool branch_taken_0x1f6ca8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CA8u;
        // 0x1f6cac: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ca8) {
            ctx->pc = 0x1F6CC4u;
            goto label_1f6cc4;
        }
    }
    ctx->pc = 0x1F6CB0u;
    // 0x1f6cb0: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x1f6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6cb4: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x1f6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6cb8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6cbc: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x1f6cbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f6cc0: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x1f6cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_1f6cc4:
    // 0x1f6cc4: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x1f6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1f6cc8: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1f6ccc: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x1f6cccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x1f6cd0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x1f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x1f6cd4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6CD4u;
    {
        const bool branch_taken_0x1f6cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6cd4) {
            ctx->pc = 0x1F6CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6CD4u;
            // 0x1f6cd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6CDCu;
            goto label_1f6cdc;
        }
    }
    ctx->pc = 0x1F6CDCu;
label_1f6cdc:
    // 0x1f6cdc: 0x1012  mflo        $v0
    ctx->pc = 0x1f6cdcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6ce0: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6ce0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6ce4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f6ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ce8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6cec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6cf0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6cf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6cf4: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x1f6cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6cf8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6cfc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6d00: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6D00u;
    {
        const bool branch_taken_0x1f6d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d00) {
            ctx->pc = 0x1F6D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D00u;
            // 0x1f6d04: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D34u;
            goto label_1f6d34;
        }
    }
    ctx->pc = 0x1F6D08u;
    // 0x1f6d08: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6d0c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6d10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6D10u;
    {
        const bool branch_taken_0x1f6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D10u;
        // 0x1f6d14: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d10) {
            ctx->pc = 0x1F6D30u;
            goto label_1f6d30;
        }
    }
    ctx->pc = 0x1F6D18u;
    // 0x1f6d18: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6d1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6D1Cu;
    {
        const bool branch_taken_0x1f6d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d1c) {
            ctx->pc = 0x1F6D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D1Cu;
            // 0x1f6d20: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D34u;
            goto label_1f6d34;
        }
    }
    ctx->pc = 0x1F6D24u;
    // 0x1f6d24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f6d28: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6d2c: 0x0  nop
    ctx->pc = 0x1f6d2cu;
    // NOP
label_1f6d30:
    // 0x1f6d30: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f6d34:
    // 0x1f6d34: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6D34u;
    {
        const bool branch_taken_0x1f6d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d34) {
            ctx->pc = 0x1F6D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D34u;
            // 0x1f6d38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D3Cu;
            goto label_1f6d3c;
        }
    }
    ctx->pc = 0x1F6D3Cu;
label_1f6d3c:
    // 0x1f6d3c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1f6d3cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f6d40: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x1f6d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x1f6d44: 0x1012  mflo        $v0
    ctx->pc = 0x1f6d44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6d48: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6d48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6d54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6d58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6d58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6d5c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x1f6d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6d60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6d64: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6d68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6D68u;
    {
        const bool branch_taken_0x1f6d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D68u;
        // 0x1f6d6c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d68) {
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D70u;
    // 0x1f6d70: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6d74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6D74u;
    {
        const bool branch_taken_0x1f6d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D74u;
        // 0x1f6d78: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d74) {
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D7Cu;
    // 0x1f6d7c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6d80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6D80u;
    {
        const bool branch_taken_0x1f6d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d80) {
            ctx->pc = 0x1F6D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D80u;
            // 0x1f6d84: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D88u;
label_1f6d88:
    // 0x1f6d88: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1f6d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1f6d8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f6d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f6d90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f6d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f6d94: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1F6D94u;
    {
        const bool branch_taken_0x1f6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D94u;
        // 0x1f6d98: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d94) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F6D9Cu;
label_1f6d9c:
    // 0x1f6d9c: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6D9Cu;
    {
        const bool branch_taken_0x1f6d9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D9Cu;
        // 0x1f6da0: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d9c) {
            ctx->pc = 0x1F6DC8u;
            goto label_1f6dc8;
        }
    }
    ctx->pc = 0x1F6DA4u;
    // 0x1f6da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6da8: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6DA8u;
    {
        const bool branch_taken_0x1f6da8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6da8) {
            ctx->pc = 0x1F6DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6DA8u;
            // 0x1f6dac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6DB0u;
            goto label_1f6db0;
        }
    }
    ctx->pc = 0x1F6DB0u;
label_1f6db0:
    // 0x1f6db0: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1f6db0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f6db4: 0x1012  mflo        $v0
    ctx->pc = 0x1f6db4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6db8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f6db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6dbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f6dc0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1f6dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6dc4: 0x0  nop
    ctx->pc = 0x1f6dc4u;
    // NOP
label_1f6dc8:
    // 0x1f6dc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6DC8u;
    {
        const bool branch_taken_0x1f6dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC8u;
        // 0x1f6dcc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc8) {
            ctx->pc = 0x1F6DE0u;
            goto label_1f6de0;
        }
    }
    ctx->pc = 0x1F6DD0u;
    // 0x1f6dd0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1f6dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f6dd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f6dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6DD8u;
    {
        const bool branch_taken_0x1f6dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DD8u;
        // 0x1f6ddc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dd8) {
            ctx->pc = 0x1F6DF8u;
            goto label_1f6df8;
        }
    }
    ctx->pc = 0x1F6DE0u;
label_1f6de0:
    // 0x1f6de0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f6de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6de8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6dec: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1f6decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6df0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1f6df0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1f6df4: 0x0  nop
    ctx->pc = 0x1f6df4u;
    // NOP
label_1f6df8:
    // 0x1f6df8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f6dfc: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x1f6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x1f6e00: 0x24422ba0  addiu       $v0, $v0, 0x2BA0
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11168));
    // 0x1f6e04: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f6e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f6e08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f6e0c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f6e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6e10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6e14: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f6e18: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6E18u;
    {
        const bool branch_taken_0x1f6e18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E18u;
        // 0x1f6e1c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e18) {
            ctx->pc = 0x1F6E34u;
            goto label_1f6e34;
        }
    }
    ctx->pc = 0x1F6E20u;
    // 0x1f6e20: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1f6e24: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6e28: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1f6e2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E2Cu;
        // 0x1f6e30: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6F38u;
            goto label_1f6f38;
        }
    }
    ctx->pc = 0x1F6E34u;
label_1f6e34:
    // 0x1f6e34: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6e38: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f6e3c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6e40: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f6e44: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f6e48: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x1f6e48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f6e4c: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1f6e50: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x1f6e50u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1f6e54: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x1f6e54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1f6e58: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f6e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e5c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1f6e60: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6E60u;
    {
        const bool branch_taken_0x1f6e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e60) {
            ctx->pc = 0x1F6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6E60u;
            // 0x1f6e64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6E68u;
            goto label_1f6e68;
        }
    }
    ctx->pc = 0x1F6E68u;
label_1f6e68:
    // 0x1f6e68: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x1f6e68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e6c: 0x1012  mflo        $v0
    ctx->pc = 0x1f6e6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6e70: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6e70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6e74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f6e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6e7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6e80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6e80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6e84: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x1f6e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6e88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6e8c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6e90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6E90u;
    {
        const bool branch_taken_0x1f6e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e90) {
            ctx->pc = 0x1F6E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6E90u;
            // 0x1f6e94: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EC4u;
            goto label_1f6ec4;
        }
    }
    ctx->pc = 0x1F6E98u;
    // 0x1f6e98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6e9c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6ea0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6EA0u;
    {
        const bool branch_taken_0x1f6ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA0u;
        // 0x1f6ea4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ea0) {
            ctx->pc = 0x1F6EC0u;
            goto label_1f6ec0;
        }
    }
    ctx->pc = 0x1F6EA8u;
    // 0x1f6ea8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6eac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6EACu;
    {
        const bool branch_taken_0x1f6eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6eac) {
            ctx->pc = 0x1F6EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6EACu;
            // 0x1f6eb0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EC4u;
            goto label_1f6ec4;
        }
    }
    ctx->pc = 0x1F6EB4u;
    // 0x1f6eb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f6eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f6eb8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6ebc: 0x0  nop
    ctx->pc = 0x1f6ebcu;
    // NOP
label_1f6ec0:
    // 0x1f6ec0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f6ec4:
    // 0x1f6ec4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6EC4u;
    {
        const bool branch_taken_0x1f6ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ec4) {
            ctx->pc = 0x1F6EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6EC4u;
            // 0x1f6ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6ECCu;
            goto label_1f6ecc;
        }
    }
    ctx->pc = 0x1F6ECCu;
label_1f6ecc:
    // 0x1f6ecc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1f6eccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f6ed0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1f6ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1f6ed4: 0x1012  mflo        $v0
    ctx->pc = 0x1f6ed4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6ed8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6ed8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6edc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ee0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6ee4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6ee8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6ee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6eec: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x1f6eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6ef0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6ef4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6ef8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6EF8u;
    {
        const bool branch_taken_0x1f6ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EF8u;
        // 0x1f6efc: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ef8) {
            ctx->pc = 0x1F6F28u;
            goto label_1f6f28;
        }
    }
    ctx->pc = 0x1F6F00u;
    // 0x1f6f00: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6f04: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6f08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F08u;
    {
        const bool branch_taken_0x1f6f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F08u;
        // 0x1f6f0c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f08) {
            ctx->pc = 0x1F6F24u;
            goto label_1f6f24;
        }
    }
    ctx->pc = 0x1F6F10u;
    // 0x1f6f10: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6f14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F14u;
    {
        const bool branch_taken_0x1f6f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F14u;
        // 0x1f6f18: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f14) {
            ctx->pc = 0x1F6F28u;
            goto label_1f6f28;
        }
    }
    ctx->pc = 0x1F6F1Cu;
    // 0x1f6f1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f6f20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f6f24:
    // 0x1f6f24: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1f6f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_1f6f28:
    // 0x1f6f28: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f6f2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f6f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f6f30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f6f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f6f34: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x1f6f34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1f6f38:
    // 0x1f6f38: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f6f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f3c: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x1f6f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x1f6f40: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x1f6f40u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x1f6f44: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x1f6f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f48: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6F48u;
    {
        const bool branch_taken_0x1f6f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f48) {
            ctx->pc = 0x1F6F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6F48u;
            // 0x1f6f4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6F50u;
            goto label_1f6f50;
        }
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0x1012  mflo        $v0
    ctx->pc = 0x1f6f50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6f54: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6f54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6f58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f6f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6f60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6f64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6f68: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x1f6f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6f6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6f70: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6f74: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6F74u;
    {
        const bool branch_taken_0x1f6f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f74) {
            ctx->pc = 0x1F6F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6F74u;
            // 0x1f6f78: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FA4u;
            goto label_1f6fa4;
        }
    }
    ctx->pc = 0x1F6F7Cu;
    // 0x1f6f7c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f6f80: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6f84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F84u;
    {
        const bool branch_taken_0x1f6f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F84u;
        // 0x1f6f88: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f84) {
            ctx->pc = 0x1F6FA0u;
            goto label_1f6fa0;
        }
    }
    ctx->pc = 0x1F6F8Cu;
    // 0x1f6f8c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6f90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F90u;
    {
        const bool branch_taken_0x1f6f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f90) {
            ctx->pc = 0x1F6F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6F90u;
            // 0x1f6f94: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FA4u;
            goto label_1f6fa4;
        }
    }
    ctx->pc = 0x1F6F98u;
    // 0x1f6f98: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f6f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f6f9c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f6fa0:
    // 0x1f6fa0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f6fa4:
    // 0x1f6fa4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6FA4u;
    {
        const bool branch_taken_0x1f6fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6fa4) {
            ctx->pc = 0x1F6FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6FA4u;
            // 0x1f6fa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FACu;
            goto label_1f6fac;
        }
    }
    ctx->pc = 0x1F6FACu;
label_1f6fac:
    // 0x1f6fac: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1f6facu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f6fb0: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x1f6fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x1f6fb4: 0x1012  mflo        $v0
    ctx->pc = 0x1f6fb4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6fb8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f6fb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f6fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6fc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f6fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f6fc4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6fc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f6fc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f6fcc: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x1f6fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f6fd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6fd4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6fd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6FD8u;
    {
        const bool branch_taken_0x1f6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FD8u;
        // 0x1f6fdc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fd8) {
            ctx->pc = 0x1F6FF8u;
            goto label_1f6ff8;
        }
    }
    ctx->pc = 0x1F6FE0u;
    // 0x1f6fe0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1f6fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f6fe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6FE4u;
    {
        const bool branch_taken_0x1f6fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FE4u;
        // 0x1f6fe8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fe4) {
            ctx->pc = 0x1F6FF8u;
            goto label_1f6ff8;
        }
    }
    ctx->pc = 0x1F6FECu;
    // 0x1f6fec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f6fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6ff0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6FF0u;
    {
        const bool branch_taken_0x1f6ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ff0) {
            ctx->pc = 0x1F6FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6FF0u;
            // 0x1f6ff4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FF8u;
            goto label_1f6ff8;
        }
    }
    ctx->pc = 0x1F6FF8u;
label_1f6ff8:
    // 0x1f6ff8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1f6ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1f6ffc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f6ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f7000: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f7000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f7004: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1F7004u;
    {
        const bool branch_taken_0x1f7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7004u;
        // 0x1f7008: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7004) {
            ctx->pc = 0x1F71E0u;
            goto label_1f71e0;
        }
    }
    ctx->pc = 0x1F700Cu;
label_1f700c:
    // 0x1f700c: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7010u;
    {
        const bool branch_taken_0x1f7010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7010u;
        // 0x1f7014: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7010) {
            ctx->pc = 0x1F7020u;
            goto label_1f7020;
        }
    }
    ctx->pc = 0x1F7018u;
    // 0x1f7018: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1F7018u;
    {
        const bool branch_taken_0x1f7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7018u;
        // 0x1f701c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7018) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F7020u;
label_1f7020:
    // 0x1f7020: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1f7020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7024u;
    {
        const bool branch_taken_0x1f7024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7024u;
        // 0x1f7028: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7024) {
            ctx->pc = 0x1F7040u;
            goto label_1f7040;
        }
    }
    ctx->pc = 0x1F702Cu;
    // 0x1f702c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1f702cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f7030: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f7030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f7034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7034u;
    {
        const bool branch_taken_0x1f7034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7034u;
        // 0x1f7038: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7034) {
            ctx->pc = 0x1F7058u;
            goto label_1f7058;
        }
    }
    ctx->pc = 0x1F703Cu;
    // 0x1f703c: 0x0  nop
    ctx->pc = 0x1f703cu;
    // NOP
label_1f7040:
    // 0x1f7040: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f7044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f7044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f7048: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f704c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1f704cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7050: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1f7050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1f7054: 0x0  nop
    ctx->pc = 0x1f7054u;
    // NOP
label_1f7058:
    // 0x1f7058: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f705c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1f7060: 0x24422ba0  addiu       $v0, $v0, 0x2BA0
    ctx->pc = 0x1f7060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11168));
    // 0x1f7064: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f7068: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f7068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f706c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f706cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7070: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f7074: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x1f7074u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7078: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7078u;
    {
        const bool branch_taken_0x1f7078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7078) {
            ctx->pc = 0x1F707Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7078u;
            // 0x1f707c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F70A0u;
            goto label_1f70a0;
        }
    }
    ctx->pc = 0x1F7080u;
    // 0x1f7080: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x1f7080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1f7084: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1F7084u;
    {
        const bool branch_taken_0x1f7084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7084u;
        // 0x1f7088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7084) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F708Cu;
    // 0x1f708c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x1f708cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f7090: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1F7090u;
    {
        const bool branch_taken_0x1f7090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7090u;
        // 0x1f7094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7090) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F7098u;
    // 0x1f7098: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1F7098u;
    {
        const bool branch_taken_0x1f7098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7098u;
        // 0x1f709c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7098) {
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F70A0u;
label_1f70a0:
    // 0x1f70a0: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x1f70a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f70a4: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x1f70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f70a8: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x1f70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f70ac: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x1f70acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f70b0: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x1f70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f70b4: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x1f70b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f70b8: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x1f70b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f70bc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x1f70bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f70c0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1f70c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1f70c4: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x1f70c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1f70c8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x1f70c8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1f70cc: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x1f70ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1f70d0: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1f70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1f70d4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F70D4u;
    {
        const bool branch_taken_0x1f70d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f70d4) {
            ctx->pc = 0x1F70D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F70D4u;
            // 0x1f70d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F70DCu;
            goto label_1f70dc;
        }
    }
    ctx->pc = 0x1F70DCu;
label_1f70dc:
    // 0x1f70dc: 0x1012  mflo        $v0
    ctx->pc = 0x1f70dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f70e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1f70e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f70e4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f70e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f70ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f70ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f70f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f70f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f70f4: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x1f70f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f70f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f70f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f70fc: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1f70fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f7100: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7100u;
    {
        const bool branch_taken_0x1f7100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7100) {
            ctx->pc = 0x1F7104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7100u;
            // 0x1f7104: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7134u;
            goto label_1f7134;
        }
    }
    ctx->pc = 0x1F7108u;
    // 0x1f7108: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f7108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f710c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1f710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7110u;
    {
        const bool branch_taken_0x1f7110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7110u;
        // 0x1f7114: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7110) {
            ctx->pc = 0x1F7130u;
            goto label_1f7130;
        }
    }
    ctx->pc = 0x1F7118u;
    // 0x1f7118: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1f7118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f711c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F711Cu;
    {
        const bool branch_taken_0x1f711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f711c) {
            ctx->pc = 0x1F7120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F711Cu;
            // 0x1f7120: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7134u;
            goto label_1f7134;
        }
    }
    ctx->pc = 0x1F7124u;
    // 0x1f7124: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1f7124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1f7128: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f712c: 0x0  nop
    ctx->pc = 0x1f712cu;
    // NOP
label_1f7130:
    // 0x1f7130: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f7134:
    // 0x1f7134: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7134u;
    {
        const bool branch_taken_0x1f7134 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7134) {
            ctx->pc = 0x1F7138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7134u;
            // 0x1f7138: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F713Cu;
            goto label_1f713c;
        }
    }
    ctx->pc = 0x1F713Cu;
label_1f713c:
    // 0x1f713c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1f713cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f7140: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1f7140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1f7144: 0x1012  mflo        $v0
    ctx->pc = 0x1f7144u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f7148: 0x1810  mfhi        $v1
    ctx->pc = 0x1f7148u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f714c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f714cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7150: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f7154: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f7154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f7158: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f7158u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f715c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x1f715cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f7160: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f7160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f7164: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1f7164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f7168: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7168u;
    {
        const bool branch_taken_0x1f7168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7168u;
        // 0x1f716c: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7168) {
            ctx->pc = 0x1F7198u;
            goto label_1f7198;
        }
    }
    ctx->pc = 0x1F7170u;
    // 0x1f7170: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f7174: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1f7174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1f7178: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7178u;
    {
        const bool branch_taken_0x1f7178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7178u;
        // 0x1f717c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7178) {
            ctx->pc = 0x1F7194u;
            goto label_1f7194;
        }
    }
    ctx->pc = 0x1F7180u;
    // 0x1f7180: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1f7180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f7184: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7184u;
    {
        const bool branch_taken_0x1f7184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7184u;
        // 0x1f7188: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7184) {
            ctx->pc = 0x1F7198u;
            goto label_1f7198;
        }
    }
    ctx->pc = 0x1F718Cu;
    // 0x1f718c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f7190: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1f7194:
    // 0x1f7194: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1f7194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1f7198:
    // 0x1f7198: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f719c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f71a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f71a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f71a4: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x1f71a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f71a8: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x1f71a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f71ac: 0x3010  mfhi        $a2
    ctx->pc = 0x1f71acu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1f71b0: 0x2012  mflo        $a0
    ctx->pc = 0x1f71b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1f71b4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1f71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f71b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F71B8u;
    {
        const bool branch_taken_0x1f71b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f71b8) {
            ctx->pc = 0x1F71BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F71B8u;
            // 0x1f71bc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F71D8u;
            goto label_1f71d8;
        }
    }
    ctx->pc = 0x1F71C0u;
    // 0x1f71c0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F71C0u;
    {
        const bool branch_taken_0x1f71c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c0) {
            ctx->pc = 0x1F71E0u;
            goto label_1f71e0;
        }
    }
    ctx->pc = 0x1F71C8u;
    // 0x1f71c8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x1f71c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f71cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F71CCu;
    {
        const bool branch_taken_0x1f71cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71CCu;
        // 0x1f71d0: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71cc) {
            ctx->pc = 0x1F71E4u;
            goto label_1f71e4;
        }
    }
    ctx->pc = 0x1F71D4u;
    // 0x1f71d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f71d8:
    // 0x1f71d8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1f71d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71dc: 0x0  nop
    ctx->pc = 0x1f71dcu;
    // NOP
label_1f71e0:
    // 0x1f71e0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1f71e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_1f71e4:
    // 0x1f71e4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1f71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1f71e8: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x1f71e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f71ec: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x1f71ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1f71f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F71F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71F0u;
        // 0x1f71f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F71F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F71F8u;
}
