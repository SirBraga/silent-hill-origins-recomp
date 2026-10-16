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

// Function: sub_002DF7B8
// Address: 0x2df7b8 - 0x2dfb18
void sub_002DF7B8_0x2df7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF7B8_0x2df7b8");
#endif

    switch (ctx->pc) {
        case 0x2df7ecu: goto label_2df7ec;
        case 0x2df830u: goto label_2df830;
        case 0x2df864u: goto label_2df864;
        case 0x2df894u: goto label_2df894;
        case 0x2df8acu: goto label_2df8ac;
        case 0x2df8c0u: goto label_2df8c0;
        case 0x2df8fcu: goto label_2df8fc;
        case 0x2df978u: goto label_2df978;
        case 0x2df9a4u: goto label_2df9a4;
        case 0x2df9d0u: goto label_2df9d0;
        case 0x2df9f0u: goto label_2df9f0;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa18u: goto label_2dfa18;
        case 0x2dfa34u: goto label_2dfa34;
        case 0x2dfa58u: goto label_2dfa58;
        case 0x2dfa6cu: goto label_2dfa6c;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa94u: goto label_2dfa94;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfae4u: goto label_2dfae4;
        default: break;
    }

    ctx->pc = 0x2df7b8u;

    // 0x2df7b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2df7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2df7bc: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x2df7c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2df7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2df7c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2df7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2df7c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2df7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2df7cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2df7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2df7d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2df7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2df7d4: 0x108000c7  beqz        $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2DF7D4u;
    {
        const bool branch_taken_0x2df7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7D4u;
        // 0x2df7d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7d4) {
            ctx->pc = 0x2DFAF4u;
            goto label_2dfaf4;
        }
    }
    ctx->pc = 0x2DF7DCu;
    // 0x2df7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2df7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2df7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df7e4: 0xc0b67b2  jal         func_2D9EC8
    ctx->pc = 0x2DF7E4u;
    SET_GPR_U32(ctx, 31, 0x2DF7ECu);
    ctx->pc = 0x2DF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7E4u;
    // 0x2df7e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9EC8u, 0x2DF7E4u, 0x2DF7ECu)) {
        return;
    }
    ctx->pc = 0x2DF7ECu;
label_2df7ec:
    // 0x2df7ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2df7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DF7F0u;
    {
        const bool branch_taken_0x2df7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7F0u;
        // 0x2df7f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7f0) {
            ctx->pc = 0x2DF820u;
            goto label_2df820;
        }
    }
    ctx->pc = 0x2DF7F8u;
    // 0x2df7f8: 0x244743e0  addiu       $a3, $v0, 0x43E0
    ctx->pc = 0x2df7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x2df7fc: 0x68640047  ldl         $a0, 0x47($v1)
    ctx->pc = 0x2df7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2df800: 0x6c640040  ldr         $a0, 0x40($v1)
    ctx->pc = 0x2df800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2df804: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2df804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2df808: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x2df808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df80c: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x2df80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df810: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x2df810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x2df814: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x2df814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df818: 0xe7808c20  swc1        $f0, -0x73E0($gp)
    ctx->pc = 0x2df818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937632), bits); }
    // 0x2df81c: 0x0  nop
    ctx->pc = 0x2df81cu;
    // NOP
label_2df820:
    // 0x2df820: 0x8f909030  lw          $s0, -0x6FD0($gp)
    ctx->pc = 0x2df820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938672)));
    // 0x2df824: 0x27949030  addiu       $s4, $gp, -0x6FD0
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x2df828: 0x121400b2  beq         $s0, $s4, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2DF828u;
    {
        const bool branch_taken_0x2df828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2DF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF828u;
        // 0x2df82c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df828) {
            ctx->pc = 0x2DFAF4u;
            goto label_2dfaf4;
        }
    }
    ctx->pc = 0x2DF830u;
