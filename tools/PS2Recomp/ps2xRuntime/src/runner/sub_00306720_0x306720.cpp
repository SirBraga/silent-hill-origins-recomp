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

// Function: sub_00306720
// Address: 0x306720 - 0x3068c0
void sub_00306720_0x306720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306720_0x306720");
#endif

    switch (ctx->pc) {
        case 0x306748u: goto label_306748;
        case 0x306774u: goto label_306774;
        case 0x306784u: goto label_306784;
        case 0x3067a0u: goto label_3067a0;
        case 0x30682cu: goto label_30682c;
        case 0x306848u: goto label_306848;
        case 0x306854u: goto label_306854;
        case 0x306874u: goto label_306874;
        case 0x306894u: goto label_306894;
        case 0x3068a8u: goto label_3068a8;
        default: break;
    }

    ctx->pc = 0x306720u;

    // 0x306720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x306724: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x306724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x306728: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x306728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30672c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x30672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x306730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x306730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306738: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x306738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30673c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306740: 0xc09270a  jal         func_249C28
    ctx->pc = 0x306740u;
    SET_GPR_U32(ctx, 31, 0x306748u);
    ctx->pc = 0x306744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306740u;
    // 0x306744: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x306740u, 0x306748u)) {
        return;
    }
    ctx->pc = 0x306748u;
label_306748:
    // 0x306748: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x306748u;
    {
        const bool branch_taken_0x306748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306748u;
        // 0x30674c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306748) {
            ctx->pc = 0x306880u;
            goto label_306880;
        }
    }
    ctx->pc = 0x306750u;
    // 0x306750: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x306750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x306754: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x306754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x306758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30675c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x30675cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x306760: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x306760u;
    {
        const bool branch_taken_0x306760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306760u;
        // 0x306764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306760) {
            ctx->pc = 0x306860u;
            goto label_306860;
        }
    }
    ctx->pc = 0x306768u;
    // 0x306768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x306768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30676c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x30676Cu;
    SET_GPR_U32(ctx, 31, 0x306774u);
    ctx->pc = 0x306770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30676Cu;
    // 0x306770: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x30676Cu, 0x306774u)) {
        return;
    }
    ctx->pc = 0x306774u;
label_306774:
    // 0x306774: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x306774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30677c: 0xc093546  jal         func_24D518
    ctx->pc = 0x30677Cu;
    SET_GPR_U32(ctx, 31, 0x306784u);
    ctx->pc = 0x306780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30677Cu;
    // 0x306780: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x30677Cu, 0x306784u)) {
        return;
    }
    ctx->pc = 0x306784u;
label_306784:
    // 0x306784: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x306784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306788: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x306788u;
    {
        const bool branch_taken_0x306788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306788u;
        // 0x30678c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306788) {
            ctx->pc = 0x306838u;
            goto label_306838;
        }
    }
    ctx->pc = 0x306790u;
    // 0x306790: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306790u;
    {
        const bool branch_taken_0x306790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x306794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306790u;
        // 0x306794: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306790) {
            ctx->pc = 0x3067ACu;
            goto label_3067ac;
        }
    }
    ctx->pc = 0x306798u;
    // 0x306798: 0xc092ff4  jal         func_24BFD0
    ctx->pc = 0x306798u;
    SET_GPR_U32(ctx, 31, 0x3067A0u);
    ctx->pc = 0x24BFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BFD0u, 0x306798u, 0x3067A0u)) {
        return;
    }
    ctx->pc = 0x3067A0u;
label_3067a0:
    // 0x3067a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3067a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3067a4: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3067A4u;
    {
        const bool branch_taken_0x3067a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A4u;
        // 0x3067a8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067a4) {
            ctx->pc = 0x3068A8u;
            goto label_3068a8;
        }
    }
    ctx->pc = 0x3067ACu;
