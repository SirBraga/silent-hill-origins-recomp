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

// Function: sub_002AB048
// Address: 0x2ab048 - 0x2ab2a0
void sub_002AB048_0x2ab048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB048_0x2ab048");
#endif

    switch (ctx->pc) {
        case 0x2ab0d8u: goto label_2ab0d8;
        case 0x2ab0f0u: goto label_2ab0f0;
        case 0x2ab100u: goto label_2ab100;
        case 0x2ab138u: goto label_2ab138;
        default: break;
    }

    ctx->pc = 0x2ab048u;

    // 0x2ab048: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x2ab048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x2ab04c: 0x8f8287d8  lw          $v0, -0x7828($gp)
    ctx->pc = 0x2ab04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
    // 0x2ab050: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x2ab050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x2ab054: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2ab054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab058: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x2ab058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x2ab05c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab060: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x2ab060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x2ab064: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ab064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ab068: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x2ab068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x2ab06c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ab06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab070: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x2ab070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x2ab074: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x2ab074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x2ab078: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x2ab078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x2ab07c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2ab07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2ab080: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ab080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab084: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x2ab084u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ab088: 0x10a0007a  beqz        $a1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2AB088u;
    {
        const bool branch_taken_0x2ab088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB088u;
        // 0x2ab08c: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab088) {
            ctx->pc = 0x2AB274u;
            goto label_2ab274;
        }
    }
    ctx->pc = 0x2AB090u;
    // 0x2ab090: 0x8cb30024  lw          $s3, 0x24($a1)
    ctx->pc = 0x2ab090u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2ab094: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ab094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab098: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x2ab098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab09c: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x2ab09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab0a0: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x2ab0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ab0a4: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x2ab0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab0a8: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x2ab0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab0ac: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x2ab0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x2ab0b0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0b4: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x2ab0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ab0b8: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x2ab0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ab0bc: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab0c0: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2ab0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab0c4: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2ab0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab0c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ab0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0cc: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2ab0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2ab0d0: 0xc0c2538  jal         func_3094E0
    ctx->pc = 0x2AB0D0u;
    SET_GPR_U32(ctx, 31, 0x2AB0D8u);
    ctx->pc = 0x2AB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0D0u;
    // 0x2ab0d4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3094E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3094E0u, 0x2AB0D0u, 0x2AB0D8u)) {
        return;
    }
    ctx->pc = 0x2AB0D8u;
label_2ab0d8:
    // 0x2ab0d8: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2ab0dc: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x2ab0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2ab0e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ab0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0e4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2AB0E4u;
    {
        const bool branch_taken_0x2ab0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0E4u;
        // 0x2ab0e8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0e4) {
            ctx->pc = 0x2AB258u;
            goto label_2ab258;
        }
    }
    ctx->pc = 0x2AB0ECu;
    // 0x2ab0ec: 0x0  nop
    ctx->pc = 0x2ab0ecu;
    // NOP
label_2ab0f0:
    // 0x2ab0f0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2ab0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2ab0f4: 0x27a60172  addiu       $a2, $sp, 0x172
    ctx->pc = 0x2ab0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 370));
    // 0x2ab0f8: 0xc0c24be  jal         func_3092F8
    ctx->pc = 0x2AB0F8u;
    SET_GPR_U32(ctx, 31, 0x2AB100u);
    ctx->pc = 0x2AB0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0F8u;
    // 0x2ab0fc: 0x27a70174  addiu       $a3, $sp, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3092F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3092F8u, 0x2AB0F8u, 0x2AB100u)) {
        return;
    }
    ctx->pc = 0x2AB100u;
label_2ab100:
    // 0x2ab100: 0x97a80170  lhu         $t0, 0x170($sp)
    ctx->pc = 0x2ab100u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ab104: 0x97a20172  lhu         $v0, 0x172($sp)
    ctx->pc = 0x2ab104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 370)));
    // 0x2ab108: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ab108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ab10c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2ab10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ab110: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2AB110u;
    {
        const bool branch_taken_0x2ab110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB110u;
        // 0x2ab114: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab110) {
            ctx->pc = 0x2AB254u;
            goto label_2ab254;
        }
    }
    ctx->pc = 0x2AB118u;
    // 0x2ab118: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab11c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ab11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab120: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ab120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab124: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AB124u;
    {
        const bool branch_taken_0x2ab124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB124u;
        // 0x2ab128: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab124) {
            ctx->pc = 0x2AB254u;
            goto label_2ab254;
        }
    }
    ctx->pc = 0x2AB12Cu;
    // 0x2ab12c: 0x240b004c  addiu       $t3, $zero, 0x4C
    ctx->pc = 0x2ab12cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ab130: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2ab130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ab134: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x2ab134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ab138:
    // 0x2ab138: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB138u;
    {
        const bool branch_taken_0x2ab138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB138u;
        // 0x2ab13c: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab138) {
            ctx->pc = 0x2AB14Cu;
            goto label_2ab14c;
        }
    }
    ctx->pc = 0x2AB140u;
    // 0x2ab140: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ab144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB144u;
    {
        const bool branch_taken_0x2ab144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB144u;
        // 0x2ab148: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab144) {
            ctx->pc = 0x2AB150u;
            goto label_2ab150;
        }
    }
    ctx->pc = 0x2AB14Cu;
