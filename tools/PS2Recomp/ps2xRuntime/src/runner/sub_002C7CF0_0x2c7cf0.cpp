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

// Function: sub_002C7CF0
// Address: 0x2c7cf0 - 0x2c8238
void sub_002C7CF0_0x2c7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7CF0_0x2c7cf0");
#endif

    switch (ctx->pc) {
        case 0x2c7d34u: goto label_2c7d34;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c80a0u: goto label_2c80a0;
        default: break;
    }

    ctx->pc = 0x2c7cf0u;

    // 0x2c7cf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c7cf4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c7cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2c7cf8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2c7cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c7d04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c7d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d08: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2c7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2c7d0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2c7d0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d10: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2c7d14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2c7d14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2c7d1c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2c7d20: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2c7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2c7d24: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2c7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2c7d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7d2c: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7D2Cu;
    {
        const bool branch_taken_0x2c7d2c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D2Cu;
        // 0x2c7d30: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d2c) {
            ctx->pc = 0x2C7D3Cu;
            goto label_2c7d3c;
        }
    }
    ctx->pc = 0x2C7D34u;
label_2c7d34:
    // 0x2c7d34: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x2C7D34u;
    {
        const bool branch_taken_0x2c7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D34u;
        // 0x2c7d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d34) {
            ctx->pc = 0x2C8204u;
            goto label_2c8204;
        }
    }
    ctx->pc = 0x2C7D3Cu;
label_2c7d3c:
    // 0x2c7d3c: 0x9663005c  lhu         $v1, 0x5C($s3)
    ctx->pc = 0x2c7d3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2c7d40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c7d44: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7D44u;
    {
        const bool branch_taken_0x2c7d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c7d44) {
            ctx->pc = 0x2C7D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7D44u;
            // 0x2c7d48: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7D58u;
            goto label_2c7d58;
        }
    }
    ctx->pc = 0x2C7D4Cu;
    // 0x2c7d4c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c7d50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c7d54: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2c7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2c7d58:
    // 0x2c7d58: 0x966300dc  lhu         $v1, 0xDC($s3)
    ctx->pc = 0x2c7d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x2c7d5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c7d60: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7D60u;
    {
        const bool branch_taken_0x2c7d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c7d60) {
            ctx->pc = 0x2C7D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7D60u;
            // 0x2c7d64: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7D74u;
            goto label_2c7d74;
        }
    }
    ctx->pc = 0x2C7D68u;
    // 0x2c7d68: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x2c7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x2c7d6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c7d70: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2c7d74:
    // 0x2c7d74: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c7d78: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2c7d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c7d7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7D7Cu;
    {
        const bool branch_taken_0x2c7d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D7Cu;
        // 0x2c7d80: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d7c) {
            ctx->pc = 0x2C7D94u;
            goto label_2c7d94;
        }
    }
    ctx->pc = 0x2C7D84u;
    // 0x2c7d84: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7d88: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2c7d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2c7d8c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C7D8Cu;
    {
        const bool branch_taken_0x2c7d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D8Cu;
        // 0x2c7d90: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d8c) {
            ctx->pc = 0x2C7E54u;
            goto label_2c7e54;
        }
    }
    ctx->pc = 0x2C7D94u;
