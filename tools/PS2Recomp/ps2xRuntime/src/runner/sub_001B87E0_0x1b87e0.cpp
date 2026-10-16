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

// Function: sub_001B87E0
// Address: 0x1b87e0 - 0x1b8908
void sub_001B87E0_0x1b87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B87E0_0x1b87e0");
#endif

    switch (ctx->pc) {
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        case 0x1b88dcu: goto label_1b88dc;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b88e8u: goto label_1b88e8;
        case 0x1b88ecu: goto label_1b88ec;
        case 0x1b88f0u: goto label_1b88f0;
        case 0x1b88f4u: goto label_1b88f4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8900u: goto label_1b8900;
        case 0x1b8904u: goto label_1b8904;
        default: break;
    }

    ctx->pc = 0x1b87e0u;

label_1b87e0:
    // 0x1b87e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b87e4:
    // 0x1b87e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b87e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b87e8:
    // 0x1b87e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b87ec:
    // 0x1b87ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b87f0:
    // 0x1b87f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b87f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b87f4:
    // 0x1b87f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b87f8:
    // 0x1b87f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b87fc:
    // 0x1b87fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b8800:
    // 0x1b8800: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1b8800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
label_1b8804:
    // 0x1b8804: 0xc0c493d  jal         func_3124F4
label_1b8808:
    if (ctx->pc == 0x1B8808u) {
        ctx->pc = 0x1B8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8804u;
        // 0x1b8808: 0x26110318  addiu       $s1, $s0, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B880Cu;
        goto label_1b880c;
    }
    ctx->pc = 0x1B8804u;
    SET_GPR_U32(ctx, 31, 0x1B880Cu);
    ctx->pc = 0x1B8808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8804u;
    // 0x1b8808: 0x26110318  addiu       $s1, $s0, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8804u, 0x1B880Cu)) {
        return;
    }
    ctx->pc = 0x1B880Cu;
label_1b880c:
    // 0x1b880c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8810:
    // 0x1b8810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b8814:
    // 0x1b8814: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1b8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8818:
    // 0x1b8818: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1b8818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1b881c:
    // 0x1b881c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8820:
    // 0x1b8820: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1b8824:
    // 0x1b8824: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8828:
    // 0x1b8828: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1b8828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b882c:
    // 0x1b882c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1b882cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b8830:
    // 0x1b8830: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b8830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b8834:
    // 0x1b8834: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b8834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1b8838:
    // 0x1b8838: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1b8838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b883c:
    // 0x1b883c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1b883cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b8840:
    // 0x1b8840: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1b8840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b8844:
    // 0x1b8844: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1b8844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b8848:
    // 0x1b8848: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1b8848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b884c:
    // 0x1b884c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1b884cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8850:
    // 0x1b8850: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1b8850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8854:
    // 0x1b8854: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1b8854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8858:
    // 0x1b8858: 0xc06cda0  jal         func_1B3680
label_1b885c:
    if (ctx->pc == 0x1B885Cu) {
        ctx->pc = 0x1B885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8858u;
        // 0x1b885c: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8860u;
        goto label_1b8860;
    }
    ctx->pc = 0x1B8858u;
    SET_GPR_U32(ctx, 31, 0x1B8860u);
    ctx->pc = 0x1B885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8858u;
    // 0x1b885c: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1B8858u, 0x1B8860u)) {
        return;
    }
    ctx->pc = 0x1B8860u;
label_1b8860:
    // 0x1b8860: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1b8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b8864:
    // 0x1b8864: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1b8868:
    // 0x1b8868: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1b8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1b886c:
    // 0x1b886c: 0x60f809  jalr        $v1
label_1b8870:
    if (ctx->pc == 0x1B8870u) {
        ctx->pc = 0x1B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B886Cu;
        // 0x1b8870: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8874u;
        goto label_1b8874;
    }
    ctx->pc = 0x1B886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8874u);
        ctx->pc = 0x1B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B886Cu;
        // 0x1b8870: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B886Cu, 0x1B8874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8874u;
label_1b8874:
    // 0x1b8874: 0x8e040330  lw          $a0, 0x330($s0)
    ctx->pc = 0x1b8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_1b8878:
    // 0x1b8878: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b8878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1b887c:
    // 0x1b887c: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x1b887cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1b8880:
    // 0x1b8880: 0xc085d44  jal         func_217510
label_1b8884:
    if (ctx->pc == 0x1B8884u) {
        ctx->pc = 0x1B8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8880u;
        // 0x1b8884: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8888u;
        goto label_1b8888;
    }
    ctx->pc = 0x1B8880u;
    SET_GPR_U32(ctx, 31, 0x1B8888u);
    ctx->pc = 0x1B8884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8880u;
    // 0x1b8884: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x1B8880u, 0x1B8888u)) {
        return;
    }
    ctx->pc = 0x1B8888u;
label_1b8888:
    // 0x1b8888: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x1b8888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
label_1b888c:
    // 0x1b888c: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x1b888cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