label_2df830:
    // 0x2df830: 0x8f828c1c  lw          $v0, -0x73E4($gp)
    ctx->pc = 0x2df830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x2df834: 0x8f838c14  lw          $v1, -0x73EC($gp)
    ctx->pc = 0x2df834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x2df838: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2df838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df83c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2df83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df840: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2df840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2df844: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2DF844u;
    {
        const bool branch_taken_0x2df844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF844u;
        // 0x2df848: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df844) {
            ctx->pc = 0x2DF9B4u;
            goto label_2df9b4;
        }
    }
    ctx->pc = 0x2DF84Cu;
    // 0x2df84c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2df84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2df850: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2df850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF854u;
    {
        const bool branch_taken_0x2df854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df854) {
            ctx->pc = 0x2DF86Cu;
            goto label_2df86c;
        }
    }
    ctx->pc = 0x2DF85Cu;
    // 0x2df85c: 0xc0b813e  jal         func_2E04F8
    ctx->pc = 0x2DF85Cu;
    SET_GPR_U32(ctx, 31, 0x2DF864u);
    ctx->pc = 0x2DF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF85Cu;
    // 0x2df860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E04F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E04F8u, 0x2DF85Cu, 0x2DF864u)) {
        return;
    }
    ctx->pc = 0x2DF864u;
label_2df864:
    // 0x2df864: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DF864u;
    {
        const bool branch_taken_0x2df864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF864u;
        // 0x2df868: 0xde020008  ld          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df864) {
            ctx->pc = 0x2DF8D0u;
            goto label_2df8d0;
        }
    }
    ctx->pc = 0x2DF86Cu;
label_2df86c:
    // 0x2df86c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF86Cu;
    {
        const bool branch_taken_0x2df86c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF86Cu;
        // 0x2df870: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df86c) {
            ctx->pc = 0x2DF8CCu;
            goto label_2df8cc;
        }
    }
    ctx->pc = 0x2DF874u;
    // 0x2df874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF874u;
    {
        const bool branch_taken_0x2df874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF874u;
        // 0x2df878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df874) {
            ctx->pc = 0x2DF884u;
            goto label_2df884;
        }
    }
    ctx->pc = 0x2DF87Cu;
    // 0x2df87c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF87Cu;
    {
        const bool branch_taken_0x2df87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF87Cu;
        // 0x2df880: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df87c) {
            ctx->pc = 0x2DF894u;
            goto label_2df894;
        }
    }
    ctx->pc = 0x2DF884u;
label_2df884:
    // 0x2df884: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2df884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2df888: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2df888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df88c: 0xc0b678e  jal         func_2D9E38
    ctx->pc = 0x2DF88Cu;
    SET_GPR_U32(ctx, 31, 0x2DF894u);
    ctx->pc = 0x2DF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF88Cu;
    // 0x2df890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9E38u, 0x2DF88Cu, 0x2DF894u)) {
        return;
    }
    ctx->pc = 0x2DF894u;
label_2df894:
    // 0x2df894: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2df894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2df898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df89c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2df89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2df8a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df8a4: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2DF8A4u;
    SET_GPR_U32(ctx, 31, 0x2DF8ACu);
    ctx->pc = 0x2DF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8A4u;
    // 0x2df8a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2DF8A4u, 0x2DF8ACu)) {
        return;
    }
    ctx->pc = 0x2DF8ACu;
label_2df8ac:
    // 0x2df8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2df8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2df8b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df8b8: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2DF8B8u;
    SET_GPR_U32(ctx, 31, 0x2DF8C0u);
    ctx->pc = 0x2DF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8B8u;
    // 0x2df8bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2DF8B8u, 0x2DF8C0u)) {
        return;
    }
    ctx->pc = 0x2DF8C0u;
