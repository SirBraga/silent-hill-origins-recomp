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

// Function: sub_001FFBB8
// Address: 0x1ffbb8 - 0x1fff48
void sub_001FFBB8_0x1ffbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBB8_0x1ffbb8");
#endif

    switch (ctx->pc) {
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffd08u: goto label_1ffd08;
        default: break;
    }

    ctx->pc = 0x1ffbb8u;

    // 0x1ffbb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ffbbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ffbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ffbc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ffbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ffbc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ffbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffbcc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ffbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ffbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ffbd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ffbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffbdc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ffbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffbe0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFBE0u;
    {
        const bool branch_taken_0x1ffbe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE0u;
        // 0x1ffbe4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbe0) {
            ctx->pc = 0x1FFC04u;
            goto label_1ffc04;
        }
    }
    ctx->pc = 0x1FFBE8u;
    // 0x1ffbe8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFBE8u;
    {
        const bool branch_taken_0x1ffbe8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE8u;
        // 0x1ffbec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbe8) {
            ctx->pc = 0x1FFC08u;
            goto label_1ffc08;
        }
    }
    ctx->pc = 0x1FFBF0u;
    // 0x1ffbf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ffbf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ffbf8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ffbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ffbfc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FFBFCu;
    {
        const bool branch_taken_0x1ffbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBFCu;
        // 0x1ffc00: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbfc) {
            ctx->pc = 0x1FFC78u;
            goto label_1ffc78;
        }
    }
    ctx->pc = 0x1FFC04u;
label_1ffc04:
    // 0x1ffc04: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ffc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ffc08:
    // 0x1ffc08: 0x24448290  addiu       $a0, $v0, -0x7D70
    ctx->pc = 0x1ffc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1ffc0c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ffc10: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFC10u;
    {
        const bool branch_taken_0x1ffc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc10) {
            ctx->pc = 0x1FFC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFC10u;
            // 0x1ffc14: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFC28u;
            goto label_1ffc28;
        }
    }
    ctx->pc = 0x1FFC18u;
    // 0x1ffc18: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1FFC18u;
    SET_GPR_U32(ctx, 31, 0x1FFC20u);
    ctx->pc = 0x1FFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC18u;
    // 0x1ffc1c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1FFC18u, 0x1FFC20u)) {
        return;
    }
    ctx->pc = 0x1FFC20u;
label_1ffc20:
    // 0x1ffc20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFC20u;
    {
        const bool branch_taken_0x1ffc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC20u;
        // 0x1ffc24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc20) {
            ctx->pc = 0x1FFC2Cu;
            goto label_1ffc2c;
        }
    }
    ctx->pc = 0x1FFC28u;
label_1ffc28:
    // 0x1ffc28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ffc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ffc2c:
    // 0x1ffc2c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ffc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFC30u;
    {
        const bool branch_taken_0x1ffc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC30u;
        // 0x1ffc34: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc30) {
            ctx->pc = 0x1FFC48u;
            goto label_1ffc48;
        }
    }
    ctx->pc = 0x1FFC38u;
    // 0x1ffc38: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1ffc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ffc3c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1ffc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ffc40: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x1ffc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffc44: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x1ffc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffc48:
    // 0x1ffc48: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1ffc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1ffc4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffc50: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFC50u;
    {
        const bool branch_taken_0x1ffc50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffc50) {
            ctx->pc = 0x1FFC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFC50u;
            // 0x1ffc54: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFC68u;
            goto label_1ffc68;
        }
    }
    ctx->pc = 0x1FFC58u;
    // 0x1ffc58: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ffc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1ffc5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffc60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFC60u;
    {
        const bool branch_taken_0x1ffc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC60u;
        // 0x1ffc64: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc60) {
            ctx->pc = 0x1FFCCCu;
            goto label_1ffccc;
        }
    }
    ctx->pc = 0x1FFC68u;
label_1ffc68:
    // 0x1ffc68: 0x52020018  beql        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FFC68u;
    {
        const bool branch_taken_0x1ffc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffc68) {
            ctx->pc = 0x1FFC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFC68u;
            // 0x1ffc6c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFCCCu;
            goto label_1ffccc;
        }
    }
    ctx->pc = 0x1FFC70u;
    // 0x1ffc70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FFC70u;
    {
        const bool branch_taken_0x1ffc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC70u;
        // 0x1ffc74: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc70) {
            ctx->pc = 0x1FFCD0u;
            goto label_1ffcd0;
        }
    }
    ctx->pc = 0x1FFC78u;