label_2c7d94:
    // 0x2c7d94: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x2c7d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x2c7d98: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C7D98u;
    {
        const bool branch_taken_0x2c7d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D98u;
        // 0x2c7d9c: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d98) {
            ctx->pc = 0x2C7DF4u;
            goto label_2c7df4;
        }
    }
    ctx->pc = 0x2C7DA0u;
    // 0x2c7da0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c7da4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c7da8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c7da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7dac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C7DACu;
    {
        const bool branch_taken_0x2c7dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DACu;
        // 0x2c7db0: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7dac) {
            ctx->pc = 0x2C7DF4u;
            goto label_2c7df4;
        }
    }
    ctx->pc = 0x2C7DB4u;
    // 0x2c7db4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c7db8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2c7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c7dbc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2c7dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c7dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c7dc4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2c7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2c7dc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c7dcc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2c7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c7dd0: 0x6a6600df  ldl         $a2, 0xDF($s3)
    ctx->pc = 0x2c7dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c7dd4: 0x6e6600d8  ldr         $a2, 0xD8($s3)
    ctx->pc = 0x2c7dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c7dd8: 0xb046000b  sdl         $a2, 0xB($v0)
    ctx->pc = 0x2c7dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7ddc: 0xb4460004  sdr         $a2, 0x4($v0)
    ctx->pc = 0x2c7ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7de0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2c7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c7de4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2c7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c7de8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2c7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2c7dec: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2c7decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2c7df0: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x2c7df0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7df4:
    // 0x2c7df4: 0x31820040  andi        $v0, $t4, 0x40
    ctx->pc = 0x2c7df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)64);
    // 0x2c7df8: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x2C7DF8u;
    {
        const bool branch_taken_0x2c7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DF8u;
        // 0x2c7dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7df8) {
            ctx->pc = 0x2C8204u;
            goto label_2c8204;
        }
    }
    ctx->pc = 0x2C7E00u;
    // 0x2c7e00: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2c7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c7e04: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c7e08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c7e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7e0c: 0x1040ffc9  beqz        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2C7E0Cu;
    {
        const bool branch_taken_0x2c7e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E0Cu;
        // 0x2c7e10: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e0c) {
            ctx->pc = 0x2C7D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7d34;
        }
    }
    ctx->pc = 0x2C7E14u;
    // 0x2c7e14: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c7e18: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c7e1c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2c7e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c7e20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c7e24: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2c7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2c7e28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c7e2c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2c7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c7e30: 0x6a63005f  ldl         $v1, 0x5F($s3)
    ctx->pc = 0x2c7e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c7e34: 0x6e630058  ldr         $v1, 0x58($s3)
    ctx->pc = 0x2c7e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c7e38: 0xb043000b  sdl         $v1, 0xB($v0)
    ctx->pc = 0x2c7e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e3c: 0xb4430004  sdr         $v1, 0x4($v0)
    ctx->pc = 0x2c7e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e40: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2c7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c7e44: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2c7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c7e48: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2c7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2c7e4c: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x2C7E4Cu;
    {
        const bool branch_taken_0x2c7e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E4Cu;
        // 0x2c7e50: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e4c) {
            ctx->pc = 0x2C7D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7d34;
        }
    }
    ctx->pc = 0x2C7E54u;
label_2c7e54:
    // 0x2c7e54: 0x26b100e0  addiu       $s1, $s5, 0xE0
    ctx->pc = 0x2c7e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x2c7e58: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7e5c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c7e5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e60: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x2c7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
    // 0x2c7e64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e68: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2c7e68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2c7e6c: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C7E6Cu;
    {
        const bool branch_taken_0x2c7e6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E6Cu;
        // 0x2c7e70: 0xafa80010  sw          $t0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e6c) {
            ctx->pc = 0x2C7EC4u;
            goto label_2c7ec4;
        }
    }
    ctx->pc = 0x2C7E74u;
    // 0x2c7e74: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x2c7e74u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7e78: 0x2582ffff  addiu       $v0, $t4, -0x1
    ctx->pc = 0x2c7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2c7e7c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C7E7Cu;
    {
        const bool branch_taken_0x2c7e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E7Cu;
        // 0x2c7e80: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e7c) {
            ctx->pc = 0x2C7EC4u;
            goto label_2c7ec4;
        }
    }
    ctx->pc = 0x2C7E84u;
    // 0x2c7e84: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e88: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x2c7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7e8c: 0x0  nop
    ctx->pc = 0x2c7e8cu;
    // NOP
label_2c7e90:
    // 0x2c7e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e94: 0xc0b1e90  jal         func_2C7A40
    ctx->pc = 0x2C7E94u;
    SET_GPR_U32(ctx, 31, 0x2C7E9Cu);
    ctx->pc = 0x2C7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E94u;
    // 0x2c7e98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C7A40u, 0x2C7E94u, 0x2C7E9Cu)) {
        return;
    }
    ctx->pc = 0x2C7E9Cu;