label_2df8c0:
    // 0x2df8c0: 0x8f838c24  lw          $v1, -0x73DC($gp)
    ctx->pc = 0x2df8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x2df8c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2df8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2df8c8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2df8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_2df8cc:
    // 0x2df8cc: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x2df8ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_2df8d0:
    // 0x2df8d0: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x2df8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2df8d4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2df8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2df8d8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2df8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2df8dc: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2df8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2df8e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2df8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2df8e4: 0x54440080  bnel        $v0, $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2DF8E4u;
    {
        const bool branch_taken_0x2df8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2df8e4) {
            ctx->pc = 0x2DF8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF8E4u;
            // 0x2df8e8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DF8ECu;
    // 0x2df8ec: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2df8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2df8f0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2df8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2df8f4: 0xc0b76d0  jal         func_2DDB40
    ctx->pc = 0x2DF8F4u;
    SET_GPR_U32(ctx, 31, 0x2DF8FCu);
    ctx->pc = 0x2DF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8F4u;
    // 0x2df8f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDB40u, 0x2DF8F4u, 0x2DF8FCu)) {
        return;
    }
    ctx->pc = 0x2DF8FCu;
label_2df8fc:
    // 0x2df8fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df900: 0x8f838c24  lw          $v1, -0x73DC($gp)
    ctx->pc = 0x2df900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x2df904: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2df908: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2df908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df90c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF90Cu;
    {
        const bool branch_taken_0x2df90c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF90Cu;
        // 0x2df910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df90c) {
            ctx->pc = 0x2DF924u;
            goto label_2df924;
        }
    }
    ctx->pc = 0x2DF914u;
    // 0x2df914: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2df914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df918: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2df918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df91c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF91Cu;
    {
        const bool branch_taken_0x2df91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF91Cu;
        // 0x2df920: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df91c) {
            ctx->pc = 0x2DF93Cu;
            goto label_2df93c;
        }
    }
    ctx->pc = 0x2DF924u;
label_2df924:
    // 0x2df924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2df924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2df928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2df92c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2df92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2df930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df934: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2df938: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2df938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df93c:
    // 0x2df93c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2df940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df944: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2df944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2df948: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2df948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2df94c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2df94cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2df950: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df954: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2df954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2df958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df95c: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x2df95cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2df960: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF960u;
    {
        const bool branch_taken_0x2df960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF960u;
        // 0x2df964: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df960) {
            ctx->pc = 0x2DF9A8u;
            goto label_2df9a8;
        }
    }
    ctx->pc = 0x2DF968u;
    // 0x2df968: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2df968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2df96c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2df96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2df970: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF970u;
    {
        const bool branch_taken_0x2df970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df970) {
            ctx->pc = 0x2DF99Cu;
            goto label_2df99c;
        }
    }
    ctx->pc = 0x2DF978u;
label_2df978:
    // 0x2df978: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2df978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2df97c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2df97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2df980: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x2df980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2df984: 0x0  nop
    ctx->pc = 0x2df984u;
    // NOP
    // 0x2df988: 0x0  nop
    ctx->pc = 0x2df988u;
    // NOP
    // 0x2df98c: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DF98Cu;
    {
        const bool branch_taken_0x2df98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF98Cu;
        // 0x2df990: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df98c) {
            ctx->pc = 0x2DF978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df978;
        }
    }
    ctx->pc = 0x2DF994u;
    // 0x2df994: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF994u;
    {
        const bool branch_taken_0x2df994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF994u;
        // 0x2df998: 0x8f828c24  lw          $v0, -0x73DC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df994) {
            ctx->pc = 0x2DF9ACu;
            goto label_2df9ac;
        }
    }
    ctx->pc = 0x2DF99Cu;
label_2df99c:
    // 0x2df99c: 0xc0b813e  jal         func_2E04F8
    ctx->pc = 0x2DF99Cu;
    SET_GPR_U32(ctx, 31, 0x2DF9A4u);
    ctx->pc = 0x2DF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF99Cu;
    // 0x2df9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E04F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E04F8u, 0x2DF99Cu, 0x2DF9A4u)) {
        return;
    }
    ctx->pc = 0x2DF9A4u;
