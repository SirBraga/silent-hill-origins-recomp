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

// Function: sub_002D4BE8
// Address: 0x2d4be8 - 0x2d4ed8
void sub_002D4BE8_0x2d4be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4BE8_0x2d4be8");
#endif

    switch (ctx->pc) {
        case 0x2d4c6cu: goto label_2d4c6c;
        case 0x2d4cd8u: goto label_2d4cd8;
        case 0x2d4dacu: goto label_2d4dac;
        case 0x2d4e04u: goto label_2d4e04;
        default: break;
    }

    ctx->pc = 0x2d4be8u;

    // 0x2d4be8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d4bec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d4bf0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d4bf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d4bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d4bf8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d4bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4bfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d4bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d4c00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d4c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d4c04: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d4c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d4c08: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d4c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2d4c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4c10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4c14: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d4c18: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2d4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2d4c1c: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x2d4c1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4c20: 0x14c500a1  bne         $a2, $a1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2D4C20u;
    {
        const bool branch_taken_0x2d4c20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C20u;
        // 0x2d4c24: 0x3c0a7000  lui         $t2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c20) {
            ctx->pc = 0x2D4EA8u;
            goto label_2d4ea8;
        }
    }
    ctx->pc = 0x2D4C28u;
    // 0x2d4c28: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d4c2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4c30: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2d4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2d4c34: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d4c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4c38: 0x1446009c  bne         $v0, $a2, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D4C38u;
    {
        const bool branch_taken_0x2d4c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C38u;
        // 0x2d4c3c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c38) {
            ctx->pc = 0x2D4EACu;
            goto label_2d4eac;
        }
    }
    ctx->pc = 0x2D4C40u;
    // 0x2d4c40: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2d4c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d4c44: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2d4c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d4c48: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x2d4c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4c4c: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x2d4c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4c50: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x2d4c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4c54: 0x36310010  ori         $s1, $s1, 0x10
    ctx->pc = 0x2d4c54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x2d4c58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4c5c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2d4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4c60: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d4c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d4c64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4c68: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2d4c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2d4c6c:
    // 0x2d4c6c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2d4c6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4c70: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2d4c70u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d4c74: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2d4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2d4c78: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x2d4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x2d4c7c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2d4c80: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4C80u;
    {
        const bool branch_taken_0x2d4c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C80u;
        // 0x2d4c84: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c80) {
            ctx->pc = 0x2D4C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4c6c;
        }
    }
    ctx->pc = 0x2D4C88u;
    // 0x2d4c88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000000u)); // MMIO: 0x70000000
    // 0x2d4c90: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x2d4c90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4c94: 0x354a0070  ori         $t2, $t2, 0x70
    ctx->pc = 0x2d4c94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)112);
    // 0x2d4c98: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4c9c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2d4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2d4ca0: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x2d4ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4ca4: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x2d4ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4ca8: 0x36523fff  ori         $s2, $s2, 0x3FFF
    ctx->pc = 0x2d4ca8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16383);
    // 0x2d4cac: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4cb0: 0x8ca50050  lw          $a1, 0x50($a1)
    ctx->pc = 0x2d4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000050u)); // MMIO: 0x70000050
    // 0x2d4cb4: 0x3694fff0  ori         $s4, $s4, 0xFFF0
    ctx->pc = 0x2d4cb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65520);
    // 0x2d4cb8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4cbc: 0xca8821  addu        $s1, $a2, $t2
    ctx->pc = 0x2d4cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2d4cc0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x2d4cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d4cc4: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D4CC4u;
    {
        const bool branch_taken_0x2d4cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CC4u;
        // 0x2d4cc8: 0x36100070  ori         $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cc4) {
            ctx->pc = 0x2D4EA8u;
            goto label_2d4ea8;
        }
    }
    ctx->pc = 0x2D4CCCu;
    // 0x2d4ccc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2d4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4cd0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2D4CD0u;
    SET_GPR_U32(ctx, 31, 0x2D4CD8u);
    ctx->pc = 0x2D4CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4CD0u;
    // 0x2d4cd4: 0x34840070  ori         $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2D4CD0u, 0x2D4CD8u)) {
        return;
    }
    ctx->pc = 0x2D4CD8u;