label_1ffc78:
    // 0x1ffc78: 0x24448290  addiu       $a0, $v0, -0x7D70
    ctx->pc = 0x1ffc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1ffc7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ffc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ffc80: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFC80u;
    {
        const bool branch_taken_0x1ffc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc80) {
            ctx->pc = 0x1FFC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFC80u;
            // 0x1ffc84: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFC98u;
            goto label_1ffc98;
        }
    }
    ctx->pc = 0x1FFC88u;
    // 0x1ffc88: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1FFC88u;
    SET_GPR_U32(ctx, 31, 0x1FFC90u);
    ctx->pc = 0x1FFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC88u;
    // 0x1ffc8c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1FFC88u, 0x1FFC90u)) {
        return;
    }
    ctx->pc = 0x1FFC90u;
label_1ffc90:
    // 0x1ffc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFC90u;
    {
        const bool branch_taken_0x1ffc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC90u;
        // 0x1ffc94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc90) {
            ctx->pc = 0x1FFC9Cu;
            goto label_1ffc9c;
        }
    }
    ctx->pc = 0x1FFC98u;
label_1ffc98:
    // 0x1ffc98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ffc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ffc9c:
    // 0x1ffc9c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1ffc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ffca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFCA0u;
    {
        const bool branch_taken_0x1ffca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCA0u;
        // 0x1ffca4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffca0) {
            ctx->pc = 0x1FFCB8u;
            goto label_1ffcb8;
        }
    }
    ctx->pc = 0x1FFCA8u;
    // 0x1ffca8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1ffca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ffcac: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1ffcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ffcb0: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x1ffcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ffcb4: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x1ffcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffcb8:
    // 0x1ffcb8: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1ffcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x1ffcbc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffcc0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ffcc4: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFCC4u;
    {
        const bool branch_taken_0x1ffcc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffcc4) {
            ctx->pc = 0x1FFCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFCC4u;
            // 0x1ffcc8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFCCCu;
            goto label_1ffccc;
        }
    }
    ctx->pc = 0x1FFCCCu;
label_1ffccc:
    // 0x1ffccc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1ffcccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_1ffcd0:
    // 0x1ffcd0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ffcd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcd4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1ffcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1ffcd8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1ffcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1ffcdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffce0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1ffce0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1ffce4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ffce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffce8: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1FFCE8u;
    {
        const bool branch_taken_0x1ffce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCE8u;
        // 0x1ffcec: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffce8) {
            ctx->pc = 0x1FFF0Cu;
            goto label_1fff0c;
        }
    }
    ctx->pc = 0x1FFCF0u;
    // 0x1ffcf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ffcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffcf4: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x1FFCF4u;
    {
        const bool branch_taken_0x1ffcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcf4) {
            ctx->pc = 0x1FFCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFCF4u;
            // 0x1ffcf8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF10u;
            goto label_1fff10;
        }
    }
    ctx->pc = 0x1FFCFCu;
    // 0x1ffcfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ffcfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd00: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ffd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffd04: 0x0  nop
    ctx->pc = 0x1ffd04u;
    // NOP
label_1ffd08:
    // 0x1ffd08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffd0c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ffd10: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FFD10u;
    {
        const bool branch_taken_0x1ffd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffd10) {
            ctx->pc = 0x1FFDFCu;
            goto label_1ffdfc;
        }
    }
    ctx->pc = 0x1FFD18u;
    // 0x1ffd18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ffd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ffd1c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFD1Cu;
    {
        const bool branch_taken_0x1ffd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd1c) {
            ctx->pc = 0x1FFD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD1Cu;
            // 0x1ffd20: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD3Cu;
            goto label_1ffd3c;
        }
    }
    ctx->pc = 0x1FFD24u;
    // 0x1ffd24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffd28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFD28u;
    {
        const bool branch_taken_0x1ffd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd28) {
            ctx->pc = 0x1FFD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD28u;
            // 0x1ffd2c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD3Cu;
            goto label_1ffd3c;
        }
    }
    ctx->pc = 0x1FFD30u;
    // 0x1ffd30: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1ffd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1ffd34: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FFD34u;
    {
        const bool branch_taken_0x1ffd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD34u;
        // 0x1ffd38: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd34) {
            ctx->pc = 0x1FFE18u;
            goto label_1ffe18;
        }
    }
    ctx->pc = 0x1FFD3Cu;