label_2df9a4:
    // 0x2df9a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2df9a8:
    // 0x2df9a8: 0x8f828c24  lw          $v0, -0x73DC($gp)
    ctx->pc = 0x2df9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
label_2df9ac:
    // 0x2df9ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2DF9ACu;
    {
        const bool branch_taken_0x2df9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9ACu;
        // 0x2df9b0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9ac) {
            ctx->pc = 0x2DFAE4u;
            goto label_2dfae4;
        }
    }
    ctx->pc = 0x2DF9B4u;
label_2df9b4:
    // 0x2df9b4: 0x5620004c  bnel        $s1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x2DF9B4u;
    {
        const bool branch_taken_0x2df9b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df9b4) {
            ctx->pc = 0x2DF9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF9B4u;
            // 0x2df9b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DF9BCu;
    // 0x2df9bc: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2df9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x2df9c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df9c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2df9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df9c8: 0xc0b67b2  jal         func_2D9EC8
    ctx->pc = 0x2DF9C8u;
    SET_GPR_U32(ctx, 31, 0x2DF9D0u);
    ctx->pc = 0x2DF9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9C8u;
    // 0x2df9cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9EC8u, 0x2DF9C8u, 0x2DF9D0u)) {
        return;
    }
    ctx->pc = 0x2DF9D0u;
label_2df9d0:
    // 0x2df9d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2df9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9d4: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DF9D4u;
    {
        const bool branch_taken_0x2df9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9D4u;
        // 0x2df9d8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9d4) {
            ctx->pc = 0x2DFAE4u;
            goto label_2dfae4;
        }
    }
    ctx->pc = 0x2DF9DCu;
    // 0x2df9dc: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2df9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2df9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2df9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2df9e8: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2DF9E8u;
    SET_GPR_U32(ctx, 31, 0x2DF9F0u);
    ctx->pc = 0x2DF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9E8u;
    // 0x2df9ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2DF9E8u, 0x2DF9F0u)) {
        return;
    }
    ctx->pc = 0x2DF9F0u;
label_2df9f0:
    // 0x2df9f0: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2df9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df9fc: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DF9FCu;
    SET_GPR_U32(ctx, 31, 0x2DFA04u);
    ctx->pc = 0x2DFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9FCu;
    // 0x2dfa00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DF9FCu, 0x2DFA04u)) {
        return;
    }
    ctx->pc = 0x2DFA04u;
label_2dfa04:
    // 0x2dfa04: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2dfa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dfa08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2dfa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dfa10: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DFA10u;
    SET_GPR_U32(ctx, 31, 0x2DFA18u);
    ctx->pc = 0x2DFA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA10u;
    // 0x2dfa14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DFA10u, 0x2DFA18u)) {
        return;
    }
    ctx->pc = 0x2DFA18u;
label_2dfa18:
    // 0x2dfa18: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2dfa18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfa1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dfa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dfa24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfa28: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2dfa28u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2dfa2c: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2DFA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA34u);
    ctx->pc = 0x2DFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA2Cu;
    // 0x2dfa30: 0x30e70001  andi        $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2DFA2Cu, 0x2DFA34u)) {
        return;
    }
    ctx->pc = 0x2DFA34u;
label_2dfa34:
    // 0x2dfa34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2dfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfa38: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2dfa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2dfa3c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFA3Cu;
    {
        const bool branch_taken_0x2dfa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa3c) {
            ctx->pc = 0x2DFA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA3Cu;
            // 0x2dfa40: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA5Cu;
            goto label_2dfa5c;
        }
    }
    ctx->pc = 0x2DFA44u;
    // 0x2dfa44: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dfa48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dfa50: 0xc0b6726  jal         func_2D9C98
    ctx->pc = 0x2DFA50u;
    SET_GPR_U32(ctx, 31, 0x2DFA58u);
    ctx->pc = 0x2DFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA50u;
    // 0x2dfa54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C98u, 0x2DFA50u, 0x2DFA58u)) {
        return;
    }
    ctx->pc = 0x2DFA58u;