label_2d4cd8:
    // 0x2d4cd8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2d4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4cdc: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x2d4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000050u)); // MMIO: 0x70000050
    // 0x2d4ce0: 0x2622000f  addiu       $v0, $s1, 0xF
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x2d4ce4: 0x545024  and         $t2, $v0, $s4
    ctx->pc = 0x2d4ce4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2d4ce8: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d4ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4cec: 0x2034823  subu        $t1, $s0, $v1
    ctx->pc = 0x2d4cecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d4cf0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d4cf4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2d4cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d4cf8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2d4cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2d4cfc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d4d00: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2d4d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2d4d04: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2d4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d4d08: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2d4d0c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d4d10: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2d4d14: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d4d18: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x2d4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x2d4d1c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d4d20: 0x25480040  addiu       $t0, $t2, 0x40
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x2d4d24: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2d4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2d4d28: 0x248382b  sltu        $a3, $s2, $t0
    ctx->pc = 0x2d4d28u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2d4d2c: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x2d4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x2d4d30: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2d4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2d4d34: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2d4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2d4d38: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2d4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2d4d3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2d4d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4d40: 0xac300050  sw          $s0, 0x50($at)
    ctx->pc = 0x2d4d40u;
    runtime->Store32(rdram, ctx, 0x70000050u, GPR_U32(ctx, 16)); // MMIO: 0x70000050
    // 0x2d4d44: 0x14e00059  bnez        $a3, . + 4 + (0x59 << 2)
    ctx->pc = 0x2D4D44u;
    {
        const bool branch_taken_0x2d4d44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D44u;
        // 0x2d4d48: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d44) {
            ctx->pc = 0x2D4EACu;
            goto label_2d4eac;
        }
    }
    ctx->pc = 0x2D4D4Cu;
    // 0x2d4d4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4d50: 0x3505000f  ori         $a1, $t0, 0xF
    ctx->pc = 0x2d4d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15);
    // 0x2d4d54: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2d4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d4d58: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d4d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4d5c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2d4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2d4d60: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2d4d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d4d64: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x2d4d64u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x2d4d68: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2d4d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d4d6c: 0x7d420020  sq          $v0, 0x20($t2)
    ctx->pc = 0x2d4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 2));
    // 0x2d4d70: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2d4d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d4d74: 0x7d430030  sq          $v1, 0x30($t2)
    ctx->pc = 0x2d4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 3));
    // 0x2d4d78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000000u)); // MMIO: 0x70000000
    // 0x2d4d80: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x2d4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x2d4d84: 0xb45024  and         $t2, $a1, $s4
    ctx->pc = 0x2d4d84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x2d4d88: 0x25430060  addiu       $v1, $t2, 0x60
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x2d4d8c: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x2d4d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d4d90: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D4D90u;
    {
        const bool branch_taken_0x2d4d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D90u;
        // 0x2d4d94: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4d90) {
            ctx->pc = 0x2D4EA8u;
            goto label_2d4ea8;
        }
    }
    ctx->pc = 0x2D4D98u;
    // 0x2d4d98: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d4d9c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d4d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4da0: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2d4da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4da4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4da8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2d4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2d4dac:
    // 0x2d4dac: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2d4dacu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4db0: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2d4db0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d4db4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2d4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2d4db8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x2d4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x2d4dbc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2d4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2d4dc0: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D4DC0u;
    {
        const bool branch_taken_0x2d4dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DC0u;
        // 0x2d4dc4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4dc0) {
            ctx->pc = 0x2D4DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4dac;
        }
    }
    ctx->pc = 0x2D4DC8u;
    // 0x2d4dc8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4dcc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2d4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x2d4dd0: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4dd4: 0x36943fff  ori         $s4, $s4, 0x3FFF
    ctx->pc = 0x2d4dd4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16383);
    // 0x2d4dd8: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x2d4dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d4ddc: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x2d4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x2d4de0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2d4de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4de4: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2d4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d4de8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4dec: 0x1469021  addu        $s2, $t2, $a2
    ctx->pc = 0x2d4decu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2d4df0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2d4df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d4df4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D4DF4u;
    {
        const bool branch_taken_0x2d4df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DF4u;
        // 0x2d4df8: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4df4) {
            ctx->pc = 0x2D4EA8u;
            goto label_2d4ea8;
        }
    }
    ctx->pc = 0x2D4DFCu;
    // 0x2d4dfc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2D4DFCu;
    SET_GPR_U32(ctx, 31, 0x2D4E04u);
    ctx->pc = 0x2D4E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DFCu;
    // 0x2d4e00: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2D4DFCu, 0x2D4E04u)) {
        return;
    }
    ctx->pc = 0x2D4E04u;