label_3067ac:
    // 0x3067ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3067acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3067b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3067b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3067b4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3067b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3067b8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3067b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3067bc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3067bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3067c0: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x3067c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067c4: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x3067c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067c8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3067c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3067cc: 0x6ba70013  ldl         $a3, 0x13($sp)
    ctx->pc = 0x3067ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3067d0: 0x6fa7000c  ldr         $a3, 0xC($sp)
    ctx->pc = 0x3067d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3067d4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3067d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3067d8: 0xb2070017  sdl         $a3, 0x17($s0)
    ctx->pc = 0x3067d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067dc: 0xb6070010  sdr         $a3, 0x10($s0)
    ctx->pc = 0x3067dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067e0: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x3067e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x3067e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3067e8: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x3067e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3067ec: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x3067ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3067f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3067f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3067f4: 0xb2070027  sdl         $a3, 0x27($s0)
    ctx->pc = 0x3067f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067f8: 0xb6070020  sdr         $a3, 0x20($s0)
    ctx->pc = 0x3067f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067fc: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x3067fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x306800: 0x6ba7002b  ldl         $a3, 0x2B($sp)
    ctx->pc = 0x306800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x306804: 0x6fa70024  ldr         $a3, 0x24($sp)
    ctx->pc = 0x306804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x306808: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x306808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x30680c: 0xb2070037  sdl         $a3, 0x37($s0)
    ctx->pc = 0x30680cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306810: 0xb6070030  sdr         $a3, 0x30($s0)
    ctx->pc = 0x306810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306814: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x306814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x306818: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x306818u;
    {
        const bool branch_taken_0x306818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306818u;
        // 0x30681c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306818) {
            ctx->pc = 0x3068A8u;
            goto label_3068a8;
        }
    }
    ctx->pc = 0x306820u;
    // 0x306820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306824: 0xc092dbc  jal         func_24B6F0
    ctx->pc = 0x306824u;
    SET_GPR_U32(ctx, 31, 0x30682Cu);
    ctx->pc = 0x306828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306824u;
    // 0x306828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x306824u, 0x30682Cu)) {
        return;
    }
    ctx->pc = 0x30682Cu;
label_30682c:
    // 0x30682c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x30682Cu;
    {
        const bool branch_taken_0x30682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30682Cu;
        // 0x306830: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30682c) {
            ctx->pc = 0x3068ACu;
            goto label_3068ac;
        }
    }
    ctx->pc = 0x306834u;
    // 0x306834: 0x0  nop
    ctx->pc = 0x306834u;
    // NOP
label_306838:
    // 0x306838: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x306838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x30683c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x30683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x306840: 0xc092848  jal         func_24A120
    ctx->pc = 0x306840u;
    SET_GPR_U32(ctx, 31, 0x306848u);
    ctx->pc = 0x306844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306840u;
    // 0x306844: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x306840u, 0x306848u)) {
        return;
    }
    ctx->pc = 0x306848u;
label_306848:
    // 0x306848: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x306848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x30684c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x30684Cu;
    SET_GPR_U32(ctx, 31, 0x306854u);
    ctx->pc = 0x306850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30684Cu;
    // 0x306850: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x30684Cu, 0x306854u)) {
        return;
    }
    ctx->pc = 0x306854u;
label_306854:
    // 0x306854: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x306854u;
    {
        const bool branch_taken_0x306854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306854u;
        // 0x306858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306854) {
            ctx->pc = 0x3068ACu;
            goto label_3068ac;
        }
    }
    ctx->pc = 0x30685Cu;
    // 0x30685c: 0x0  nop
    ctx->pc = 0x30685cu;
    // NOP
label_306860:
    // 0x306860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306864: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x306868: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x306868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x30686c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30686Cu;
    SET_GPR_U32(ctx, 31, 0x306874u);
    ctx->pc = 0x306870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30686Cu;
    // 0x306870: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30686Cu, 0x306874u)) {
        return;
    }
    ctx->pc = 0x306874u;
label_306874:
    // 0x306874: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x306874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x306878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x306878u;
    {
        const bool branch_taken_0x306878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306878u;
        // 0x30687c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306878) {
            ctx->pc = 0x3068A0u;
            goto label_3068a0;
        }
    }
    ctx->pc = 0x306880u;
label_306880:
    // 0x306880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306884: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x306884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x306888: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x306888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30688c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30688Cu;
    SET_GPR_U32(ctx, 31, 0x306894u);
    ctx->pc = 0x306890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30688Cu;
    // 0x306890: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30688Cu, 0x306894u)) {
        return;
    }
    ctx->pc = 0x306894u;
label_306894:
    // 0x306894: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x306894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306898: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x306898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x30689c: 0x0  nop
    ctx->pc = 0x30689cu;
    // NOP
label_3068a0:
    // 0x3068a0: 0xc09281a  jal         func_24A068
    ctx->pc = 0x3068A0u;
    SET_GPR_U32(ctx, 31, 0x3068A8u);
    ctx->pc = 0x3068A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068A0u;
    // 0x3068a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3068A0u, 0x3068A8u)) {
        return;
    }
    ctx->pc = 0x3068A8u;
label_3068a8:
    // 0x3068a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3068a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3068ac:
    // 0x3068ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3068acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3068b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3068b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3068b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3068b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3068b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3068B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3068BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068B8u;
        // 0x3068bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3068B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3068C0u;
}