label_2dfa58:
    // 0x2dfa58: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x2dfa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dfa5c:
    // 0x2dfa5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dfa64: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DFA64u;
    SET_GPR_U32(ctx, 31, 0x2DFA6Cu);
    ctx->pc = 0x2DFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA64u;
    // 0x2dfa68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DFA64u, 0x2DFA6Cu)) {
        return;
    }
    ctx->pc = 0x2DFA6Cu;
label_2dfa6c:
    // 0x2dfa6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfa78: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x2DFA78u;
    SET_GPR_U32(ctx, 31, 0x2DFA80u);
    ctx->pc = 0x2DFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA78u;
    // 0x2dfa7c: 0x26070030  addiu       $a3, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x2DFA78u, 0x2DFA80u)) {
        return;
    }
    ctx->pc = 0x2DFA80u;
label_2dfa80:
    // 0x2dfa80: 0x2607003c  addiu       $a3, $s0, 0x3C
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2dfa84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dfa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfa8c: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x2DFA8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA94u);
    ctx->pc = 0x2DFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA8Cu;
    // 0x2dfa90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x2DFA8Cu, 0x2DFA94u)) {
        return;
    }
    ctx->pc = 0x2DFA94u;
label_2dfa94:
    // 0x2dfa94: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x2dfa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dfa98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dfa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfaa0: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DFAA0u;
    SET_GPR_U32(ctx, 31, 0x2DFAA8u);
    ctx->pc = 0x2DFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAA0u;
    // 0x2dfaa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DFAA0u, 0x2DFAA8u)) {
        return;
    }
    ctx->pc = 0x2DFAA8u;
label_2dfaa8:
    // 0x2dfaa8: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x2dfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dfaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfab0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dfab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfab4: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DFAB4u;
    SET_GPR_U32(ctx, 31, 0x2DFABCu);
    ctx->pc = 0x2DFAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAB4u;
    // 0x2dfab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DFAB4u, 0x2DFABCu)) {
        return;
    }
    ctx->pc = 0x2DFABCu;
label_2dfabc:
    // 0x2dfabc: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2dfabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dfac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfac4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dfac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dfac8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2DFAC8u;
    SET_GPR_U32(ctx, 31, 0x2DFAD0u);
    ctx->pc = 0x2DFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAC8u;
    // 0x2dfacc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2DFAC8u, 0x2DFAD0u)) {
        return;
    }
    ctx->pc = 0x2DFAD0u;
label_2dfad0:
    // 0x2dfad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfad4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2dfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dfad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2dfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfadc: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2DFADCu;
    SET_GPR_U32(ctx, 31, 0x2DFAE4u);
    ctx->pc = 0x2DFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFADCu;
    // 0x2dfae0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2DFADCu, 0x2DFAE4u)) {
        return;
    }
    ctx->pc = 0x2DFAE4u;
label_2dfae4:
    // 0x2dfae4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dfae8:
    // 0x2dfae8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2dfae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfaec: 0x1614ff50  bne         $s0, $s4, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x2DFAECu;
    {
        const bool branch_taken_0x2dfaec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x2DFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAECu;
        // 0x2dfaf0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaec) {
            ctx->pc = 0x2DF830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df830;
        }
    }
    ctx->pc = 0x2DFAF4u;
label_2dfaf4:
    // 0x2dfaf4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dfaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfaf8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dfaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfafc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dfafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfb00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dfb00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfb04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2dfb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB0Cu;
        // 0x2dfb10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFB14u;
    // 0x2dfb14: 0x0  nop
    ctx->pc = 0x2dfb14u;
    // NOP
    ctx->pc = 0x2dfb18u;
}