label_1b8890:
    // 0x1b8890: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b8894:
    // 0x1b8894: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1b8898:
    if (ctx->pc == 0x1B8898u) {
        ctx->pc = 0x1B8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8894u;
        // 0x1b8898: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B889Cu;
        goto label_1b889c;
    }
    ctx->pc = 0x1B8894u;
    {
        const bool branch_taken_0x1b8894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8894u;
        // 0x1b8898: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8894) {
            ctx->pc = 0x1B88F4u;
            goto label_1b88f4;
        }
    }
    ctx->pc = 0x1B889Cu;
label_1b889c:
    // 0x1b889c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b889cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b88a0:
    // 0x1b88a0: 0x0  nop
    ctx->pc = 0x1b88a0u;
    // NOP
label_1b88a4:
    // 0x1b88a4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
label_1b88a8:
    if (ctx->pc == 0x1B88A8u) {
        ctx->pc = 0x1B88ACu;
        goto label_1b88ac;
    }
    ctx->pc = 0x1B88A4u;
    {
        const bool branch_taken_0x1b88a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88a4) {
            ctx->pc = 0x1B8894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8894;
        }
    }
    ctx->pc = 0x1B88ACu;
label_1b88ac:
    // 0x1b88ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b88acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b88b0:
    // 0x1b88b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b88b4:
    if (ctx->pc == 0x1B88B4u) {
        ctx->pc = 0x1B88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88B0u;
        // 0x1b88b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88B8u;
        goto label_1b88b8;
    }
    ctx->pc = 0x1B88B0u;
    {
        const bool branch_taken_0x1b88b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88B0u;
        // 0x1b88b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88b0) {
            ctx->pc = 0x1B88C0u;
            goto label_1b88c0;
        }
    }
    ctx->pc = 0x1B88B8u;
label_1b88b8:
    // 0x1b88b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b88bc:
    if (ctx->pc == 0x1B88BCu) {
        ctx->pc = 0x1B88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88B8u;
        // 0x1b88bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88C0u;
        goto label_1b88c0;
    }
    ctx->pc = 0x1B88B8u;
    {
        const bool branch_taken_0x1b88b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88B8u;
        // 0x1b88bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88b8) {
            ctx->pc = 0x1B88C4u;
            goto label_1b88c4;
        }
    }
    ctx->pc = 0x1B88C0u;
label_1b88c0:
    // 0x1b88c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b88c4:
    // 0x1b88c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b88c8:
    // 0x1b88c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b88cc:
    if (ctx->pc == 0x1B88CCu) {
        ctx->pc = 0x1B88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88C8u;
        // 0x1b88cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88D0u;
        goto label_1b88d0;
    }
    ctx->pc = 0x1B88C8u;
    {
        const bool branch_taken_0x1b88c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88C8u;
        // 0x1b88cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88c8) {
            ctx->pc = 0x1B88D8u;
            goto label_1b88d8;
        }
    }
    ctx->pc = 0x1B88D0u;
label_1b88d0:
    // 0x1b88d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b88d4:
    if (ctx->pc == 0x1B88D4u) {
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88D8u;
        goto label_1b88d8;
    }
    ctx->pc = 0x1B88D0u;
    {
        const bool branch_taken_0x1b88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88d0) {
            ctx->pc = 0x1B88DCu;
            goto label_1b88dc;
        }
    }
    ctx->pc = 0x1B88D8u;
label_1b88d8:
    // 0x1b88d8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b88dc:
    // 0x1b88dc: 0xc0808b8  jal         func_2022E0
label_1b88e0:
    if (ctx->pc == 0x1B88E0u) {
        ctx->pc = 0x1B88E4u;
        goto label_1b88e4;
    }
    ctx->pc = 0x1B88DCu;
    SET_GPR_U32(ctx, 31, 0x1B88E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B88DCu, 0x1B88E4u)) {
        return;
    }
    ctx->pc = 0x1B88E4u;
label_1b88e4:
    // 0x1b88e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b88e8:
    // 0x1b88e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b88ec:
    // 0x1b88ec: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1b88f0:
    if (ctx->pc == 0x1B88F0u) {
        ctx->pc = 0x1B88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88ECu;
        // 0x1b88f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88F4u;
        goto label_1b88f4;
    }
    ctx->pc = 0x1B88ECu;
    {
        const bool branch_taken_0x1b88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88ECu;
        // 0x1b88f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88ec) {
            ctx->pc = 0x1B8890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8890;
        }
    }
    ctx->pc = 0x1B88F4u;
label_1b88f4:
    // 0x1b88f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b88f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b88f8:
    // 0x1b88f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b88f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b88fc:
    // 0x1b88fc: 0x3e00008  jr          $ra
label_1b8900:
    if (ctx->pc == 0x1B8900u) {
        ctx->pc = 0x1B8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88FCu;
        // 0x1b8900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8904u;
        goto label_1b8904;
    }
    ctx->pc = 0x1B88FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88FCu;
        // 0x1b8900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B88FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8904u;
label_1b8904:
    // 0x1b8904: 0x0  nop
    ctx->pc = 0x1b8904u;
    // NOP
    ctx->pc = 0x1b8908u;
}