label_2ab14c:
    // 0x2ab14c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2ab14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ab150:
    // 0x2ab150: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab154: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2ab154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ab158: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ab158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab15c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2ab15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2ab160: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2ab160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ab164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ab168: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ab168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ab16c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2ab16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ab170: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab174: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2ab174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab178: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ab17c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2ab17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ab180: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2ab180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ab184: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x2ab184u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ab188: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x2ab188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab18c: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x2ab18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab190: 0xaccc0008  sw          $t4, 0x8($a2)
    ctx->pc = 0x2ab190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 12));
    // 0x2ab194: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2ab194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ab198: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x2ab198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab19c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2ab19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ab1a0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2ab1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ab1a4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2ab1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ab1a8: 0x8c6c0008  lw          $t4, 0x8($v1)
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ab1ac: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x2ab1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab1b0: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x2ab1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab1b4: 0xaccc0018  sw          $t4, 0x18($a2)
    ctx->pc = 0x2ab1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 12));
    // 0x2ab1b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2ab1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ab1bc: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2ab1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab1c0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2ab1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ab1c4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2ab1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ab1c8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2ab1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ab1cc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2ab1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ab1d0: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x2ab1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab1d4: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x2ab1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab1d8: 0xacc50028  sw          $a1, 0x28($a2)
    ctx->pc = 0x2ab1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 5));
    // 0x2ab1dc: 0xacd20040  sw          $s2, 0x40($a2)
    ctx->pc = 0x2ab1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 18));
    // 0x2ab1e0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ab1e4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AB1E4u;
    {
        const bool branch_taken_0x2ab1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1E4u;
        // 0x2ab1e8: 0xacc70044  sw          $a3, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1e4) {
            ctx->pc = 0x2AB21Cu;
            goto label_2ab21c;
        }
    }
    ctx->pc = 0x2AB1ECu;
    // 0x2ab1ec: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x2ab1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x2ab1f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ab1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab1f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab1f8: 0x30e40007  andi        $a0, $a3, 0x7
    ctx->pc = 0x2ab1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x2ab1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab200: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ab200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab204: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ab208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab20c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ab210: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2ab210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2ab214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB214u;
    {
        const bool branch_taken_0x2ab214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB214u;
        // 0x2ab218: 0xacc20048  sw          $v0, 0x48($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab214) {
            ctx->pc = 0x2AB220u;
            goto label_2ab220;
        }
    }
    ctx->pc = 0x2AB21Cu;
label_2ab21c:
    // 0x2ab21c: 0xacca0048  sw          $t2, 0x48($a2)
    ctx->pc = 0x2ab21cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 10));
label_2ab220:
    // 0x2ab220: 0x97a20170  lhu         $v0, 0x170($sp)
    ctx->pc = 0x2ab220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ab224: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2ab224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ab228: 0x97a40172  lhu         $a0, 0x172($sp)
    ctx->pc = 0x2ab228u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 370)));
    // 0x2ab22c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x2ab22cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab230: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ab230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ab234: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2ab234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ab238: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB238u;
    {
        const bool branch_taken_0x2ab238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB238u;
        // 0x2ab23c: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab238) {
            ctx->pc = 0x2AB254u;
            goto label_2ab254;
        }
    }
    ctx->pc = 0x2AB240u;
    // 0x2ab240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab244: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ab244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab248: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ab248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab24c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2AB24Cu;
    {
        const bool branch_taken_0x2ab24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB24Cu;
        // 0x2ab250: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab24c) {
            ctx->pc = 0x2AB138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab138;
        }
    }
    ctx->pc = 0x2AB254u;
label_2ab254:
    // 0x2ab254: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2ab254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ab258:
    // 0x2ab258: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB258u;
    {
        const bool branch_taken_0x2ab258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB258u;
        // 0x2ab25c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab258) {
            ctx->pc = 0x2AB278u;
            goto label_2ab278;
        }
    }
    ctx->pc = 0x2AB260u;
    // 0x2ab260: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab264: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ab264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab268: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ab268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab26c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2AB26Cu;
    {
        const bool branch_taken_0x2ab26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB26Cu;
        // 0x2ab270: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab26c) {
            ctx->pc = 0x2AB0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab0f0;
        }
    }
    ctx->pc = 0x2AB274u;
label_2ab274:
    // 0x2ab274: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ab274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab278:
    // 0x2ab278: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x2ab278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2ab27c: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x2ab27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2ab280: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x2ab280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2ab284: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x2ab284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2ab288: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x2ab288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ab28c: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x2ab28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ab290: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x2ab290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ab294: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2ab294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ab298: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB298u;
        // 0x2ab29c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB2A0u;
}