label_1ffd3c:
    // 0x1ffd3c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ffd40: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FFD40u;
    {
        const bool branch_taken_0x1ffd40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffd40) {
            ctx->pc = 0x1FFD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD40u;
            // 0x1ffd44: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD98u;
            goto label_1ffd98;
        }
    }
    ctx->pc = 0x1FFD48u;
    // 0x1ffd48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ffd4c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1ffd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd50: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1ffd50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1ffd54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ffd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ffd58: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFD58u;
    {
        const bool branch_taken_0x1ffd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd58) {
            ctx->pc = 0x1FFD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD58u;
            // 0x1ffd5c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD60u;
            goto label_1ffd60;
        }
    }
    ctx->pc = 0x1FFD60u;
label_1ffd60:
    // 0x1ffd60: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffd64: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ffd64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1ffd68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffd6c: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD6Cu;
    {
        const bool branch_taken_0x1ffd6c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffd6c) {
            ctx->pc = 0x1FFD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD6Cu;
            // 0x1ffd70: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD7Cu;
            goto label_1ffd7c;
        }
    }
    ctx->pc = 0x1FFD74u;
    // 0x1ffd74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFD74u;
    {
        const bool branch_taken_0x1ffd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD74u;
        // 0x1ffd78: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd74) {
            ctx->pc = 0x1FFD8Cu;
            goto label_1ffd8c;
        }
    }
    ctx->pc = 0x1FFD7Cu;
label_1ffd7c:
    // 0x1ffd7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ffd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ffd80: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFD80u;
    {
        const bool branch_taken_0x1ffd80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ffd80) {
            ctx->pc = 0x1FFD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFD80u;
            // 0x1ffd84: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD8Cu;
            goto label_1ffd8c;
        }
    }
    ctx->pc = 0x1FFD88u;
    // 0x1ffd88: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1ffd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1ffd8c:
    // 0x1ffd8c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ffd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ffd90: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1ffd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1ffd94: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1ffd98:
    // 0x1ffd98: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1ffd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1ffd9c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffda0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffda4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ffda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ffda8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ffda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffdac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ffdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffdb0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ffdb4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ffdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ffdb8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ffdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ffdbc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ffdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ffdc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFDC0u;
    {
        const bool branch_taken_0x1ffdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdc0) {
            ctx->pc = 0x1FFDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFDC0u;
            // 0x1ffdc4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFDC8u;
label_1ffdc8:
    // 0x1ffdc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffdcc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1ffdccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ffdd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ffdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffdd4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDD4u;
    {
        const bool branch_taken_0x1ffdd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffdd4) {
            ctx->pc = 0x1FFDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFDD4u;
            // 0x1ffdd8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDE4u;
            goto label_1ffde4;
        }
    }
    ctx->pc = 0x1FFDDCu;
    // 0x1ffddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFDDCu;
    {
        const bool branch_taken_0x1ffddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDDCu;
        // 0x1ffde0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffddc) {
            ctx->pc = 0x1FFDF4u;
            goto label_1ffdf4;
        }
    }
    ctx->pc = 0x1FFDE4u;
label_1ffde4:
    // 0x1ffde4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ffde8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFDE8u;
    {
        const bool branch_taken_0x1ffde8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ffde8) {
            ctx->pc = 0x1FFDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFDE8u;
            // 0x1ffdec: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFDF4u;
            goto label_1ffdf4;
        }
    }
    ctx->pc = 0x1FFDF0u;
    // 0x1ffdf0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1ffdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1ffdf4:
    // 0x1ffdf4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1FFDF4u;
    {
        const bool branch_taken_0x1ffdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDF4u;
        // 0x1ffdf8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdf4) {
            ctx->pc = 0x1FFEECu;
            goto label_1ffeec;
        }
    }
    ctx->pc = 0x1FFDFCu;
label_1ffdfc:
    // 0x1ffdfc: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFDFCu;
    {
        const bool branch_taken_0x1ffdfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdfc) {
            ctx->pc = 0x1FFE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFDFCu;
            // 0x1ffe00: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE30u;
            goto label_1ffe30;
        }
    }
    ctx->pc = 0x1FFE04u;
    // 0x1ffe04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ffe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ffe08: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFE08u;
    {
        const bool branch_taken_0x1ffe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe08) {
            ctx->pc = 0x1FFE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE08u;
            // 0x1ffe0c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE30u;
            goto label_1ffe30;
        }
    }
    ctx->pc = 0x1FFE10u;
    // 0x1ffe10: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1ffe10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1ffe14: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1ffe14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1ffe18:
    // 0x1ffe18: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffe1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ffe20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ffe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ffe24: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffe28: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FFE28u;
    {
        const bool branch_taken_0x1ffe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE28u;
        // 0x1ffe2c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe28) {
            ctx->pc = 0x1FFEF0u;
            goto label_1ffef0;
        }
    }
    ctx->pc = 0x1FFE30u;