label_2c7e9c:
    // 0x2c7e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7E9Cu;
    {
        const bool branch_taken_0x2c7e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E9Cu;
        // 0x2c7ea0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e9c) {
            ctx->pc = 0x2C7EACu;
            goto label_2c7eac;
        }
    }
    ctx->pc = 0x2C7EA4u;
    // 0x2c7ea4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2c7ea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2c7ea8: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x2c7ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2c7eac:
    // 0x2c7eac: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x2c7eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2c7eb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7EB0u;
    {
        const bool branch_taken_0x2c7eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EB0u;
        // 0x2c7eb4: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7eb0) {
            ctx->pc = 0x2C7EC4u;
            goto label_2c7ec4;
        }
    }
    ctx->pc = 0x2C7EB8u;
    // 0x2c7eb8: 0x2de102b  sltu        $v0, $s6, $fp
    ctx->pc = 0x2c7eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2c7ebc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C7EBCu;
    {
        const bool branch_taken_0x2c7ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ebc) {
            ctx->pc = 0x2C7EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EBCu;
            // 0x2c7ec0: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7e90;
        }
    }
    ctx->pc = 0x2C7EC4u;
label_2c7ec4:
    // 0x2c7ec4: 0x12c00038  beqz        $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C7EC4u;
    {
        const bool branch_taken_0x2c7ec4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EC4u;
        // 0x2c7ec8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ec4) {
            ctx->pc = 0x2C7FA8u;
            goto label_2c7fa8;
        }
    }
    ctx->pc = 0x2C7ECCu;
    // 0x2c7ecc: 0x8f828ac4  lw          $v0, -0x753C($gp)
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x2c7ed0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7ED0u;
    {
        const bool branch_taken_0x2c7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7ED0u;
        // 0x2c7ed4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ed0) {
            ctx->pc = 0x2C7EF8u;
            goto label_2c7ef8;
        }
    }
    ctx->pc = 0x2C7ED8u;
    // 0x2c7ed8: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2c7ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2c7edc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2c7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c7ee0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c7ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7ee4: 0xc60c0074  lwc1        $f12, 0x74($s0)
    ctx->pc = 0x2c7ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7ee8: 0xc0b2330  jal         func_2C8CC0
    ctx->pc = 0x2C7EE8u;
    SET_GPR_U32(ctx, 31, 0x2C7EF0u);
    ctx->pc = 0x2C7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7EE8u;
    // 0x2c7eec: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C8CC0u, 0x2C7EE8u, 0x2C7EF0u)) {
        return;
    }
    ctx->pc = 0x2C7EF0u;
label_2c7ef0:
    // 0x2c7ef0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C7EF0u;
    {
        const bool branch_taken_0x2c7ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EF0u;
        // 0x2c7ef4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ef0) {
            ctx->pc = 0x2C7FA8u;
            goto label_2c7fa8;
        }
    }
    ctx->pc = 0x2C7EF8u;
label_2c7ef8:
    // 0x2c7ef8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2c7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c7efc: 0x8ea500b0  lw          $a1, 0xB0($s5)
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2c7f00: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x2c7f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c7f04: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2c7f08: 0x751025  or          $v0, $v1, $s5
    ctx->pc = 0x2c7f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x2c7f0c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c7f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c7f10: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C7F10u;
    {
        const bool branch_taken_0x2c7f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F10u;
        // 0x2c7f14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f10) {
            ctx->pc = 0x2C7F70u;
            goto label_2c7f70;
        }
    }
    ctx->pc = 0x2C7F18u;
    // 0x2c7f18: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2c7f1c:
    // 0x2c7f1c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2c7f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c7f20: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2c7f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c7f24: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2c7f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c7f28: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2c7f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c7f2c: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2c7f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c7f30: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2c7f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c7f34: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2c7f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c7f38: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2c7f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c7f3c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2c7f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f40: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2c7f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f44: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x2c7f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f48: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x2c7f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f4c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x2c7f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f50: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x2c7f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f54: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x2c7f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f58: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x2c7f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f5c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c7f60: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C7F60u;
    {
        const bool branch_taken_0x2c7f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F60u;
        // 0x2c7f64: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f60) {
            ctx->pc = 0x2C7F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7f1c;
        }
    }
    ctx->pc = 0x2C7F68u;
    // 0x2c7f68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C7F68u;
    {
        const bool branch_taken_0x2c7f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F68u;
        // 0x2c7f6c: 0xaea500b0  sw          $a1, 0xB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f68) {
            ctx->pc = 0x2C7FA4u;
            goto label_2c7fa4;
        }
    }
    ctx->pc = 0x2C7F70u;