label_2d4e04:
    // 0x2d4e04: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2d4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d4e08: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x2d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2d4e0c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d4e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4e10: 0x555024  and         $t2, $v0, $s5
    ctx->pc = 0x2d4e10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2d4e14: 0x2034823  subu        $t1, $s0, $v1
    ctx->pc = 0x2d4e14u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d4e18: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2d4e18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d4e1c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d4e20: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2d4e24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d4e28: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2d4e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2d4e2c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d4e30: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2d4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2d4e34: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d4e38: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2d4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2d4e3c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2d4e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2d4e40: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x2d4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x2d4e44: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d4e48: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x2d4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x2d4e4c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2d4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2d4e50: 0x25420040  addiu       $v0, $t2, 0x40
    ctx->pc = 0x2d4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x2d4e54: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2d4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2d4e58: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d4e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4e5c: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x2d4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x2d4e60: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2d4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2d4e64: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D4E64u;
    {
        const bool branch_taken_0x2d4e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E64u;
        // 0x2d4e68: 0xae300040  sw          $s0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e64) {
            ctx->pc = 0x2D4EA8u;
            goto label_2d4ea8;
        }
    }
    ctx->pc = 0x2D4E6Cu;
    // 0x2d4e6c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2d4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d4e70: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4e74: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2d4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d4e78: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2d4e78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4e7c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x2d4e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x2d4e80: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x2d4e80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d4e84: 0x7d440010  sq          $a0, 0x10($t2)
    ctx->pc = 0x2d4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 4));
    // 0x2d4e88: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2d4e88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d4e8c: 0x7d430020  sq          $v1, 0x20($t2)
    ctx->pc = 0x2d4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 3));
    // 0x2d4e90: 0x78a40030  lq          $a0, 0x30($a1)
    ctx->pc = 0x2d4e90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d4e94: 0x7d440030  sq          $a0, 0x30($t2)
    ctx->pc = 0x2d4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 4));
    // 0x2d4e98: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2d4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4e9c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2d4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0x2d4ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4EA0u;
    {
        const bool branch_taken_0x2d4ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EA0u;
        // 0x2d4ea4: 0xac6a0010  sw          $t2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ea0) {
            ctx->pc = 0x2D4EACu;
            goto label_2d4eac;
        }
    }
    ctx->pc = 0x2D4EA8u;
label_2d4ea8:
    // 0x2d4ea8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d4ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d4eac:
    // 0x2d4eac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d4eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4eb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d4eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4eb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d4eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4eb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d4eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4ebc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d4ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4ec0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d4ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EC8u;
        // 0x2d4ecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4ED0u;
    // 0x2d4ed0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d4ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d4ed4: 0x0  nop
    ctx->pc = 0x2d4ed4u;
    // NOP
    ctx->pc = 0x2d4ed8u;
}