label_1ffe30:
    // 0x1ffe30: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ffe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ffe34: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FFE34u;
    {
        const bool branch_taken_0x1ffe34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffe34) {
            ctx->pc = 0x1FFE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE34u;
            // 0x1ffe38: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE8Cu;
            goto label_1ffe8c;
        }
    }
    ctx->pc = 0x1FFE3Cu;
    // 0x1ffe3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ffe40: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1ffe40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffe44: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1ffe44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1ffe48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ffe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ffe4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFE4Cu;
    {
        const bool branch_taken_0x1ffe4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe4c) {
            ctx->pc = 0x1FFE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE4Cu;
            // 0x1ffe50: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE54u;
            goto label_1ffe54;
        }
    }
    ctx->pc = 0x1FFE54u;
label_1ffe54:
    // 0x1ffe54: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffe58: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ffe58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1ffe5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ffe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffe60: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE60u;
    {
        const bool branch_taken_0x1ffe60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffe60) {
            ctx->pc = 0x1FFE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE60u;
            // 0x1ffe64: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE70u;
            goto label_1ffe70;
        }
    }
    ctx->pc = 0x1FFE68u;
    // 0x1ffe68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE68u;
    {
        const bool branch_taken_0x1ffe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE68u;
        // 0x1ffe6c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe68) {
            ctx->pc = 0x1FFE80u;
            goto label_1ffe80;
        }
    }
    ctx->pc = 0x1FFE70u;
label_1ffe70:
    // 0x1ffe70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ffe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ffe74: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFE74u;
    {
        const bool branch_taken_0x1ffe74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ffe74) {
            ctx->pc = 0x1FFE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE74u;
            // 0x1ffe78: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE80u;
            goto label_1ffe80;
        }
    }
    ctx->pc = 0x1FFE7Cu;
    // 0x1ffe7c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1ffe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1ffe80:
    // 0x1ffe80: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1ffe80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1ffe84: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1ffe84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1ffe88: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1ffe8c:
    // 0x1ffe8c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1ffe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1ffe90: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ffe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffe94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffe98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ffe98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ffe9c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ffe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ffea0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ffea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ffea4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ffea8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ffeac: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ffeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ffeb0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ffeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ffeb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFEB4u;
    {
        const bool branch_taken_0x1ffeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffeb4) {
            ctx->pc = 0x1FFEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFEB4u;
            // 0x1ffeb8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEBCu;
            goto label_1ffebc;
        }
    }
    ctx->pc = 0x1FFEBCu;
label_1ffebc:
    // 0x1ffebc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffec0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1ffec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ffec4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffec8: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFEC8u;
    {
        const bool branch_taken_0x1ffec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ffec8) {
            ctx->pc = 0x1FFECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFEC8u;
            // 0x1ffecc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFED8u;
            goto label_1ffed8;
        }
    }
    ctx->pc = 0x1FFED0u;
    // 0x1ffed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFED0u;
    {
        const bool branch_taken_0x1ffed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFED0u;
        // 0x1ffed4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffed0) {
            ctx->pc = 0x1FFEE8u;
            goto label_1ffee8;
        }
    }
    ctx->pc = 0x1FFED8u;
label_1ffed8:
    // 0x1ffed8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ffedc: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFEDCu;
    {
        const bool branch_taken_0x1ffedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ffedc) {
            ctx->pc = 0x1FFEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFEDCu;
            // 0x1ffee0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEE8u;
            goto label_1ffee8;
        }
    }
    ctx->pc = 0x1FFEE4u;
    // 0x1ffee4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1ffee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_1ffee8:
    // 0x1ffee8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1ffee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1ffeec:
    // 0x1ffeec: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ffeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1ffef0:
    // 0x1ffef0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffef4: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFEF4u;
    {
        const bool branch_taken_0x1ffef4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffef4) {
            ctx->pc = 0x1FFEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFEF4u;
            // 0x1ffef8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF10u;
            goto label_1fff10;
        }
    }
    ctx->pc = 0x1FFEFCu;
    // 0x1ffefc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1ffefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1fff00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fff04: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1FFF04u;
    {
        const bool branch_taken_0x1fff04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff04) {
            ctx->pc = 0x1FFF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF04u;
            // 0x1fff08: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffd08;
        }
    }
    ctx->pc = 0x1FFF0Cu;
label_1fff0c:
    // 0x1fff0c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1fff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fff10:
    // 0x1fff10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fff14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fff18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fff1c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fff20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fff20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fff24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fff28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fff30: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1fff30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1fff34: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1fff34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1fff38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fff38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fff3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fff3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fff40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF40u;
        // 0x1fff44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF48u;
}