label_2c7f70:
    // 0x2c7f70: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2c7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2c7f74:
    // 0x2c7f74: 0xdc6c0000  ld          $t4, 0x0($v1)
    ctx->pc = 0x2c7f74u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7f78: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2c7f78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c7f7c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2c7f7cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c7f80: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2c7f80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c7f84: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x2c7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x2c7f88: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2c7f88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2c7f8c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2c7f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2c7f90: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2c7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2c7f94: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c7f98: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C7F98u;
    {
        const bool branch_taken_0x2c7f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F98u;
        // 0x2c7f9c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f98) {
            ctx->pc = 0x2C7F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7f74;
        }
    }
    ctx->pc = 0x2C7FA0u;
    // 0x2c7fa0: 0xaea500b0  sw          $a1, 0xB0($s5)
    ctx->pc = 0x2c7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 5));
label_2c7fa4:
    // 0x2c7fa4: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x2c7fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fa8:
    // 0x2c7fa8: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7fac: 0x31220040  andi        $v0, $t1, 0x40
    ctx->pc = 0x2c7facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)64);
    // 0x2c7fb0: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x2C7FB0u;
    {
        const bool branch_taken_0x2c7fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fb0) {
            ctx->pc = 0x2C7FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FB0u;
            // 0x2c7fb4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8204u;
            goto label_2c8204;
        }
    }
    ctx->pc = 0x2C7FB8u;
    // 0x2c7fb8: 0x12800091  beqz        $s4, . + 4 + (0x91 << 2)
    ctx->pc = 0x2C7FB8u;
    {
        const bool branch_taken_0x2c7fb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FB8u;
        // 0x2c7fbc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fb8) {
            ctx->pc = 0x2C8200u;
            goto label_2c8200;
        }
    }
    ctx->pc = 0x2C7FC0u;
    // 0x2c7fc0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2c7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7fc4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c7fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fc8: 0x8fac0004  lw          $t4, 0x4($sp)
    ctx->pc = 0x2c7fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c7fcc: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2c7fccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c7fd0: 0x304a0040  andi        $t2, $v0, 0x40
    ctx->pc = 0x2c7fd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c7fd4: 0x318b0040  andi        $t3, $t4, 0x40
    ctx->pc = 0x2c7fd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)64);
    // 0x2c7fd8: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7FD8u;
    {
        const bool branch_taken_0x2c7fd8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2C7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FD8u;
        // 0x2c7fdc: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fd8) {
            ctx->pc = 0x2C7FE8u;
            goto label_2c7fe8;
        }
    }
    ctx->pc = 0x2C7FE0u;
    // 0x2c7fe0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C7FE0u;
    {
        const bool branch_taken_0x2c7fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fe0) {
            ctx->pc = 0x2C80A0u;
            goto label_2c80a0;
        }
    }
    ctx->pc = 0x2C7FE8u;
label_2c7fe8:
    // 0x2c7fe8: 0x11600014  beqz        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C7FE8u;
    {
        const bool branch_taken_0x2c7fe8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7fe8) {
            ctx->pc = 0x2C803Cu;
            goto label_2c803c;
        }
    }
    ctx->pc = 0x2C7FF0u;
    // 0x2c7ff0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2c7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c7ff4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c7ff8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c7ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7ffc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C7FFCu;
    {
        const bool branch_taken_0x2c7ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FFCu;
        // 0x2c8000: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ffc) {
            ctx->pc = 0x2C803Cu;
            goto label_2c803c;
        }
    }
    ctx->pc = 0x2C8004u;
    // 0x2c8004: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x2c8004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c8008: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2c8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c800c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8010: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2c8010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2c8014: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8018: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2c8018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c801c: 0x6a6300df  ldl         $v1, 0xDF($s3)
    ctx->pc = 0x2c801cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c8020: 0x6e6300d8  ldr         $v1, 0xD8($s3)
    ctx->pc = 0x2c8020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c8024: 0xb043000b  sdl         $v1, 0xB($v0)
    ctx->pc = 0x2c8024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8028: 0xb4430004  sdr         $v1, 0x4($v0)
    ctx->pc = 0x2c8028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c802c: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2c802cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x2c8030: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2c8030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c8034: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2c8034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2c8038: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2c8038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_2c803c:
    // 0x2c803c: 0x51400015  beql        $t2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C803Cu;
    {
        const bool branch_taken_0x2c803c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c803c) {
            ctx->pc = 0x2C8040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C803Cu;
            // 0x2c8040: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8094u;
            goto label_2c8094;
        }
    }
    ctx->pc = 0x2C8044u;
    // 0x2c8044: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2c8044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c8048: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c8048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c804c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8050: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C8050u;
    {
        const bool branch_taken_0x2c8050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8050u;
        // 0x2c8054: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8050) {
            ctx->pc = 0x2C8090u;
            goto label_2c8090;
        }
    }
    ctx->pc = 0x2C8058u;
    // 0x2c8058: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x2c8058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c805c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c8060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8064: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2c8064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2c8068: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c806c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2c806cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c8070: 0x6a6c005f  ldl         $t4, 0x5F($s3)
    ctx->pc = 0x2c8070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2c8074: 0x6e6c0058  ldr         $t4, 0x58($s3)
    ctx->pc = 0x2c8074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2c8078: 0xb04c000b  sdl         $t4, 0xB($v0)
    ctx->pc = 0x2c8078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c807c: 0xb44c0004  sdr         $t4, 0x4($v0)
    ctx->pc = 0x2c807cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8080: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2c8080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x2c8084: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2c8084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2c8088: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2c8088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2c808c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2c808cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_2c8090:
    // 0x2c8090: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2c8090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2c8094:
    // 0x2c8094: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x2c8094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c8098: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C8098u;
    {
        const bool branch_taken_0x2c8098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8098u;
        // 0x2c809c: 0x24e700e0  addiu       $a3, $a3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8098) {
            ctx->pc = 0x2C8200u;
            goto label_2c8200;
        }
    }
    ctx->pc = 0x2C80A0u;
label_2c80a0:
    // 0x2c80a0: 0x11600014  beqz        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C80A0u;
    {
        const bool branch_taken_0x2c80a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80a0) {
            ctx->pc = 0x2C80F4u;
            goto label_2c80f4;
        }
    }
    ctx->pc = 0x2C80A8u;
    // 0x2c80a8: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2c80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c80ac: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c80b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c80b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c80b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C80B4u;
    {
        const bool branch_taken_0x2c80b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80B4u;
        // 0x2c80b8: 0x8e660058  lw          $a2, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c80b4) {
            ctx->pc = 0x2C80F4u;
            goto label_2c80f4;
        }
    }
    ctx->pc = 0x2C80BCu;
    // 0x2c80bc: 0xa92018  mult        $a0, $a1, $t1
    ctx->pc = 0x2c80bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c80c0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c80c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c80c8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2c80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2c80cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c80d0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2c80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2c80d4: 0x6a6800df  ldl         $t0, 0xDF($s3)
    ctx->pc = 0x2c80d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c80d8: 0x6e6800d8  ldr         $t0, 0xD8($s3)
    ctx->pc = 0x2c80d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c80dc: 0xb068000b  sdl         $t0, 0xB($v1)
    ctx->pc = 0x2c80dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c80e0: 0xb4680004  sdr         $t0, 0x4($v1)
    ctx->pc = 0x2c80e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c80e4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2c80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x2c80e8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c80ec: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2c80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c80f0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2c80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_2c80f4:
    // 0x2c80f4: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C80F4u;
    {
        const bool branch_taken_0x2c80f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80f4) {
            ctx->pc = 0x2C8148u;
            goto label_2c8148;
        }
    }
    ctx->pc = 0x2C80FCu;
    // 0x2c80fc: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2c80fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c8100: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c8100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c8104: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c8104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8108: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C8108u;
    {
        const bool branch_taken_0x2c8108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8108u;
        // 0x2c810c: 0x8e6600d8  lw          $a2, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8108) {
            ctx->pc = 0x2C8148u;
            goto label_2c8148;
        }
    }
    ctx->pc = 0x2C8110u;
    // 0x2c8110: 0xa92018  mult        $a0, $a1, $t1
    ctx->pc = 0x2c8110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c8114: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c8118: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c8118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c811c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2c811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2c8120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8124: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2c8124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2c8128: 0x6a65005f  ldl         $a1, 0x5F($s3)
    ctx->pc = 0x2c8128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c812c: 0x6e650058  ldr         $a1, 0x58($s3)
    ctx->pc = 0x2c812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c8130: 0xb065000b  sdl         $a1, 0xB($v1)
    ctx->pc = 0x2c8130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8134: 0xb4650004  sdr         $a1, 0x4($v1)
    ctx->pc = 0x2c8134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8138: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2c8138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x2c813c: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c8140: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2c8140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c8144: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2c8144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_2c8148:
    // 0x2c8148: 0x11600014  beqz        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C8148u;
    {
        const bool branch_taken_0x2c8148 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8148u;
        // 0x2c814c: 0x24e800e0  addiu       $t0, $a3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8148) {
            ctx->pc = 0x2C819Cu;
            goto label_2c819c;
        }
    }
    ctx->pc = 0x2C8150u;
    // 0x2c8150: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2c8150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c8154: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c8154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c8158: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c8158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c815c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C815Cu;
    {
        const bool branch_taken_0x2c815c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C815Cu;
        // 0x2c8160: 0x8e660058  lw          $a2, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c815c) {
            ctx->pc = 0x2C819Cu;
            goto label_2c819c;
        }
    }
    ctx->pc = 0x2C8164u;
    // 0x2c8164: 0xa92018  mult        $a0, $a1, $t1
    ctx->pc = 0x2c8164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c8168: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c816c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c8170: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2c8170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2c8174: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8178: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2c8178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2c817c: 0x6a6400df  ldl         $a0, 0xDF($s3)
    ctx->pc = 0x2c817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c8180: 0x6e6400d8  ldr         $a0, 0xD8($s3)
    ctx->pc = 0x2c8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c8184: 0xb064000b  sdl         $a0, 0xB($v1)
    ctx->pc = 0x2c8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8188: 0xb4640004  sdr         $a0, 0x4($v1)
    ctx->pc = 0x2c8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c818c: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2c818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2c8190: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c8190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c8194: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2c8194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c8198: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2c8198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_2c819c:
    // 0x2c819c: 0x51400015  beql        $t2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C819Cu;
    {
        const bool branch_taken_0x2c819c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c819c) {
            ctx->pc = 0x2C81A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C819Cu;
            // 0x2c81a0: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C81F4u;
            goto label_2c81f4;
        }
    }
    ctx->pc = 0x2C81A4u;
    // 0x2c81a4: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c81a8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2c81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c81ac: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c81acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c81b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C81B0u;
    {
        const bool branch_taken_0x2c81b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81B0u;
        // 0x2c81b4: 0x8e6600d8  lw          $a2, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81b0) {
            ctx->pc = 0x2C81F0u;
            goto label_2c81f0;
        }
    }
    ctx->pc = 0x2C81B8u;
    // 0x2c81b8: 0xa92018  mult        $a0, $a1, $t1
    ctx->pc = 0x2c81b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c81bc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c81c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c81c4: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2c81c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2c81c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c81cc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2c81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2c81d0: 0x6a64005f  ldl         $a0, 0x5F($s3)
    ctx->pc = 0x2c81d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c81d4: 0x6e640058  ldr         $a0, 0x58($s3)
    ctx->pc = 0x2c81d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c81d8: 0xb064000b  sdl         $a0, 0xB($v1)
    ctx->pc = 0x2c81d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c81dc: 0xb4640004  sdr         $a0, 0x4($v1)
    ctx->pc = 0x2c81dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c81e0: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2c81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2c81e4: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2c81e8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2c81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c81ec: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2c81ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_2c81f0:
    // 0x2c81f0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x2c81f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_2c81f4:
    // 0x2c81f4: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x2c81f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c81f8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2C81F8u;
    {
        const bool branch_taken_0x2c81f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81F8u;
        // 0x2c81fc: 0x24e701c0  addiu       $a3, $a3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81f8) {
            ctx->pc = 0x2C80A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c80a0;
        }
    }
    ctx->pc = 0x2C8200u;
label_2c8200:
    // 0x2c8200: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c8200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c8204:
    // 0x2c8204: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c8204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c8208: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c8208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c820c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c820cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c8210: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c8210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8214: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c8214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c8218: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c8218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c821c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2c821cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8220: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2c8220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8224: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2c8224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c822c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C822Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C822Cu;
        // 0x2c8230: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C822Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8234u;
    // 0x2c8234: 0x0  nop
    ctx->pc = 0x2c8234u;
    // NOP
    ctx->pc = 0x2c8238u;
}
